#pragma once

class ENWardenPopup
{
private:
	static bool bHasBeenChecked;
	
public:
	static void Register();
	static void CheckEntitlement();
};
