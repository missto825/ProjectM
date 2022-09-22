#pragma once


struct Resource
{
	LPCWSTR name;
	LPCWSTR file;
	int height;
	int width;
	int x;
	int y;
};
class Drawing
{
public:
	void Init(HWND hWnd);
	void RedrawWindow(HWND hWnd);
public:
	void Draw(LPCWSTR name,LPCWSTR file,int height,int width,int x,int y);
	bool isDraw = true;
public:
	HWND _hWnd;
	vector<Resource> _drawBuffer;
	vector<HBITMAP> _myBitmap;
};
