// TestDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "TestDll.h"

int TestFunc() {
	// Emulate returning a false bool but with unclean register
	return ~0xff;
}
