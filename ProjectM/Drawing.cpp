#include "pch.h"
#include "Drawing.h"
void Drawing::Init(HWND hwnd)
{
	_hWnd = hwnd;
	RECT rect = { 0, 0, WINDOWSIZE_X, WINDOWSIZE_Y };
	::AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);
	::SetWindowPos(_hWnd, 0, 100, 100, WINDOWSIZE_X, WINDOWSIZE_X, 0);
}
void Drawing::RedrawWindow(HWND hWnd)
{
	PAINTSTRUCT PaintStruct;
	HDC hdc = BeginPaint(hWnd, &PaintStruct);

	auto hdcBuffer = CreateCompatibleDC(hdc);
	auto hBitmapBuffer = CreateCompatibleBitmap(hdc, WINDOWSIZE_X, WINDOWSIZE_Y);
	SelectObject(hdcBuffer, hBitmapBuffer);

	HBITMAP hImage, hOldBitMap;
	for (int i = 0; i < this->_drawBuffer.size(); i++)
	{
		hImage = (HBITMAP)LoadImage(NULL, this->_drawBuffer[i].file, IMAGE_BITMAP, this->_drawBuffer[i].height, this->_drawBuffer[i].width, LR_LOADFROMFILE | LR_CREATEDIBSECTION);

		if (isDraw)
		{
			hOldBitMap = (HBITMAP)SelectObject(hdcBuffer, hImage);
			_myBitmap.push_back(hOldBitMap);
			BitBlt(hdc, this->_drawBuffer[i].x, this->_drawBuffer[i].y, WINDOWSIZE_X, WINDOWSIZE_Y, hdcBuffer, 0, 0, SRCCOPY);


		}
	}
	DeleteDC(hdcBuffer);
	DeleteObject(hBitmapBuffer);
	EndPaint(hWnd, &PaintStruct);
}

void Drawing::Draw(LPCWSTR name,LPCWSTR file, int height, int width, int x, int y)
{
	//shared_ptr<Resource> resource = make_shared<Resource>();
	Resource resource;
	resource.name = name;
	resource.file = file;
	resource.height = height;
	resource.width = width;
	resource.x = x;
	resource.y = y;
	this->_drawBuffer.push_back(resource);
}
