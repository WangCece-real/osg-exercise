// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 在此处引用程序需要的其他头文件
#include <osg/Switch> //控制子类的显示与隐藏，这种隐藏不消耗内存
#include <osgGA/GUIEventHandler> //OSG键盘和鼠标交互事件的处理终端

#include <osgDB/ReadFile>

#include <osgUtil/Optimizer>
#include <osgViewer/Viewer>