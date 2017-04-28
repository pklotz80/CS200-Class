#pragma once

#ifndef _Button_HPP
#define _Button_HPP

#include <iostream>
#include <string>
using namespace std;

class Button
{
private:
	string m_text;

public:
	void SetText(string text);
	void const Draw();
};

#endif

