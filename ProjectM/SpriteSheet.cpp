#include "pch.h"
#include "SpriteSheet.h"
#include <list>
SpriteSheet::SpriteSheet(const wchar_t* filename, shared_ptr<Graphics> gfx)
{
	this->gfx = gfx;
	bmp = NULL;
	HRESULT hr;

	IWICImagingFactory* wicFactory = NULL;

	hr = CoCreateInstance(
		CLSID_WICImagingFactory,
		NULL,
		CLSCTX_INPROC_SERVER,
		IID_PPV_ARGS(&wicFactory));
	if (FAILED(hr))
	{
		return;
	}

	IWICBitmapDecoder* wicDecoder = NULL;
	hr = wicFactory->CreateDecoderFromFilename(
		filename,
		NULL,
		GENERIC_READ,
		WICDecodeMetadataCacheOnLoad,
		&wicDecoder);
	if (hr != S_OK) { return; }

	IWICBitmapFrameDecode* wicFrame = NULL;
	hr = wicDecoder->GetFrame(0, &wicFrame);


	IWICFormatConverter* wicConverter = NULL;
	hr = wicFactory->CreateFormatConverter(&wicConverter);


	hr = wicConverter->Initialize(
		wicFrame,
		GUID_WICPixelFormat32bppPBGRA,
		WICBitmapDitherTypeNone,
		NULL,
		0.0,
		WICBitmapPaletteTypeCustom
	);

	gfx->GetRenderTarget()->CreateBitmapFromWicBitmap(
		wicConverter,
		NULL,
		&bmp
	);

	if (wicFactory) wicFactory->Release();
	if (wicConverter)wicConverter->Release();
	if (wicDecoder)wicDecoder->Release();
	if (wicFrame)wicFrame->Release();

	spriteWidth = bmp->GetSize().width;
	spriteHeight = bmp->GetSize().height;
	spriteAccross = 1;
}
SpriteSheet::SpriteSheet(const wchar_t* filename, shared_ptr<Graphics> gfx, int spriteWidth, int spriteHeight) :
	SpriteSheet(filename, gfx)
{
	this->spriteHeight = spriteHeight;
	this->spriteWidth = spriteWidth;
	this->spriteAccross = (int)bmp->GetSize().width / spriteWidth;
}
SpriteSheet::SpriteSheet(const wchar_t* filename, shared_ptr<Graphics> gfx, bool fullScreen)
 : SpriteSheet(filename,gfx)
{
	if (fullScreen)
	{
		this->spriteHeight = BATTLESIZE_Y;
		this->spriteWidth = WINDOWSIZE_X;
	}
}
SpriteSheet::~SpriteSheet()
{
}

void SpriteSheet::Draw()
{
	gfx->GetRenderTarget()->DrawBitmap(
		bmp,
		D2D1::RectF(0.0f, 0.0f,
			bmp->GetSize().width, bmp->GetSize().height),
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}
void SpriteSheet::Draw(int x, int y)
{
	D2D_RECT_F dest = D2D1::RectF(
		x, y,
		x + (spriteWidth * 2), y + (spriteHeight * 2));
	gfx->GetRenderTarget()->DrawBitmap(
		bmp,
		dest,
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}
void SpriteSheet::Draw(int x, int y,int width,int height)
{
	D2D_RECT_F dest = D2D1::RectF(
		x, y,
		x + (width * 2), y + (height * 2));
	gfx->GetRenderTarget()->DrawBitmap(
		bmp,
		dest,
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, width, height)
	);
}
void SpriteSheet::Draw(bool fullScreen)
{
	gfx->GetRenderTarget()->DrawBitmap(
		bmp,
		D2D1::RectF(0.0f, 0.0f,
			this->spriteWidth, this->spriteHeight),
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}
void SpriteSheet::Draw(int index, int x, int y)
{
	D2D_RECT_F src = D2D1::RectF(
		(float)((index % spriteAccross) * spriteWidth),
		(float)((index / spriteAccross) * spriteHeight),
		(float)((index % spriteAccross) * spriteWidth) + spriteWidth,
		(float)((index / spriteAccross) * spriteHeight) + spriteHeight);

	D2D_RECT_F dest = D2D1::RectF(
		x, y,
		x + (spriteWidth * 2), y + (spriteHeight * 2));

	gfx->GetRenderTarget()->DrawBitmap(
		bmp,
		dest,
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		src
	);
}