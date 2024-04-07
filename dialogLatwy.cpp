#include "dialogLatwy.h"
#include "wx/msgdlg.h"

//(*InternalHeaders(dialogLatwy)
#include <wx/intl.h>
#include <wx/string.h>
//*)



//(*IdInit(dialogLatwy)
const long dialogLatwy::ID_STATICTEXT1 = wxNewId();
const long dialogLatwy::ID_STATICTEXT2 = wxNewId();
const long dialogLatwy::ID_STATICTEXT3 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON64 = wxNewId();
const long dialogLatwy::ID_STATICTEXT4 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON0 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON1 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON2 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON3 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON4 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON5 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON6 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON7 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON8 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON9 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON10 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON11 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON12 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON13 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON14 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON15 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON16 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON17 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON18 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON19 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON20 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON21 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON22 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON23 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON24 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON25 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON26 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON27 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON28 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON29 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON30 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON31 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON32 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON33 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON34 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON35 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON36 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON37 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON38 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON39 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON40 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON41 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON42 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON43 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON44 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON45 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON46 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON47 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON48 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON49 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON50 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON51 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON52 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON53 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON54 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON55 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON56 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON57 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON58 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON59 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON60 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON61 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON62 = wxNewId();
const long dialogLatwy::ID_BITMAPBUTTON63 = wxNewId();
const long dialogLatwy::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dialogLatwy,wxDialog)
	//(*EventTable(dialogLatwy)
	//*)
END_EVENT_TABLE()

dialogLatwy::dialogLatwy(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(dialogLatwy)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer5;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("£atwy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer4->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5 = new wxFlexGridSizer(0, 4, 0, 0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Iloœæ Flag:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer5->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("10"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer5->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton64 = new wxBitmapButton(this, ID_BITMAPBUTTON64, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON64"));
	FlexGridSizer5->Add(BitmapButton64, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer5->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 8, -10, -10);
	BitmapButton0 = new wxBitmapButton(this, ID_BITMAPBUTTON0, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON0"));
	FlexGridSizer3->Add(BitmapButton0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer3->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	FlexGridSizer3->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	FlexGridSizer3->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	FlexGridSizer3->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	FlexGridSizer3->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	FlexGridSizer3->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	FlexGridSizer3->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	FlexGridSizer3->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
	FlexGridSizer3->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
	FlexGridSizer3->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
	FlexGridSizer3->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
	FlexGridSizer3->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
	FlexGridSizer3->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
	FlexGridSizer3->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
	FlexGridSizer3->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
	FlexGridSizer3->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton17 = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
	FlexGridSizer3->Add(BitmapButton17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton18 = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
	FlexGridSizer3->Add(BitmapButton18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton19 = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
	FlexGridSizer3->Add(BitmapButton19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton20 = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
	FlexGridSizer3->Add(BitmapButton20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton21 = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
	FlexGridSizer3->Add(BitmapButton21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton22 = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
	FlexGridSizer3->Add(BitmapButton22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton23 = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
	FlexGridSizer3->Add(BitmapButton23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton24 = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
	FlexGridSizer3->Add(BitmapButton24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton25 = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
	FlexGridSizer3->Add(BitmapButton25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton26 = new wxBitmapButton(this, ID_BITMAPBUTTON26, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
	FlexGridSizer3->Add(BitmapButton26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton27 = new wxBitmapButton(this, ID_BITMAPBUTTON27, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
	FlexGridSizer3->Add(BitmapButton27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton28 = new wxBitmapButton(this, ID_BITMAPBUTTON28, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
	FlexGridSizer3->Add(BitmapButton28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton29 = new wxBitmapButton(this, ID_BITMAPBUTTON29, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON29"));
	FlexGridSizer3->Add(BitmapButton29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton30 = new wxBitmapButton(this, ID_BITMAPBUTTON30, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON30"));
	FlexGridSizer3->Add(BitmapButton30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton31 = new wxBitmapButton(this, ID_BITMAPBUTTON31, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON31"));
	FlexGridSizer3->Add(BitmapButton31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton32 = new wxBitmapButton(this, ID_BITMAPBUTTON32, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON32"));
	FlexGridSizer3->Add(BitmapButton32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton33 = new wxBitmapButton(this, ID_BITMAPBUTTON33, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON33"));
	FlexGridSizer3->Add(BitmapButton33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton34 = new wxBitmapButton(this, ID_BITMAPBUTTON34, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON34"));
	FlexGridSizer3->Add(BitmapButton34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton35 = new wxBitmapButton(this, ID_BITMAPBUTTON35, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON35"));
	FlexGridSizer3->Add(BitmapButton35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton36 = new wxBitmapButton(this, ID_BITMAPBUTTON36, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON36"));
	FlexGridSizer3->Add(BitmapButton36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton37 = new wxBitmapButton(this, ID_BITMAPBUTTON37, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON37"));
	FlexGridSizer3->Add(BitmapButton37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton38 = new wxBitmapButton(this, ID_BITMAPBUTTON38, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON38"));
	FlexGridSizer3->Add(BitmapButton38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton39 = new wxBitmapButton(this, ID_BITMAPBUTTON39, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON39"));
	FlexGridSizer3->Add(BitmapButton39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton40 = new wxBitmapButton(this, ID_BITMAPBUTTON40, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON40"));
	FlexGridSizer3->Add(BitmapButton40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton41 = new wxBitmapButton(this, ID_BITMAPBUTTON41, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON41"));
	FlexGridSizer3->Add(BitmapButton41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton42 = new wxBitmapButton(this, ID_BITMAPBUTTON42, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON42"));
	FlexGridSizer3->Add(BitmapButton42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton43 = new wxBitmapButton(this, ID_BITMAPBUTTON43, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON43"));
	FlexGridSizer3->Add(BitmapButton43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton44 = new wxBitmapButton(this, ID_BITMAPBUTTON44, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON44"));
	FlexGridSizer3->Add(BitmapButton44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton45 = new wxBitmapButton(this, ID_BITMAPBUTTON45, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON45"));
	FlexGridSizer3->Add(BitmapButton45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton46 = new wxBitmapButton(this, ID_BITMAPBUTTON46, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON46"));
	FlexGridSizer3->Add(BitmapButton46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton47 = new wxBitmapButton(this, ID_BITMAPBUTTON47, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON47"));
	FlexGridSizer3->Add(BitmapButton47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton48 = new wxBitmapButton(this, ID_BITMAPBUTTON48, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON48"));
	FlexGridSizer3->Add(BitmapButton48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton49 = new wxBitmapButton(this, ID_BITMAPBUTTON49, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON49"));
	FlexGridSizer3->Add(BitmapButton49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton50 = new wxBitmapButton(this, ID_BITMAPBUTTON50, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON50"));
	FlexGridSizer3->Add(BitmapButton50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton51 = new wxBitmapButton(this, ID_BITMAPBUTTON51, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON51"));
	FlexGridSizer3->Add(BitmapButton51, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton52 = new wxBitmapButton(this, ID_BITMAPBUTTON52, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON52"));
	FlexGridSizer3->Add(BitmapButton52, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton53 = new wxBitmapButton(this, ID_BITMAPBUTTON53, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON53"));
	FlexGridSizer3->Add(BitmapButton53, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton54 = new wxBitmapButton(this, ID_BITMAPBUTTON54, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON54"));
	FlexGridSizer3->Add(BitmapButton54, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton55 = new wxBitmapButton(this, ID_BITMAPBUTTON55, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON55"));
	FlexGridSizer3->Add(BitmapButton55, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton56 = new wxBitmapButton(this, ID_BITMAPBUTTON56, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON56"));
	FlexGridSizer3->Add(BitmapButton56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton57 = new wxBitmapButton(this, ID_BITMAPBUTTON57, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON57"));
	FlexGridSizer3->Add(BitmapButton57, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton58 = new wxBitmapButton(this, ID_BITMAPBUTTON58, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON58"));
	FlexGridSizer3->Add(BitmapButton58, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton59 = new wxBitmapButton(this, ID_BITMAPBUTTON59, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON59"));
	FlexGridSizer3->Add(BitmapButton59, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton60 = new wxBitmapButton(this, ID_BITMAPBUTTON60, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON60"));
	FlexGridSizer3->Add(BitmapButton60, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton61 = new wxBitmapButton(this, ID_BITMAPBUTTON61, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON61"));
	FlexGridSizer3->Add(BitmapButton61, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton62 = new wxBitmapButton(this, ID_BITMAPBUTTON62, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON62"));
	FlexGridSizer3->Add(BitmapButton62, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton63 = new wxBitmapButton(this, ID_BITMAPBUTTON63, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON63"));
	FlexGridSizer3->Add(BitmapButton63, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL, 5);
	SetSizer(FlexGridSizer1);
	Timer1.SetOwner(this, ID_TIMER1);
	Timer1.Start(10, false);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BITMAPBUTTON64,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dialogLatwy::OnBitmapButton64Click1);
	Connect(ID_BITMAPBUTTON0,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dialogLatwy::OnBitmapButton0Click);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&dialogLatwy::OnTimer1Trigger);
	//*)

    #define par(nr) plansza[nr] = BitmapButton##nr;
        par(0);	par(1);	par(2);	par(3);	par(4);	par(5);	par(6);	par(7);	par(8);	par(9);	par(10);	par(11);	par(12);	par(13);	par(14);	par(15);	par(16);	par(17);	par(18);	par(19);	par(20);	par(21);
        par(22);	par(23);	par(24);	par(25);	par(26);	par(27);	par(28);	par(29);	par(30);	par(31);	par(32);	par(33);	par(34);	par(35);	par(36);	par(37);	par(38);	par(39);	par(40);
        par(41);	par(42);	par(43);	par(44);	par(45);	par(46);	par(47);	par(48);	par(49);	par(50);	par(51);	par(52);	par(53);	par(54);	par(55);	par(56);	par(57);	par(58);	par(59);
        par(60);	par(61);	par(62);	par(63);
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

    for (int i = 0; i<=63;i++){
        Connect(plansza[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dialogLatwy::OnBitmapButton0Click);
        plansza[i]->Connect(wxEVT_RIGHT_DOWN,(wxObjectEventFunction)&dialogLatwy::OnRightClick, NULL, this);
        plansza[i] -> SetBitmap(rysunki[0]);

    }

    for(int i=0;i<8;i++){  // Nadanie liczby obiektowi P atrybutu 'numer' równej id planszy
        for(int j=0;j<8;j++){
            P[i][j].SetNumer(num);
            num++;
        }
    }

    reset();

    this->Fit();
}

dialogLatwy::~dialogLatwy()
{
	//(*Destroy(dialogLatwy)
	//*)
	delete G;
}

void dialogLatwy::reset(){
    BitmapButton64->SetBitmap(rysunki[13]);
    Timer1.Stop();
    ile_razy = 0;
    G->Zresetuj(64);

    StaticText3 -> SetLabel("10");
    StaticText4 -> SetLabel("0");


    for (int i = 0; i<=63;i++){
        plansza[i] -> SetBitmap(rysunki[0]);
    }
    for(int i=0;i<8;i++){                               //wyzerowanie atrybutów 'wartosc' i 'zajete'
        for(int j=0;j<8;j++){
            P[i][j].SetZajete(0);
            P[i][j].SetWartosc(0);
        }
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            for(int m=0;m<10;m++){                      // bomby otrzymuj¹ 'Wartosc' rowna 9
                if(P[i][j].GetNumer()==G->GetLiczby(m)){
                    P[i][j].SetWartosc(9);
                    for(int k = -1; k<=1; k++){
                        for(int l = -1; l<=1; l++){                     // wszystkie pola s¹siaduj¹ce
                            if((i+k>=0)&&(i+k<8)&&(j+l>=0)&&(j+l<8))    // z bomb¹ zwiêkszaj¹ 'Wartosc' o 1
                                P[i+k][j+l].ZwiekszWartosc();
                        }
                    }
                }
            }
        }
    }
}

void dialogLatwy::odkryj(int x,int y){                          // odkrywa pole o wspo³rzêdnych x,y
    int id = 8*y+x;                                             // konwersja wspó³rzêdnych na id
    if(P[x][y].GetZajete()==0){
        P[x][y].SetZajete(1);
        if(P[x][y].GetWartosc()>=9){                            // trafienie na bombe
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    if((P[i][j].GetWartosc()>=9)&&(P[i][j].GetZajete()==0)){    // odkrycie wszystkich bomb
                        plansza[j*8+i]->SetBitmap(rysunki[10]);
                    }
                    else if((P[i][j].GetZajete()==2)&&(P[i][j].GetWartosc()<9)) // ukazanie b³êdnych zaznaczeñ
                        plansza[j*8+i]->SetBitmap(rysunki[15]);
                }
            }
            plansza[id]->SetBitmap(rysunki[11]);
            Timer1.Stop();
            G->SetStanGry(2);
            BitmapButton64->SetBitmap(rysunki[14]);
        }
        else if(P[x][y].GetWartosc()==0){                           // trafienie na pole puste
                G->Zmniejsz();              // zmniejszenie liczby nieodkrytych pól
            for(int k = -1; k<=1; k++){
                for(int l = -1; l<=1; l++){
                    if((x+k>=0)&&(x+k<8)&&(y+l>=0)&&(y+l<8)){       // odkrycie wszystkich s¹siaduj¹cych pól
                        odkryj(x+k,y+l);
                        plansza[id] -> SetBitmap(rysunki[1]);
                      }
                }
            }
        }
        else{                                                       // trafienie na pole z cyfr¹
            plansza[id] -> SetBitmap(rysunki[P[x][y].GetWartosc()+1]);
            G->Zmniejsz();                  // zmniejszenie liczby nieodkrytych pól
        }
    }
}

void dialogLatwy::OnBitmapButton0Click(wxCommandEvent& event)
{
    if(G->GetStanGry() == 0){               // Pierwszy ruch uaktywnia timer
        Timer1.Start();
        G->SetStanGry(1);
    }
    if(G->GetStanGry() == 1){
        int i = event.GetId()-372;          // id Bitmapy jest o 372 wiêksze od numeru 'planszy'
        int X,Y;
        X = i%8;
        Y = (i-X)/8;
        odkryj(X,Y);

        if(G->Wygrana()){                   // Sprawdza czy gra zosta³a zakoñczona
            Timer1.Stop();
            wxMessageBox("Wygrana");
            reset();
        }
    }
}

void dialogLatwy::OnRightClick(wxCommandEvent& event)
{

    if(G->GetStanGry() == 1){
        int i = event.GetId() - 372;        // id Bitmapy jest o 372 wiêksze od numeru 'planszy'
        int X,Y;
        X = i%8;                            // konwersja id na wspó³rzêdne
        Y = (i-X)/8;

        if(P[X][Y].GetZajete()==0 && G->GetFlagi() > 0){         // postawienie flagi
            P[X][Y].SetZajete(2);
            plansza[i]-> SetBitmap(rysunki[12]);
            G->ZmniejszF();
        }
        else if(P[X][Y].GetZajete()==2){                         // zdjêcie flagi
            P[X][Y].SetZajete(0);
            plansza[i]-> SetBitmap(rysunki[0]);
            G->ZwiekszF();
        }
        wxString w;
        int x = G->GetFlagi();
        w<< x;
        StaticText3 -> SetLabel(w);                              // ustawienie liczby flag
    }
}

void dialogLatwy::OnBitmapButton64Click1(wxCommandEvent& event)
{
    reset();
}

void dialogLatwy::OnTimer1Trigger(wxTimerEvent& event)
{
    ile_razy++;
    double c = ile_razy * Timer1.GetInterval()/1000.0;
    czas = wxString::Format("%.2f",c);
    StaticText4 -> SetLabel(czas);
}
