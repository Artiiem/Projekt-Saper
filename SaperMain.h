/***************************************************************
 * Name:      SaperMain.h
 * Purpose:   Defines Application Frame
 * Author:    Artur Kidaj ()
 * Created:   2023-01-05
 * Copyright: Artur Kidaj ()
 * License:
 **************************************************************/

#ifndef SAPERMAIN_H
#define SAPERMAIN_H

using namespace std;

//(*Headers(SaperDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)


#include <iostream>

class SaperDialog: public wxDialog
{
    public:

        SaperDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~SaperDialog();

    private:

        //(*Handlers(SaperDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(SaperDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        //*)

        //(*Declarations(SaperDialog)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SAPERMAIN_H




