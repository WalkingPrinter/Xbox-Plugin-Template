#include "stdafx.h"

bool APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
			
			return true;

		case DLL_PROCESS_DETACH: {

			return true;
		}
	}

	return false;
}