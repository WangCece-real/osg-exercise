// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 在此处引用程序需要的其他头文件
#include <osgViewer/Viewer> //视窗管理库，显示场景。为单独的场景保存一个单独的view，每个单独场景的程序都有一个Viewer
#include <osgDB/ReadFile> //数据读写库