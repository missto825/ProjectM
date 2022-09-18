#include "pch.h"
#include "Drawing.h"


//
void Drawing::Init(HWND hwnd)
{
	RECT rect = { 0, 0, WINDOWSIZE_X, WINDOWSIZE_Y };
	::AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);
	::SetWindowPos(hwnd, 0, 100, 100, WINDOWSIZE_X, WINDOWSIZE_X, 0);
}
void Drawing::RedrawWindow(HWND hWnd)
{
	PAINTSTRUCT PaintStruct;
	HDC hdc = BeginPaint(hWnd, &PaintStruct);

	auto hdcBuffer = CreateCompatibleDC(hdc);
	auto hBitmapBuffer = CreateCompatibleBitmap(hdc, WINDOWSIZE_X, WINDOWSIZE_Y);
	SelectObject(hdcBuffer, hBitmapBuffer);

	HBITMAP hImage, hOldBitMap;
	for (int i = 0; i < this->resource.size(); i++)
	{
		hImage = (HBITMAP)LoadImage(NULL, this->resource[i].file, IMAGE_BITMAP, this->resource[i].height, this->resource[i].width, LR_LOADFROMFILE | LR_CREATEDIBSECTION);

		hOldBitMap = (HBITMAP)SelectObject(hdcBuffer, hImage);
		 
		BitBlt(hdc, this->resource[i].x, this->resource[i].y, WINDOWSIZE_X, WINDOWSIZE_Y, hdcBuffer, 0, 0, SRCCOPY);

	}
	DeleteDC(hdcBuffer);
	DeleteObject(hBitmapBuffer);
	EndPaint(hWnd, &PaintStruct);
}

void Drawing::Draw(LPCWSTR file, int height, int width, int x, int y)
{
	Resource _resource;
	_resource.file = file;
	_resource.height = height;
	_resource.width = width;
	_resource.x = x;
	_resource.y = y;
	this->resource.push_back(_resource);
}
