#pragma once
struct Resource
{
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
	void Draw(LPCWSTR file,int height,int width,int x,int y);
public:
	vector<Resource> resource;
};
