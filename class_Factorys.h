//---------------------------------------------------------------------------

#ifndef class_FactorysH
#define class_FactorysH
#include "class_Displays.h"
//---------------------------------------------------------------------------

class IDisplayFactory
{
public:
	virtual IDisplay* CreateProduct() = 0;
};

class IphoneDisplayFactory : public IDisplayFactory
{
public:
	IDisplay* CreateProduct() override
	{
		return new IphoneDisplay();
	}
};

class XiaomiDisplayFactory : public IDisplayFactory
{
public:
	IDisplay* CreateProduct() override
	{
		return new XiaomiDisplay();
	}
};

class SamsungDisplayFactory : public IDisplayFactory
{
public:
	IDisplay* CreateProduct() override
	{
		return new SamsungDisplay();
	}
};

#endif
