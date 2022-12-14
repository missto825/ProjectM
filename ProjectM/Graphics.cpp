#include "pch.h"
#include "Graphics.h"

Graphics::Graphics()
{
    _factory = nullptr;
    _rendertarget = nullptr;
}

Graphics::~Graphics()
{
    if (_factory) _factory->Release();
    if (_rendertarget) _rendertarget->Release();
}

bool Graphics::Init(HWND windowHandle)
{
    HRESULT res = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED,&_factory);
    if (res != S_OK) return false;

    RECT rect;
    GetClientRect(windowHandle, &rect);

    res = _factory->CreateHwndRenderTarget(
        D2D1::RenderTargetProperties(),
        D2D1::HwndRenderTargetProperties(
            windowHandle, D2D1::SizeU(rect.right, rect.bottom)),
        &_rendertarget
    );

    if (res != S_OK) return false;

    return true;

}

void Graphics::ClearScreen(float r, float g, float b)
{
    _rendertarget->Clear(D2D1::ColorF(r, g, b));
}