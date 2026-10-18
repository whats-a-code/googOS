#include <efi.h>
#include <efilib.h>

EFI_STATUS EFIAPI EFI_MAIN(
	IN EFI_HANDLE ImageHandle, 
	IN EFI_SYSTEM_TABLE *SystemTable )
{
	InitializeLib(ImageHandle, SystemTable);
	Print(L"hello bob\n");
	while (1);
	return EFI_SUCCESS;
}