//---------------------------------------------------------------------------

#ifndef class_DisplaysH
#define class_DisplaysH
//---------------------------------------------------------------------------

class IDisplay
{
public:
	UnicodeString PhoneType;
};

class IphoneDisplay : public IDisplay
{
public:
	IphoneDisplay()
	{
		PhoneType = "Iphone";
	}
};

class XiaomiDisplay : public IDisplay
{
public:
	XiaomiDisplay()
	{
		PhoneType = "Xiaomi";
	}
};

class SamsungDisplay : public IDisplay
{
public:
	SamsungDisplay()
	{
		PhoneType = "Samsung";
	}
};

#endif
