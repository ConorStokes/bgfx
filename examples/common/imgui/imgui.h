/*
 * Copyright 2011-2014 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

// This code is based on:
//
// Copyright (c) 2009-2010 Mikko Mononen memon@inside.org
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//
// Source altered and distributed from https://github.com/AdrienHerubel/imgui

#ifndef IMGUI_H_HEADER_GUARD
#define IMGUI_H_HEADER_GUARD

#include <bgfx.h>

#define IMGUI_MBUT_LEFT  0x01
#define IMGUI_MBUT_RIGHT 0x02

/// For custom values, define these macros before including imgui.h

#ifndef IMGUI_SCROLL_AREA_R
	#define IMGUI_SCROLL_AREA_R 6
#endif //IMGUI_SCROLL_AREA_R

#ifndef IMGUI_SCROLL_BAR_R
	#define IMGUI_SCROLL_BAR_R 5
#endif //IMGUI_SCROLL_BAR_R

#ifndef IMGUI_BUTTON_R
	#define IMGUI_BUTTON_R 9
#endif //IMGUI_BUTTON_R

#ifndef IMGUI_BUTTON_RGB0
	#define IMGUI_BUTTON_RGB0 imguiRGBA(128, 128, 128, 0)
#endif //IMGUI_BUTTON_RGB0

#ifndef IMGUI_INPUT_R
	#define IMGUI_INPUT_R 4
#endif //IMGUI_INPUT_R

#ifndef IMGUI_TABS_HEIGHT
	#define IMGUI_TABS_HEIGHT 20
#endif //IMGUI_TABS_HEIGHT

#ifndef IMGUI_TABS_R
	#define IMGUI_TABS_R 9
#endif //IMGUI_TABS_R

#ifndef IMGUI_INDENT_VALUE
	#define IMGUI_INDENT_VALUE 16
#endif //IMGUI_INDENT_VALUE

#ifndef IMGUI_SEPARATOR_VALUE
	#define IMGUI_SEPARATOR_VALUE 12
#endif //IMGUI_SEPARATOR_VALUE

struct ImguiTextAlign
{
	enum Enum
	{
		Left,
		Center,
		Right,

		Count
	};
};

struct ImguiAlign
{
	enum Enum
	{
		Left,
		LeftIndented,
		Center,
		CenterIndented,
		Right,
	};
};

struct ImguiBorder
{
	enum Enum
	{
		Left,
		Right,
		Top,
		Bottom
	};
};

inline uint32_t imguiRGBA(uint8_t _r, uint8_t _g, uint8_t _b, uint8_t _a = 255)
{
	return 0
		| (uint32_t(_r) <<  0)
		| (uint32_t(_g) <<  8)
		| (uint32_t(_b) << 16)
		| (uint32_t(_a) << 24)
		;
}

BGFX_HANDLE(ImguiFontHandle);

ImguiFontHandle imguiCreateFont(const void* _data, float _fontSize=15.0f);
void imguiSetFont(ImguiFontHandle _handle);
ImguiFontHandle imguiGetCurrentFont();

ImguiFontHandle imguiCreate(const void* _data, float _fontSize=15.0f);
void imguiDestroy();

void imguiBeginFrame(int32_t _mx, int32_t _my, uint8_t _button, int32_t _scroll, uint16_t _width, uint16_t _height, char _inputChar = 0, uint8_t _view = 31);
void imguiEndFrame();

/// Notice: this function is not to be called between imguiBeginArea() and imguiEndArea().
bool imguiBorderButton(ImguiBorder::Enum _border, bool _checked, bool _enabled = true);

bool imguiBeginArea(const char* _name, int _x, int _y, int _width, int _height, bool _enabled = true, int32_t _r = IMGUI_SCROLL_AREA_R);
void imguiEndArea();
bool imguiBeginScroll(int32_t _height, int32_t* _scroll, bool _enabled = true);
void imguiEndScroll(int32_t _r = IMGUI_SCROLL_BAR_R);

bool imguiBeginScrollArea(const char* _name, int _x, int _y, int _width, int _height, int* _scroll, bool _enabled = true, int32_t _r = IMGUI_SCROLL_AREA_R);
void imguiEndScrollArea(int32_t _r = IMGUI_SCROLL_BAR_R);

void imguiIndent(uint16_t _width = IMGUI_INDENT_VALUE);
void imguiUnindent(uint16_t _width = IMGUI_INDENT_VALUE);
void imguiSeparator(uint16_t _height = IMGUI_SEPARATOR_VALUE);
void imguiSeparatorLine(uint16_t _height = IMGUI_SEPARATOR_VALUE);

int32_t imguiGetWidgetX();
int32_t imguiGetWidgetY();

bool imguiButton(const char* _text, bool _enabled = true, ImguiAlign::Enum _align = ImguiAlign::LeftIndented, uint32_t _rgb0 = IMGUI_BUTTON_RGB0, int32_t _r = IMGUI_BUTTON_R);
bool imguiItem(const char* _text, bool _enabled = true);
bool imguiCheck(const char* _text, bool _checked, bool _enabled = true);
bool imguiCollapse(const char* _text, const char* _subtext, bool _checked, bool _enabled = true);
void imguiLabel(const char* _format, ...);
void imguiLabel(uint32_t _rgba, const char* _format, ...);
void imguiValue(const char* _text);
bool imguiSlider(const char* _text, float& _val, float _vmin, float _vmax, float _vinc, bool _enabled = true, ImguiAlign::Enum _align = ImguiAlign::LeftIndented);
bool imguiSlider(const char* _text, int32_t& _val, int32_t _vmin, int32_t _vmax, bool _enabled = true, ImguiAlign::Enum _align = ImguiAlign::LeftIndented);
void imguiInput(const char* _label, char* _str, uint32_t _len, bool _enabled = true, ImguiAlign::Enum _align = ImguiAlign::LeftIndented, int32_t _r = IMGUI_INPUT_R);

uint8_t imguiTabsUseMacroInstead(uint8_t _selected, ...);
uint8_t imguiTabsUseMacroInstead(uint8_t _selected, bool _enabled, ...);
uint8_t imguiTabsUseMacroInstead(uint8_t _selected, bool _enabled, ImguiAlign::Enum _align, ...);
uint8_t imguiTabsUseMacroInstead(uint8_t _selected, bool _enabled, ImguiAlign::Enum _align, int32_t _height, int32_t _r, ...);
#define imguiTabs(...) imguiTabsUseMacroInstead(__VA_ARGS__, NULL)

uint32_t imguiChooseUseMacroInstead(uint32_t _selected, ...);
#define imguiChoose(...) imguiChooseUseMacroInstead(__VA_ARGS__, NULL)

void imguiDrawText(int _x, int _y, ImguiTextAlign::Enum _align, const char* _text, uint32_t _argb);
void imguiDrawLine(float _x0, float _y0, float _x1, float _y1, float _r, uint32_t _argb);
void imguiDrawRoundedRect(float _x, float _y, float _w, float _h, float _r, uint32_t _argb);
void imguiDrawRect(float _x, float _y, float _w, float _h, uint32_t _argb);

void imguiBool(const char* _text, bool& _flag, bool _enabled = true);
void imguiColorWheel(float _rgb[3], bool _respectIndentation = false, bool _enabled = true);
void imguiColorWheel(const char* _str, float _rgb[3], bool& _activated, bool _enabled = true);

void imguiImage(bgfx::TextureHandle _image, float _lod, int32_t _width, int32_t _height, ImguiAlign::Enum _align = ImguiAlign::LeftIndented);
void imguiImage(bgfx::TextureHandle _image, float _lod, float _scale, float _aspect, ImguiAlign::Enum _align = ImguiAlign::LeftIndented);
void imguiImageChannel(bgfx::TextureHandle _image, uint8_t _channel, float _lod, int32_t _width, int32_t _height, ImguiAlign::Enum _align = ImguiAlign::LeftIndented);
void imguiImageChannel(bgfx::TextureHandle _image, uint8_t _channel, float _lod, float _scale, float _aspect, ImguiAlign::Enum _align = ImguiAlign::LeftIndented);

bool imguiMouseOverArea();
float imguiGetTextLength(const char* _text, ImguiFontHandle _handle);

#endif // IMGUI_H_HEADER_GUARD
