// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

/**
 * ThreeDaDi 游戏模块主头文件。
 *
 * 当前项目较精简，没有自定义 Module 接口类（未继承 IModuleInterface）。
 * 大多数玩法代码通过 UCLASS / USTRUCT 直接注册到反射系统即可。
 * 若将来需要「模块加载 / 卸载时做全局初始化」，可在此声明 FThreeDaDiModule 并在 .cpp 里 IMPLEMENT_MODULE。
 */

#include "CoreMinimal.h"
