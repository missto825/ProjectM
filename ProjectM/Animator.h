#pragma once
#include "pch.h"
#include "SpriteSheet.h"
struct Trigger
{
	
};
struct Animation
{
	int num;
	SpriteSheet ani;
	
};
class Animator
{
public:
	Animator(int num);
public:
	vector<Animation> animation;

	void ChangeAnimation(int num);
	
};


