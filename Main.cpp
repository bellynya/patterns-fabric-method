//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "class_Factorys.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
IDisplayFactory *disp;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	disp = new IphoneDisplayFactory();
	Memo1->Lines->Add(disp->CreateProduct()->PhoneType);

	delete disp;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	disp = new XiaomiDisplayFactory();
	disp->CreateProduct();
	Memo1->Lines->Add(disp->CreateProduct()->PhoneType);

	delete disp;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	disp = new SamsungDisplayFactory();
	disp->CreateProduct();
	Memo1->Lines->Add(disp->CreateProduct()->PhoneType);

	delete disp;
}
//---------------------------------------------------------------------------
