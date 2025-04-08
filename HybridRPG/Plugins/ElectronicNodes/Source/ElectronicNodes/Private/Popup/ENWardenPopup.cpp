#include "ENWardenPopup.h"
#include "IPluginWardenModule.h"

bool ENWardenPopup::bHasBeenChecked = false;

void ENWardenPopup::Register()
{
	if (bHasBeenChecked)
	{
		return;
	}
	
	bHasBeenChecked = true;

	FModuleManager::Get().LoadModuleChecked<IPluginWardenModule>("PluginWarden");

	if (IPluginWardenModule::IsAvailable())
	{
		CheckEntitlement();
	}
}

void ENWardenPopup::CheckEntitlement()
{
	IPluginWardenModule::Get().CheckEntitlementForPlugin(
		FText::FromString("Electronic Nodes"),
		TEXT("258438d9137a4523940522d433ea6d5d"),
		TEXT("5cb2a394d0c04e73891762be4cbd7216"),
		FText(),
		IPluginWardenModule::EUnauthorizedErrorHandling::ShowMessageOpenStore,
		[&]()
		{
		}
	);
}
