#pragma once
class Input
{
public:
	static void KeyDown(WPARAM wparam);
	static void KeyUp(WPARAM wparam);
};
// KeyDown 일때 키값을 on k k의 키값을 true로만든다.
// KeyUp 키값을 k false;

// while(keocode(1))
// player의 직업을 1번 직업으로 한다