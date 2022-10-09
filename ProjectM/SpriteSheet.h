#pragma once
#include "pch.h"
#include "Graphics.h"
class SpriteSheet
{
	shared_ptr<Graphics> gfx;
	ID2D1Bitmap* bmp;
	int spriteWidth, spriteHeight;
	int spriteAccross;

public:
	SpriteSheet(const wchar_t* filename, shared_ptr<Graphics> gfx);
	SpriteSheet(const wchar_t* filename, shared_ptr<Graphics> gfx, int spriteWidth, int spriteHeight);

	~SpriteSheet();

	void Draw();
	void Draw(int index, int x, int y);

};

