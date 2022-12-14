#pragma once

#include <windows.h>
#include <tchar.h>
#include <memory>
#include <string>
#include <vector>
#include <array>
#include <list>
#include <map>
#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <stdlib.h>
using int8 = __int8;
using int16 = __int16;
using int32 = __int32;
using int64 = __int64;
using uint8 = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;

#include <wincodec.h>
#include <wincodecsdk.h>
#include <d3d12.h>
#include <d2d1.h>
#include <wrl.h>
#include <d3dcompiler.h>
#include <dxgi.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <DirectXColors.h>
using namespace DirectX;
using namespace DirectX::PackedVector;
using namespace Microsoft::WRL;
// 윈도우 사이즈 뭐로 할까요
#define WINDOWSIZE_X 1280
#define WINDOWSIZE_Y 960

using namespace std;


// 게임 전역 객체
extern unique_ptr<class Game> GGame;
#define PLAYER			GGame->GetPlayer();


#define DECLARE_SINGLE(type)		\
private:							\
	type() {}						\
	~type() {}						\
public:								\
	static type* GetInstance()		\
	{								\
		static type instance;		\
		return &instance;			\
	}								\

#define GET_SINGLE(type)	type::GetInstance()

// 배틀 배경 세로 크기
#define BATTLESIZE_Y 680

#define RUN 10001
#define ATTACK 10002
#define DEFENCE 10003
#define SKILL 10004

#define WARRIOR 10005
#define MAGE 10006
#define ACHER 10007
#define THIEF 10008

#define NAME_SIZE 30


#define Knignt1 01
#define Knignt2 02
#define Knignt3 03
#define Knignt4 04
#define Knignt5 05
#define Knignt6 06
#define Knignt7 07
#define Knignt8 08 
#define Knignt9 09
#define Knignt10 010


