#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
EFI_MAIN(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE* SystemTable)
{
	InitializeLib(ImageHandle, SystemTable);
	Print(L"hello bob\n");
	return EFI_SUCCESS;
}