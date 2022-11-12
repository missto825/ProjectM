#pragma once
#include "Graphics.h"
// ��� - ��󸶸� �ι� � ���ڰ� ���� Ÿ�� �ٸ� ���� ������
// ���ڰ� ��Ÿ�� 1�ð� ���� ��� �� �������� �ʴ´�
// ������ ������ + �ٸ� ���������� ��ȯ�ȴ� ȭ����
// ĳ���� ����â + ��Ʋ�� ��ȯ�Ѵ� ȭ����
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
