#pragma once
#include "Graphics.h"
// 장면 - 드라마를 인물 어떤 여자가 차를 타고 다른 여자 집으로
// 여자가 차타고 1시간 가는 장면 다 보여주지 않는다
// 보통은 여자집 + 다른 여자집으로 전환된다 화면이
// 캐릭터 선택창 + 배틀로 전환한다 화면을
class Scene 
{
protected:
	static shared_ptr<Graphics> gfx;
public:
	static void Init(shared_ptr<Graphics> graphics)
	{
		gfx = graphics;
	}

	virtual void Load();
	virtual void Unload();
	virtual void Render(shared_ptr<Graphics> gfx);
	virtual void Update();

protected:
};
