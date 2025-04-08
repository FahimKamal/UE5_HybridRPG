/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#if PLATFORM_WINDOWS && !UE_BUILD_SHIPPING
#include "Windows/AllowWindowsPlatformTypes.h"

struct FHotPatch
{
	template <typename FunctionType>
	static bool Hook(FunctionType* From, FunctionType* To)
	{
		uint64* FromAddress = reinterpret_cast<uint64*>(From);
		uint64* ToAddress = reinterpret_cast<uint64*>(To);

		uint8 Patch[] =
		{
			0x49, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
			0x41, 0xFF, 0xE2
		};

		FMemory::Memcpy(&Patch[2], &ToAddress, sizeof(ToAddress));

		DWORD BaseProtection;
		const DWORD NewProtection = PAGE_EXECUTE_READWRITE;
		if (!VirtualProtect(FromAddress, sizeof(Patch), NewProtection, &BaseProtection))
		{
			return false;
		}

		FMemory::Memcpy(FromAddress, Patch, sizeof(Patch));
		VirtualProtect(FromAddress, sizeof(Patch), BaseProtection, &BaseProtection);
		FlushInstructionCache(GetCurrentProcess(), nullptr, 0);

		return true;
	}
};

#include "Windows/HideWindowsPlatformTypes.h"
#endif
