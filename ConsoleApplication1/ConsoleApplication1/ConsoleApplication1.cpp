// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "../../utf8unicode.hh"

int main()
{
	std::vector<unsigned int> uStr;
	uStr.resize(100, 0);
	wcscpy((wchar_t*)&uStr[0], L"我1爱2你3");
	std::string sUtf8;
	Utf8Unicode::unicode_to_utf8(uStr, sUtf8);
	Utf8Unicode::utf8_to_unicode(sUtf8, uStr);
	wchar_t* wsz = (wchar_t*)&uStr[0];
    return 0;
}

