// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThreeDaDi.h"
#include "Modules/ModuleManager.h"

/**
 * 注册 ThreeDaDi 为「主游戏模块」（Primary Game Module）。
 *
 * IMPLEMENT_PRIMARY_GAME_MODULE 告诉 UE：
 *   - 模块名 ThreeDaDi 是本 .uproject 的默认 C++ 模块
 *   - 使用引擎自带的 FDefaultGameModuleImpl（无自定义 StartupModule / ShutdownModule）
 *
 * 和 3D C++ 项目模板里的 ThreeDaDi.cpp 完全一致，2D 项目同样需要这一行才能链接游戏 DLL。
 */
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, ThreeDaDi, "ThreeDaDi");
