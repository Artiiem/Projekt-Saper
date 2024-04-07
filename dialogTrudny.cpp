#include "dialogTrudny.h"
#include "wx/msgdlg.h"

//(*InternalHeaders(dialogTrudny)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8 (s)

//(*IdInit(dialogTrudny)
const long dialogTrudny::ID_STATICTEXT1 = wxNewId();
const long dialogTrudny::ID_STATICTEXT2 = wxNewId();
const long dialogTrudny::ID_STATICTEXT3 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON150 = wxNewId();
const long dialogTrudny::ID_STATICTEXT4 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON0 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON1 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON2 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON3 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON4 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON5 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON6 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON7 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON8 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON9 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON10 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON11 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON12 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON13 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON14 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON15 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON16 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON17 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON18 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON19 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON20 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON21 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON22 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON23 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON24 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON25 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON26 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON27 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON28 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON29 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON30 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON31 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON32 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON33 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON34 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON35 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON36 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON37 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON38 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON39 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON40 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON41 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON42 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON43 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON44 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON45 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON46 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON47 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON48 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON49 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON50 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON51 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON52 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON53 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON54 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON55 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON56 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON57 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON58 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON59 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON60 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON61 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON62 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON63 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON64 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON65 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON66 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON67 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON68 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON69 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON70 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON71 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON72 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON73 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON74 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON75 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON76 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON77 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON78 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON79 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON80 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON81 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON82 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON83 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON84 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON85 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON86 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON87 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON88 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON89 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON90 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON91 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON92 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON93 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON94 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON95 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON96 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON97 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON98 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON99 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON100 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON101 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON102 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON103 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON104 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON105 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON106 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON107 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON108 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON109 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON110 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON111 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON112 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON113 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON114 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON115 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON116 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON117 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON118 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON119 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON120 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON121 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON122 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON123 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON124 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON125 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON126 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON127 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON128 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON129 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON130 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON131 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON132 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON133 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON134 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON135 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON136 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON137 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON138 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON139 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON140 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON141 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON142 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON143 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON144 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON145 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON146 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON147 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON148 = wxNewId();
const long dialogTrudny::ID_BITMAPBUTTON149 = wxNewId();
const long dialogTrudny::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dialogTrudny,wxDialog)
	//(*EventTable(dialogTrudny)
	//*)
END_EVENT_TABLE()

dialogTrudny::dialogTrudny(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(dialogTrudny)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer5;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Trudny"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 4, 0, 0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Ilość Flag:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer4->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("25"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer4->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton150 = new wxBitmapButton(this, ID_BITMAPBUTTON150, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON150"));
	FlexGridSizer4->Add(BitmapButton150, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer4->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5 = new wxFlexGridSizer(0, 15, -10, -10);
	BitmapButton0 = new wxBitmapButton(this, ID_BITMAPBUTTON0, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON0"));
	FlexGridSizer5->Add(BitmapButton0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer5->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	FlexGridSizer5->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	FlexGridSizer5->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	FlexGridSizer5->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	FlexGridSizer5->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	FlexGridSizer5->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	FlexGridSizer5->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	FlexGridSizer5->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
	FlexGridSizer5->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
	FlexGridSizer5->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
	FlexGridSizer5->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
	FlexGridSizer5->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
	FlexGridSizer5->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
	FlexGridSizer5->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
	FlexGridSizer5->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
	FlexGridSizer5->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton17 = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
	FlexGridSizer5->Add(BitmapButton17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton18 = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
	FlexGridSizer5->Add(BitmapButton18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton19 = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
	FlexGridSizer5->Add(BitmapButton19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton20 = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
	FlexGridSizer5->Add(BitmapButton20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton21 = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
	FlexGridSizer5->Add(BitmapButton21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton22 = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
	FlexGridSizer5->Add(BitmapButton22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton23 = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
	FlexGridSizer5->Add(BitmapButton23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton24 = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
	FlexGridSizer5->Add(BitmapButton24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton25 = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
	FlexGridSizer5->Add(BitmapButton25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton26 = new wxBitmapButton(this, ID_BITMAPBUTTON26, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
	FlexGridSizer5->Add(BitmapButton26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton27 = new wxBitmapButton(this, ID_BITMAPBUTTON27, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
	FlexGridSizer5->Add(BitmapButton27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton28 = new wxBitmapButton(this, ID_BITMAPBUTTON28, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
	FlexGridSizer5->Add(BitmapButton28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton29 = new wxBitmapButton(this, ID_BITMAPBUTTON29, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON29"));
	FlexGridSizer5->Add(BitmapButton29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton30 = new wxBitmapButton(this, ID_BITMAPBUTTON30, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON30"));
	FlexGridSizer5->Add(BitmapButton30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton31 = new wxBitmapButton(this, ID_BITMAPBUTTON31, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON31"));
	FlexGridSizer5->Add(BitmapButton31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton32 = new wxBitmapButton(this, ID_BITMAPBUTTON32, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON32"));
	FlexGridSizer5->Add(BitmapButton32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton33 = new wxBitmapButton(this, ID_BITMAPBUTTON33, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON33"));
	FlexGridSizer5->Add(BitmapButton33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton34 = new wxBitmapButton(this, ID_BITMAPBUTTON34, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON34"));
	FlexGridSizer5->Add(BitmapButton34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton35 = new wxBitmapButton(this, ID_BITMAPBUTTON35, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON35"));
	FlexGridSizer5->Add(BitmapButton35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton36 = new wxBitmapButton(this, ID_BITMAPBUTTON36, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON36"));
	FlexGridSizer5->Add(BitmapButton36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton37 = new wxBitmapButton(this, ID_BITMAPBUTTON37, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON37"));
	FlexGridSizer5->Add(BitmapButton37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton38 = new wxBitmapButton(this, ID_BITMAPBUTTON38, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON38"));
	FlexGridSizer5->Add(BitmapButton38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton39 = new wxBitmapButton(this, ID_BITMAPBUTTON39, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON39"));
	FlexGridSizer5->Add(BitmapButton39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton40 = new wxBitmapButton(this, ID_BITMAPBUTTON40, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON40"));
	FlexGridSizer5->Add(BitmapButton40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton41 = new wxBitmapButton(this, ID_BITMAPBUTTON41, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON41"));
	FlexGridSizer5->Add(BitmapButton41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton42 = new wxBitmapButton(this, ID_BITMAPBUTTON42, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON42"));
	FlexGridSizer5->Add(BitmapButton42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton43 = new wxBitmapButton(this, ID_BITMAPBUTTON43, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON43"));
	FlexGridSizer5->Add(BitmapButton43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton44 = new wxBitmapButton(this, ID_BITMAPBUTTON44, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON44"));
	FlexGridSizer5->Add(BitmapButton44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton45 = new wxBitmapButton(this, ID_BITMAPBUTTON45, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON45"));
	FlexGridSizer5->Add(BitmapButton45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton46 = new wxBitmapButton(this, ID_BITMAPBUTTON46, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON46"));
	FlexGridSizer5->Add(BitmapButton46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton47 = new wxBitmapButton(this, ID_BITMAPBUTTON47, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON47"));
	FlexGridSizer5->Add(BitmapButton47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton48 = new wxBitmapButton(this, ID_BITMAPBUTTON48, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON48"));
	FlexGridSizer5->Add(BitmapButton48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton49 = new wxBitmapButton(this, ID_BITMAPBUTTON49, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON49"));
	FlexGridSizer5->Add(BitmapButton49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton50 = new wxBitmapButton(this, ID_BITMAPBUTTON50, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON50"));
	FlexGridSizer5->Add(BitmapButton50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton51 = new wxBitmapButton(this, ID_BITMAPBUTTON51, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON51"));
	FlexGridSizer5->Add(BitmapButton51, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton52 = new wxBitmapButton(this, ID_BITMAPBUTTON52, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON52"));
	FlexGridSizer5->Add(BitmapButton52, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton53 = new wxBitmapButton(this, ID_BITMAPBUTTON53, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON53"));
	FlexGridSizer5->Add(BitmapButton53, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton54 = new wxBitmapButton(this, ID_BITMAPBUTTON54, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON54"));
	FlexGridSizer5->Add(BitmapButton54, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton55 = new wxBitmapButton(this, ID_BITMAPBUTTON55, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON55"));
	FlexGridSizer5->Add(BitmapButton55, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton56 = new wxBitmapButton(this, ID_BITMAPBUTTON56, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON56"));
	FlexGridSizer5->Add(BitmapButton56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton57 = new wxBitmapButton(this, ID_BITMAPBUTTON57, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON57"));
	FlexGridSizer5->Add(BitmapButton57, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton58 = new wxBitmapButton(this, ID_BITMAPBUTTON58, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON58"));
	FlexGridSizer5->Add(BitmapButton58, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton59 = new wxBitmapButton(this, ID_BITMAPBUTTON59, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON59"));
	FlexGridSizer5->Add(BitmapButton59, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton60 = new wxBitmapButton(this, ID_BITMAPBUTTON60, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON60"));
	FlexGridSizer5->Add(BitmapButton60, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton61 = new wxBitmapButton(this, ID_BITMAPBUTTON61, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON61"));
	FlexGridSizer5->Add(BitmapButton61, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton62 = new wxBitmapButton(this, ID_BITMAPBUTTON62, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON62"));
	FlexGridSizer5->Add(BitmapButton62, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton63 = new wxBitmapButton(this, ID_BITMAPBUTTON63, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON63"));
	FlexGridSizer5->Add(BitmapButton63, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton64 = new wxBitmapButton(this, ID_BITMAPBUTTON64, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON64"));
	FlexGridSizer5->Add(BitmapButton64, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton65 = new wxBitmapButton(this, ID_BITMAPBUTTON65, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON65"));
	FlexGridSizer5->Add(BitmapButton65, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton66 = new wxBitmapButton(this, ID_BITMAPBUTTON66, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON66"));
	FlexGridSizer5->Add(BitmapButton66, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton67 = new wxBitmapButton(this, ID_BITMAPBUTTON67, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON67"));
	FlexGridSizer5->Add(BitmapButton67, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton68 = new wxBitmapButton(this, ID_BITMAPBUTTON68, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON68"));
	FlexGridSizer5->Add(BitmapButton68, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton69 = new wxBitmapButton(this, ID_BITMAPBUTTON69, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON69"));
	FlexGridSizer5->Add(BitmapButton69, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton70 = new wxBitmapButton(this, ID_BITMAPBUTTON70, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON70"));
	FlexGridSizer5->Add(BitmapButton70, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton71 = new wxBitmapButton(this, ID_BITMAPBUTTON71, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON71"));
	FlexGridSizer5->Add(BitmapButton71, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton72 = new wxBitmapButton(this, ID_BITMAPBUTTON72, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON72"));
	FlexGridSizer5->Add(BitmapButton72, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton73 = new wxBitmapButton(this, ID_BITMAPBUTTON73, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON73"));
	FlexGridSizer5->Add(BitmapButton73, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton74 = new wxBitmapButton(this, ID_BITMAPBUTTON74, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON74"));
	FlexGridSizer5->Add(BitmapButton74, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton75 = new wxBitmapButton(this, ID_BITMAPBUTTON75, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON75"));
	FlexGridSizer5->Add(BitmapButton75, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton76 = new wxBitmapButton(this, ID_BITMAPBUTTON76, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON76"));
	FlexGridSizer5->Add(BitmapButton76, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton77 = new wxBitmapButton(this, ID_BITMAPBUTTON77, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON77"));
	FlexGridSizer5->Add(BitmapButton77, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton78 = new wxBitmapButton(this, ID_BITMAPBUTTON78, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON78"));
	FlexGridSizer5->Add(BitmapButton78, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton79 = new wxBitmapButton(this, ID_BITMAPBUTTON79, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON79"));
	FlexGridSizer5->Add(BitmapButton79, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton80 = new wxBitmapButton(this, ID_BITMAPBUTTON80, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON80"));
	FlexGridSizer5->Add(BitmapButton80, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton81 = new wxBitmapButton(this, ID_BITMAPBUTTON81, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON81"));
	FlexGridSizer5->Add(BitmapButton81, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton82 = new wxBitmapButton(this, ID_BITMAPBUTTON82, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON82"));
	FlexGridSizer5->Add(BitmapButton82, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton83 = new wxBitmapButton(this, ID_BITMAPBUTTON83, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON83"));
	FlexGridSizer5->Add(BitmapButton83, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton84 = new wxBitmapButton(this, ID_BITMAPBUTTON84, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON84"));
	FlexGridSizer5->Add(BitmapButton84, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton85 = new wxBitmapButton(this, ID_BITMAPBUTTON85, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON85"));
	FlexGridSizer5->Add(BitmapButton85, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton86 = new wxBitmapButton(this, ID_BITMAPBUTTON86, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON86"));
	FlexGridSizer5->Add(BitmapButton86, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton87 = new wxBitmapButton(this, ID_BITMAPBUTTON87, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON87"));
	FlexGridSizer5->Add(BitmapButton87, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton88 = new wxBitmapButton(this, ID_BITMAPBUTTON88, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON88"));
	FlexGridSizer5->Add(BitmapButton88, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton89 = new wxBitmapButton(this, ID_BITMAPBUTTON89, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON89"));
	FlexGridSizer5->Add(BitmapButton89, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton90 = new wxBitmapButton(this, ID_BITMAPBUTTON90, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON90"));
	FlexGridSizer5->Add(BitmapButton90, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton91 = new wxBitmapButton(this, ID_BITMAPBUTTON91, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON91"));
	FlexGridSizer5->Add(BitmapButton91, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton92 = new wxBitmapButton(this, ID_BITMAPBUTTON92, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON92"));
	FlexGridSizer5->Add(BitmapButton92, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton93 = new wxBitmapButton(this, ID_BITMAPBUTTON93, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON93"));
	FlexGridSizer5->Add(BitmapButton93, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton94 = new wxBitmapButton(this, ID_BITMAPBUTTON94, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON94"));
	FlexGridSizer5->Add(BitmapButton94, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton95 = new wxBitmapButton(this, ID_BITMAPBUTTON95, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON95"));
	FlexGridSizer5->Add(BitmapButton95, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton96 = new wxBitmapButton(this, ID_BITMAPBUTTON96, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON96"));
	FlexGridSizer5->Add(BitmapButton96, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton97 = new wxBitmapButton(this, ID_BITMAPBUTTON97, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON97"));
	FlexGridSizer5->Add(BitmapButton97, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton98 = new wxBitmapButton(this, ID_BITMAPBUTTON98, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON98"));
	FlexGridSizer5->Add(BitmapButton98, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton99 = new wxBitmapButton(this, ID_BITMAPBUTTON99, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON99"));
	FlexGridSizer5->Add(BitmapButton99, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton100 = new wxBitmapButton(this, ID_BITMAPBUTTON100, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON100"));
	FlexGridSizer5->Add(BitmapButton100, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton101 = new wxBitmapButton(this, ID_BITMAPBUTTON101, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON101"));
	FlexGridSizer5->Add(BitmapButton101, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton102 = new wxBitmapButton(this, ID_BITMAPBUTTON102, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON102"));
	FlexGridSizer5->Add(BitmapButton102, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton103 = new wxBitmapButton(this, ID_BITMAPBUTTON103, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON103"));
	FlexGridSizer5->Add(BitmapButton103, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton104 = new wxBitmapButton(this, ID_BITMAPBUTTON104, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON104"));
	FlexGridSizer5->Add(BitmapButton104, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton105 = new wxBitmapButton(this, ID_BITMAPBUTTON105, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON105"));
	FlexGridSizer5->Add(BitmapButton105, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton106 = new wxBitmapButton(this, ID_BITMAPBUTTON106, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON106"));
	FlexGridSizer5->Add(BitmapButton106, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton107 = new wxBitmapButton(this, ID_BITMAPBUTTON107, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON107"));
	FlexGridSizer5->Add(BitmapButton107, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton108 = new wxBitmapButton(this, ID_BITMAPBUTTON108, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON108"));
	FlexGridSizer5->Add(BitmapButton108, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton109 = new wxBitmapButton(this, ID_BITMAPBUTTON109, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON109"));
	FlexGridSizer5->Add(BitmapButton109, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton110 = new wxBitmapButton(this, ID_BITMAPBUTTON110, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON110"));
	FlexGridSizer5->Add(BitmapButton110, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton111 = new wxBitmapButton(this, ID_BITMAPBUTTON111, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON111"));
	FlexGridSizer5->Add(BitmapButton111, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton112 = new wxBitmapButton(this, ID_BITMAPBUTTON112, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON112"));
	FlexGridSizer5->Add(BitmapButton112, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton113 = new wxBitmapButton(this, ID_BITMAPBUTTON113, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON113"));
	FlexGridSizer5->Add(BitmapButton113, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton114 = new wxBitmapButton(this, ID_BITMAPBUTTON114, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON114"));
	FlexGridSizer5->Add(BitmapButton114, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton115 = new wxBitmapButton(this, ID_BITMAPBUTTON115, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON115"));
	FlexGridSizer5->Add(BitmapButton115, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton116 = new wxBitmapButton(this, ID_BITMAPBUTTON116, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON116"));
	FlexGridSizer5->Add(BitmapButton116, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton117 = new wxBitmapButton(this, ID_BITMAPBUTTON117, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON117"));
	FlexGridSizer5->Add(BitmapButton117, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton118 = new wxBitmapButton(this, ID_BITMAPBUTTON118, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON118"));
	FlexGridSizer5->Add(BitmapButton118, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton119 = new wxBitmapButton(this, ID_BITMAPBUTTON119, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON119"));
	FlexGridSizer5->Add(BitmapButton119, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton120 = new wxBitmapButton(this, ID_BITMAPBUTTON120, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON120"));
	FlexGridSizer5->Add(BitmapButton120, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton121 = new wxBitmapButton(this, ID_BITMAPBUTTON121, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON121"));
	FlexGridSizer5->Add(BitmapButton121, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton122 = new wxBitmapButton(this, ID_BITMAPBUTTON122, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON122"));
	FlexGridSizer5->Add(BitmapButton122, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton123 = new wxBitmapButton(this, ID_BITMAPBUTTON123, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON123"));
	FlexGridSizer5->Add(BitmapButton123, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton124 = new wxBitmapButton(this, ID_BITMAPBUTTON124, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON124"));
	FlexGridSizer5->Add(BitmapButton124, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton125 = new wxBitmapButton(this, ID_BITMAPBUTTON125, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON125"));
	FlexGridSizer5->Add(BitmapButton125, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton126 = new wxBitmapButton(this, ID_BITMAPBUTTON126, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON126"));
	FlexGridSizer5->Add(BitmapButton126, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton127 = new wxBitmapButton(this, ID_BITMAPBUTTON127, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON127"));
	FlexGridSizer5->Add(BitmapButton127, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton128 = new wxBitmapButton(this, ID_BITMAPBUTTON128, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON128"));
	FlexGridSizer5->Add(BitmapButton128, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton129 = new wxBitmapButton(this, ID_BITMAPBUTTON129, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON129"));
	FlexGridSizer5->Add(BitmapButton129, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton130 = new wxBitmapButton(this, ID_BITMAPBUTTON130, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON130"));
	FlexGridSizer5->Add(BitmapButton130, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton131 = new wxBitmapButton(this, ID_BITMAPBUTTON131, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON131"));
	FlexGridSizer5->Add(BitmapButton131, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton132 = new wxBitmapButton(this, ID_BITMAPBUTTON132, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON132"));
	FlexGridSizer5->Add(BitmapButton132, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton133 = new wxBitmapButton(this, ID_BITMAPBUTTON133, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON133"));
	FlexGridSizer5->Add(BitmapButton133, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton134 = new wxBitmapButton(this, ID_BITMAPBUTTON134, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON134"));
	FlexGridSizer5->Add(BitmapButton134, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton135 = new wxBitmapButton(this, ID_BITMAPBUTTON135, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON135"));
	FlexGridSizer5->Add(BitmapButton135, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton136 = new wxBitmapButton(this, ID_BITMAPBUTTON136, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON136"));
	FlexGridSizer5->Add(BitmapButton136, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton137 = new wxBitmapButton(this, ID_BITMAPBUTTON137, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON137"));
	FlexGridSizer5->Add(BitmapButton137, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton138 = new wxBitmapButton(this, ID_BITMAPBUTTON138, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON138"));
	FlexGridSizer5->Add(BitmapButton138, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton139 = new wxBitmapButton(this, ID_BITMAPBUTTON139, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON139"));
	FlexGridSizer5->Add(BitmapButton139, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton140 = new wxBitmapButton(this, ID_BITMAPBUTTON140, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON140"));
	FlexGridSizer5->Add(BitmapButton140, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton141 = new wxBitmapButton(this, ID_BITMAPBUTTON141, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON141"));
	FlexGridSizer5->Add(BitmapButton141, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton142 = new wxBitmapButton(this, ID_BITMAPBUTTON142, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON142"));
	FlexGridSizer5->Add(BitmapButton142, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton143 = new wxBitmapButton(this, ID_BITMAPBUTTON143, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON143"));
	FlexGridSizer5->Add(BitmapButton143, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton144 = new wxBitmapButton(this, ID_BITMAPBUTTON144, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON144"));
	FlexGridSizer5->Add(BitmapButton144, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton145 = new wxBitmapButton(this, ID_BITMAPBUTTON145, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON145"));
	FlexGridSizer5->Add(BitmapButton145, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton146 = new wxBitmapButton(this, ID_BITMAPBUTTON146, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON146"));
	FlexGridSizer5->Add(BitmapButton146, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton147 = new wxBitmapButton(this, ID_BITMAPBUTTON147, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON147"));
	FlexGridSizer5->Add(BitmapButton147, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton148 = new wxBitmapButton(this, ID_BITMAPBUTTON148, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON148"));
	FlexGridSizer5->Add(BitmapButton148, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton149 = new wxBitmapButton(this, ID_BITMAPBUTTON149, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON149"));
	FlexGridSizer5->Add(BitmapButton149, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	Timer1.SetOwner(this, ID_TIMER1);
	Timer1.Start(10, false);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BITMAPBUTTON150,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dialogTrudny::OnBitmapButton150Click);
	Connect(ID_BITMAPBUTTON0,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dialogTrudny::OnBitmapButton0Click);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&dialogTrudny::OnTimer1Trigger);
	//*)

    #define par(nr) plansza[nr] = BitmapButton##nr;
        par(0);	par(1);	par(2);	par(3);	par(4);	par(5);	par(6);	par(7);	par(8);	par(9);	par(10);
        par(11);	par(12);	par(13);	par(14);	par(15);	par(16);	par(17);
        par(18);	par(19);	par(20);	par(21);	par(22);	par(23);	par(24);
        par(25);	par(26);	par(27);	par(28);	par(29);	par(30);	par(31);
        par(32);	par(33);	par(34);	par(35);	par(36);	par(37);	par(38);	par(39);
        par(40);	par(41);	par(42);	par(43);	par(44);	par(45);	par(46);	par(47);
        par(48);	par(49);	par(50);	par(51);	par(52);	par(53);	par(54);	par(55);
        par(56);	par(57);	par(58);	par(59);	par(60);	par(61);	par(62);	par(63);
        par(64);	par(65);	par(66);	par(67);	par(68);	par(69);	par(70);	par(71);
        par(72);	par(73);	par(74);	par(75);	par(76);	par(77);	par(78);	par(79);
        par(80);	par(81);	par(82);	par(83);	par(84);	par(85);	par(86);	par(87);
        par(88);	par(89);	par(90);	par(91);	par(92);	par(93);	par(94);	par(95);
        par(96);	par(97);	par(98);	par(99);	par(100);	par(101);	par(102);	par(103);
        par(104);	par(105);	par(106);	par(107);	par(108);	par(109);	par(110);	par(111);
        par(112);	par(113);	par(114);	par(115);	par(116);	par(117);	par(118);	par(119);
        par(120);	par(121);	par(122);	par(123);	par(124);	par(125);	par(126);	par(127);
        par(128);	par(129);	par(130);	par(131);	par(132);	par(133);	par(134);	par(135);
        par(136);	par(137);	par(138);	par(139);	par(140);	par(141);	par(142);	par(143);
        par(144);	par(145);	par(146);	par(147);	par(148);	par(149);
    #undef par

    rysunki[0]= wxBitmap(wxImage(_T("rysunki/kwadrat.png")));
    rysunki[1]= wxBitmap(wxImage(_T("rysunki/0.png")));
    rysunki[2]= wxBitmap(wxImage(_T("rysunki/1.png")));
    rysunki[3]= wxBitmap(wxImage(_T("rysunki/2.png")));
    rysunki[4]= wxBitmap(wxImage(_T("rysunki/3.png")));
    rysunki[5]= wxBitmap(wxImage(_T("rysunki/4.png")));
    rysunki[6]= wxBitmap(wxImage(_T("rysunki/5.png")));
    rysunki[7]= wxBitmap(wxImage(_T("rysunki/6.png")));
    rysunki[8]= wxBitmap(wxImage(_T("rysunki/7.png")));
    rysunki[9]= wxBitmap(wxImage(_T("rysunki/8.png")));
    rysunki[10]= wxBitmap(wxImage(_T("rysunki/mina.png")));
    rysunki[11]= wxBitmap(wxImage(_T("rysunki/wybuch.png")));
    rysunki[12]= wxBitmap(wxImage(_T("rysunki/flaga.png")));
    rysunki[13]= wxBitmap(wxImage(_T("rysunki/reset.png")));
    rysunki[14]= wxBitmap(wxImage(_T("rysunki/resetp.png")));
    rysunki[15]= wxBitmap(wxImage(_T("rysunki/pudlo.png")));

    for (int i = 0; i<=149;i++){
        Connect(plansza[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dialogTrudny::OnBitmapButton0Click);
        plansza[i]->Connect(wxEVT_RIGHT_DOWN,(wxObjectEventFunction)&dialogTrudny::OnRightClick, NULL, this);
        plansza[i] -> SetBitmap(rysunki[0]);
    }


    for(int i=0;i<15;i++){          // Nadanie liczby obiektowi P atrybutu 'numer' równej id planszy
        for(int j=0;j<10;j++){
            P[i][j].SetNumer(num);
            num++;
        }
    }

    reset();

    this->Fit();

}

dialogTrudny::~dialogTrudny()
{
	//(*Destroy(dialogTrudny)
	//*)
	delete G;
}

void dialogTrudny::reset(){
    BitmapButton150->SetBitmap(rysunki[13]);
    Timer1.Stop();
    ile_razy = 0;
    G->Zresetuj(150);

    StaticText3 -> SetLabel("25");
    StaticText4 -> SetLabel("0");


    for (int i = 0; i<=149;i++){
        plansza[i] -> SetBitmap(rysunki[0]);
    }
    for(int i=0;i<15;i++){                              //wyzerowanie atrybutów 'wartosc' i 'zajete'
        for(int j=0;j<10;j++){
            P[i][j].SetZajete(0);
            P[i][j].SetWartosc(0);
        }
    }

    for(int i=0;i<15;i++){
        for(int j=0;j<10;j++){
            for(int m=0;m<25;m++){                      // bomby otrzymują 'Wartosc' rowna 9
                if(P[i][j].GetNumer()==G->GetLiczby(m)){
                    P[i][j].SetWartosc(9);
                    for(int k = -1; k<=1; k++){
                        for(int l = -1; l<=1; l++){                          // wszystkie pola sąsiadujące
                            if((i+k>=0)&&(i+k<=14)&&(j+l>=0)&&(j+l<=9))      // z bombą zwiększają 'Wartosc' o 1
                                P[i+k][j+l].ZwiekszWartosc();
                        }
                    }
                }
            }
        }
    }
}

void dialogTrudny::odkryj(int x,int y){                             // odkrywa pole o wspołrzędnych x,y
    int id = 15*y+x;                                                // konwersja współrzędnych na id
    if(P[x][y].GetZajete()==0){
        P[x][y].SetZajete(1);
        if(P[x][y].GetWartosc()>=9){                                // trafienie na bombe
            for(int i=0;i<15;i++){
                for(int j=0;j<10;j++){
                    if((P[i][j].GetWartosc()>=9)&&(P[i][j].GetZajete()==0)){        // odkrycie wszystkich bomb
                        plansza[j*15+i]->SetBitmap(rysunki[10]);
                    }
                    else if((P[i][j].GetZajete()==2)&&(P[i][j].GetWartosc()<9))     // ukazanie błędnych zaznaczeń
                        plansza[j*15+i]->SetBitmap(rysunki[15]);
                }
            }
            plansza[id]->SetBitmap(rysunki[11]);
            Timer1.Stop();
            G->SetStanGry(2);
            BitmapButton150->SetBitmap(rysunki[14]);
        }
        else if(P[x][y].GetWartosc()==0){                           // trafienie na pole puste
                G->Zmniejsz();              // zmniejszenie liczby nieodkrytych pól
            for(int k = -1; k<=1; k++){
                for(int l = -1; l<=1; l++){
                    if((x+k>=0)&&(x+k<=14)&&(y+l>=0)&&(y+l<=9)){    // odkrycie wszystkich sąsiadujących pól
                        odkryj(x+k,y+l);
                        plansza[id] -> SetBitmap(rysunki[1]);
                      }
                }
            }
        }
        else{                                                        // trafienie na pole z cyfrą
            plansza[id] -> SetBitmap(rysunki[P[x][y].GetWartosc()+1]);
            G->Zmniejsz();                   // zmniejszenie liczby nieodkrytych pól
        }
    }
}



void dialogTrudny::OnBitmapButton0Click(wxCommandEvent& event)
{
    if(G->GetStanGry() == 0){               // Pierwszy ruch uaktywnia timer
        Timer1.Start();
        G->SetStanGry(1);
    }
    if(G->GetStanGry() == 1){
        int i = event.GetId() - 110;        // id Bitmapy jest o 110 większe od numeru 'planszy'
        int X,Y;
        X = i%15;
        Y = (i-X)/15;
        odkryj(X,Y);

        if(G->Wygrana()){                   // Sprawdza czy gra została zakończona
            Timer1.Stop();
            wxMessageBox("Wygrana");
            reset();
        }
    }

}

void dialogTrudny::OnRightClick(wxCommandEvent& event)
{


    if(G->GetStanGry() == 1){
        int i = event.GetId()- 110;        // id Bitmapy jest o 110 większe od numeru 'planszy'
        int X,Y;
        X = i%15;                          // konwersja id na współrzędne
        Y = (i-X)/15;

        if(P[X][Y].GetZajete()==0 && G->GetFlagi() > 0){        // postawienie flagi
            P[X][Y].SetZajete(2);
            plansza[i]-> SetBitmap(rysunki[12]);
            G->ZmniejszF();
        }
        else if(P[X][Y].GetZajete()==2){                        // zdjęcie flagi
            P[X][Y].SetZajete(0);
            plansza[i]-> SetBitmap(rysunki[0]);
            G->ZwiekszF();
        }
        wxString w;
        int x = G->GetFlagi();
        w<< x;
        StaticText3 -> SetLabel(w);                             // ustawienie liczby flag
    }
}


void dialogTrudny::OnBitmapButton150Click(wxCommandEvent& event)
{
    reset();
}

void dialogTrudny::OnTimer1Trigger(wxTimerEvent& event)
{
    ile_razy++;
    double c = ile_razy * Timer1.GetInterval()/1000.0;
    czas = wxString::Format("%.2f",c);
    StaticText4 -> SetLabel(czas);
}
