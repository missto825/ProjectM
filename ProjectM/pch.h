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


using int8 = __int8;
using int16 = __int16;
using int32 = __int32;
using int64 = __int64;
using uint8 = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;
// 윈도우 사이즈 뭐로 할까요
#define WINDOWSIZE_X 1280
#define WINDOWSIZE_Y 960

using namespace std;


// 게임 전역 객체
extern unique_ptr<class Game> GGame;