/***************************************************************
 * Name:      SaperMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Artur Kidaj ()
 * Created:   2023-01-05
 * Copyright: Artur Kidaj ()
 * License:
 **************************************************************/

#include "SaperMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(SaperDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include "dialogLatwy.h"
#include "dialogSredni.h"
#include "dialogTrudny.h"


#undef _
#define _(s) wxString::FromUTF8 (s)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(SaperDialog)
const long SaperDialog::ID_STATICTEXT1 = wxNewId();
const long SaperDialog::ID_STATICTEXT2 = wxNewId();
const long SaperDialog::ID_BUTTON1 = wxNewId();
const long SaperDialog::ID_BUTTON2 = wxNewId();
const long SaperDialog::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SaperDialog,wxDialog)
    //(*EventTable(SaperDialog)
    //*)
END_EVENT_TABLE()

SaperDialog::SaperDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(SaperDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer4;

    Create(parent, id, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Saper"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Poziom trudności"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
    Button1 = new wxButton(this, ID_BUTTON1, _("Łatwy"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Średni"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Trudny"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer4->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SaperDialog::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SaperDialog::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SaperDialog::OnButton3Click);
    //*)

}


SaperDialog::~SaperDialog()
{
    //(*Destroy(SaperDialog)
    //*)
}

void SaperDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void SaperDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void SaperDialog::OnButton1Click(wxCommandEvent& event)
{
    dialogLatwy * dg = new dialogLatwy(this);
    dg -> ShowModal();
    delete dg;
}

void SaperDialog::OnButton2Click(wxCommandEvent& event)
{
    dialogSredni * dg = new dialogSredni(this);
    dg -> ShowModal();
    delete dg;
}

void SaperDialog::OnButton3Click(wxCommandEvent& event)
{
    dialogTrudny * dg = new dialogTrudny(this);
    dg -> ShowModal();
    delete dg;
}
