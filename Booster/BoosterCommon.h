#pragma once

// We cannot use DWORD because it's not defined in kernel mode headers

struct ThreadData {
	ULONG ThreadId; //32-bit unsigned integers
	int Priority;
};