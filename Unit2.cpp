//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Unit1"
#pragma link "Unit3"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	{
		TControl *control = this->Frame31->ComboBox1;

		TControlCanvas *c = new TControlCanvas();
		if(c)
			{
			c->Control = control->Parent;
			c->Pen->Color = clRed;
			c->Pen->Width = 3;
			c->Rectangle(control->Left-3, control->Top-3, control->Left+control->Width+3, control->Top+control->Height+3);
			delete c;
		}
	}
	{
		TControl *control = this->Frame31->Edit1;

		TControlCanvas *c = new TControlCanvas();
		if(c)
			{
			c->Control = control->Parent;
			c->Pen->Color = clRed;
			c->Pen->Width = 3;
			c->Rectangle(control->Left-3, control->Top-3, control->Left+control->Width+3, control->Top+control->Height+3);
			delete c;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	TControl *control = this->Frame31->Edit1;
	TControl *parent = control->Parent;
	parent->Invalidate();
}
//---------------------------------------------------------------------------

