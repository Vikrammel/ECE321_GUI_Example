#pragma once

#include <string>

using namespace std;
using namespace System;

namespace ECE_321_GUI {

	class tmpClass
	{
	public:
		string firstName;
		string lastName;
	};

	void ConvertString(String^ s, string& os)
	{
		using namespace Runtime::InteropServices;
		const char * chars =
			(const char *)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void *)chars));
	}
}