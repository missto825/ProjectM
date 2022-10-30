#pragma once
#include "pch.h"
class Graphics
{
private:

	ID2D1Factory* _factory;
	ID2D1HwndRenderTarget* _rendertarget;
public:
	Graphics();
	~Graphics();
	bool Init(HWND windowHandle);

	ComPtr<ID2D1RenderTarget> GetRenderTarget()
	{
		return _rendertarget;
	}


	void BeginDraw() { _rendertarget->BeginDraw(); }
	void EndDraw() { _rendertarget->EndDraw(); }


	void ClearScreen(float r, float g, float b);
	void DrawCircle(float x, float y, float radius, float r, float g, float b, float a);
};