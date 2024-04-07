#ifndef DIALOGTRUDNY_H
#define DIALOGTRUDNY_H

//(*Headers(dialogTrudny)
#include <wx/bmpbuttn.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

#include "Gra.h"
#include "pole.h"
#include <iostream>
using namespace std;

class dialogTrudny: public wxDialog
{
	public:

		dialogTrudny(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~dialogTrudny();
        void odkryj(int x,int y);//funkcja odkrywająca pole
		void reset();            //funkcja resetu

		//(*Declarations(dialogTrudny)
		wxBitmapButton* BitmapButton0;
		wxBitmapButton* BitmapButton100;
		wxBitmapButton* BitmapButton101;
		wxBitmapButton* BitmapButton102;
		wxBitmapButton* BitmapButton103;
		wxBitmapButton* BitmapButton104;
		wxBitmapButton* BitmapButton105;
		wxBitmapButton* BitmapButton106;
		wxBitmapButton* BitmapButton107;
		wxBitmapButton* BitmapButton108;
		wxBitmapButton* BitmapButton109;
		wxBitmapButton* BitmapButton10;
		wxBitmapButton* BitmapButton110;
		wxBitmapButton* BitmapButton111;
		wxBitmapButton* BitmapButton112;
		wxBitmapButton* BitmapButton113;
		wxBitmapButton* BitmapButton114;
		wxBitmapButton* BitmapButton115;
		wxBitmapButton* BitmapButton116;
		wxBitmapButton* BitmapButton117;
		wxBitmapButton* BitmapButton118;
		wxBitmapButton* BitmapButton119;
		wxBitmapButton* BitmapButton11;
		wxBitmapButton* BitmapButton120;
		wxBitmapButton* BitmapButton121;
		wxBitmapButton* BitmapButton122;
		wxBitmapButton* BitmapButton123;
		wxBitmapButton* BitmapButton124;
		wxBitmapButton* BitmapButton125;
		wxBitmapButton* BitmapButton126;
		wxBitmapButton* BitmapButton127;
		wxBitmapButton* BitmapButton128;
		wxBitmapButton* BitmapButton129;
		wxBitmapButton* BitmapButton12;
		wxBitmapButton* BitmapButton130;
		wxBitmapButton* BitmapButton131;
		wxBitmapButton* BitmapButton132;
		wxBitmapButton* BitmapButton133;
		wxBitmapButton* BitmapButton134;
		wxBitmapButton* BitmapButton135;
		wxBitmapButton* BitmapButton136;
		wxBitmapButton* BitmapButton137;
		wxBitmapButton* BitmapButton138;
		wxBitmapButton* BitmapButton139;
		wxBitmapButton* BitmapButton13;
		wxBitmapButton* BitmapButton140;
		wxBitmapButton* BitmapButton141;
		wxBitmapButton* BitmapButton142;
		wxBitmapButton* BitmapButton143;
		wxBitmapButton* BitmapButton144;
		wxBitmapButton* BitmapButton145;
		wxBitmapButton* BitmapButton146;
		wxBitmapButton* BitmapButton147;
		wxBitmapButton* BitmapButton148;
		wxBitmapButton* BitmapButton149;
		wxBitmapButton* BitmapButton14;
		wxBitmapButton* BitmapButton150;
		wxBitmapButton* BitmapButton15;
		wxBitmapButton* BitmapButton16;
		wxBitmapButton* BitmapButton17;
		wxBitmapButton* BitmapButton18;
		wxBitmapButton* BitmapButton19;
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton20;
		wxBitmapButton* BitmapButton21;
		wxBitmapButton* BitmapButton22;
		wxBitmapButton* BitmapButton23;
		wxBitmapButton* BitmapButton24;
		wxBitmapButton* BitmapButton25;
		wxBitmapButton* BitmapButton26;
		wxBitmapButton* BitmapButton27;
		wxBitmapButton* BitmapButton28;
		wxBitmapButton* BitmapButton29;
		wxBitmapButton* BitmapButton2;
		wxBitmapButton* BitmapButton30;
		wxBitmapButton* BitmapButton31;
		wxBitmapButton* BitmapButton32;
		wxBitmapButton* BitmapButton33;
		wxBitmapButton* BitmapButton34;
		wxBitmapButton* BitmapButton35;
		wxBitmapButton* BitmapButton36;
		wxBitmapButton* BitmapButton37;
		wxBitmapButton* BitmapButton38;
		wxBitmapButton* BitmapButton39;
		wxBitmapButton* BitmapButton3;
		wxBitmapButton* BitmapButton40;
		wxBitmapButton* BitmapButton41;
		wxBitmapButton* BitmapButton42;
		wxBitmapButton* BitmapButton43;
		wxBitmapButton* BitmapButton44;
		wxBitmapButton* BitmapButton45;
		wxBitmapButton* BitmapButton46;
		wxBitmapButton* BitmapButton47;
		wxBitmapButton* BitmapButton48;
		wxBitmapButton* BitmapButton49;
		wxBitmapButton* BitmapButton4;
		wxBitmapButton* BitmapButton50;
		wxBitmapButton* BitmapButton51;
		wxBitmapButton* BitmapButton52;
		wxBitmapButton* BitmapButton53;
		wxBitmapButton* BitmapButton54;
		wxBitmapButton* BitmapButton55;
		wxBitmapButton* BitmapButton56;
		wxBitmapButton* BitmapButton57;
		wxBitmapButton* BitmapButton58;
		wxBitmapButton* BitmapButton59;
		wxBitmapButton* BitmapButton5;
		wxBitmapButton* BitmapButton60;
		wxBitmapButton* BitmapButton61;
		wxBitmapButton* BitmapButton62;
		wxBitmapButton* BitmapButton63;
		wxBitmapButton* BitmapButton64;
		wxBitmapButton* BitmapButton65;
		wxBitmapButton* BitmapButton66;
		wxBitmapButton* BitmapButton67;
		wxBitmapButton* BitmapButton68;
		wxBitmapButton* BitmapButton69;
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton70;
		wxBitmapButton* BitmapButton71;
		wxBitmapButton* BitmapButton72;
		wxBitmapButton* BitmapButton73;
		wxBitmapButton* BitmapButton74;
		wxBitmapButton* BitmapButton75;
		wxBitmapButton* BitmapButton76;
		wxBitmapButton* BitmapButton77;
		wxBitmapButton* BitmapButton78;
		wxBitmapButton* BitmapButton79;
		wxBitmapButton* BitmapButton7;
		wxBitmapButton* BitmapButton80;
		wxBitmapButton* BitmapButton81;
		wxBitmapButton* BitmapButton82;
		wxBitmapButton* BitmapButton83;
		wxBitmapButton* BitmapButton84;
		wxBitmapButton* BitmapButton85;
		wxBitmapButton* BitmapButton86;
		wxBitmapButton* BitmapButton87;
		wxBitmapButton* BitmapButton88;
		wxBitmapButton* BitmapButton89;
		wxBitmapButton* BitmapButton8;
		wxBitmapButton* BitmapButton90;
		wxBitmapButton* BitmapButton91;
		wxBitmapButton* BitmapButton92;
		wxBitmapButton* BitmapButton93;
		wxBitmapButton* BitmapButton94;
		wxBitmapButton* BitmapButton95;
		wxBitmapButton* BitmapButton96;
		wxBitmapButton* BitmapButton97;
		wxBitmapButton* BitmapButton98;
		wxBitmapButton* BitmapButton99;
		wxBitmapButton* BitmapButton9;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxTimer Timer1;
		//*)

	protected:

		//(*Identifiers(dialogTrudny)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BITMAPBUTTON150;
		static const long ID_STATICTEXT4;
		static const long ID_BITMAPBUTTON0;
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON3;
		static const long ID_BITMAPBUTTON4;
		static const long ID_BITMAPBUTTON5;
		static const long ID_BITMAPBUTTON6;
		static const long ID_BITMAPBUTTON7;
		static const long ID_BITMAPBUTTON8;
		static const long ID_BITMAPBUTTON9;
		static const long ID_BITMAPBUTTON10;
		static const long ID_BITMAPBUTTON11;
		static const long ID_BITMAPBUTTON12;
		static const long ID_BITMAPBUTTON13;
		static const long ID_BITMAPBUTTON14;
		static const long ID_BITMAPBUTTON15;
		static const long ID_BITMAPBUTTON16;
		static const long ID_BITMAPBUTTON17;
		static const long ID_BITMAPBUTTON18;
		static const long ID_BITMAPBUTTON19;
		static const long ID_BITMAPBUTTON20;
		static const long ID_BITMAPBUTTON21;
		static const long ID_BITMAPBUTTON22;
		static const long ID_BITMAPBUTTON23;
		static const long ID_BITMAPBUTTON24;
		static const long ID_BITMAPBUTTON25;
		static const long ID_BITMAPBUTTON26;
		static const long ID_BITMAPBUTTON27;
		static const long ID_BITMAPBUTTON28;
		static const long ID_BITMAPBUTTON29;
		static const long ID_BITMAPBUTTON30;
		static const long ID_BITMAPBUTTON31;
		static const long ID_BITMAPBUTTON32;
		static const long ID_BITMAPBUTTON33;
		static const long ID_BITMAPBUTTON34;
		static const long ID_BITMAPBUTTON35;
		static const long ID_BITMAPBUTTON36;
		static const long ID_BITMAPBUTTON37;
		static const long ID_BITMAPBUTTON38;
		static const long ID_BITMAPBUTTON39;
		static const long ID_BITMAPBUTTON40;
		static const long ID_BITMAPBUTTON41;
		static const long ID_BITMAPBUTTON42;
		static const long ID_BITMAPBUTTON43;
		static const long ID_BITMAPBUTTON44;
		static const long ID_BITMAPBUTTON45;
		static const long ID_BITMAPBUTTON46;
		static const long ID_BITMAPBUTTON47;
		static const long ID_BITMAPBUTTON48;
		static const long ID_BITMAPBUTTON49;
		static const long ID_BITMAPBUTTON50;
		static const long ID_BITMAPBUTTON51;
		static const long ID_BITMAPBUTTON52;
		static const long ID_BITMAPBUTTON53;
		static const long ID_BITMAPBUTTON54;
		static const long ID_BITMAPBUTTON55;
		static const long ID_BITMAPBUTTON56;
		static const long ID_BITMAPBUTTON57;
		static const long ID_BITMAPBUTTON58;
		static const long ID_BITMAPBUTTON59;
		static const long ID_BITMAPBUTTON60;
		static const long ID_BITMAPBUTTON61;
		static const long ID_BITMAPBUTTON62;
		static const long ID_BITMAPBUTTON63;
		static const long ID_BITMAPBUTTON64;
		static const long ID_BITMAPBUTTON65;
		static const long ID_BITMAPBUTTON66;
		static const long ID_BITMAPBUTTON67;
		static const long ID_BITMAPBUTTON68;
		static const long ID_BITMAPBUTTON69;
		static const long ID_BITMAPBUTTON70;
		static const long ID_BITMAPBUTTON71;
		static const long ID_BITMAPBUTTON72;
		static const long ID_BITMAPBUTTON73;
		static const long ID_BITMAPBUTTON74;
		static const long ID_BITMAPBUTTON75;
		static const long ID_BITMAPBUTTON76;
		static const long ID_BITMAPBUTTON77;
		static const long ID_BITMAPBUTTON78;
		static const long ID_BITMAPBUTTON79;
		static const long ID_BITMAPBUTTON80;
		static const long ID_BITMAPBUTTON81;
		static const long ID_BITMAPBUTTON82;
		static const long ID_BITMAPBUTTON83;
		static const long ID_BITMAPBUTTON84;
		static const long ID_BITMAPBUTTON85;
		static const long ID_BITMAPBUTTON86;
		static const long ID_BITMAPBUTTON87;
		static const long ID_BITMAPBUTTON88;
		static const long ID_BITMAPBUTTON89;
		static const long ID_BITMAPBUTTON90;
		static const long ID_BITMAPBUTTON91;
		static const long ID_BITMAPBUTTON92;
		static const long ID_BITMAPBUTTON93;
		static const long ID_BITMAPBUTTON94;
		static const long ID_BITMAPBUTTON95;
		static const long ID_BITMAPBUTTON96;
		static const long ID_BITMAPBUTTON97;
		static const long ID_BITMAPBUTTON98;
		static const long ID_BITMAPBUTTON99;
		static const long ID_BITMAPBUTTON100;
		static const long ID_BITMAPBUTTON101;
		static const long ID_BITMAPBUTTON102;
		static const long ID_BITMAPBUTTON103;
		static const long ID_BITMAPBUTTON104;
		static const long ID_BITMAPBUTTON105;
		static const long ID_BITMAPBUTTON106;
		static const long ID_BITMAPBUTTON107;
		static const long ID_BITMAPBUTTON108;
		static const long ID_BITMAPBUTTON109;
		static const long ID_BITMAPBUTTON110;
		static const long ID_BITMAPBUTTON111;
		static const long ID_BITMAPBUTTON112;
		static const long ID_BITMAPBUTTON113;
		static const long ID_BITMAPBUTTON114;
		static const long ID_BITMAPBUTTON115;
		static const long ID_BITMAPBUTTON116;
		static const long ID_BITMAPBUTTON117;
		static const long ID_BITMAPBUTTON118;
		static const long ID_BITMAPBUTTON119;
		static const long ID_BITMAPBUTTON120;
		static const long ID_BITMAPBUTTON121;
		static const long ID_BITMAPBUTTON122;
		static const long ID_BITMAPBUTTON123;
		static const long ID_BITMAPBUTTON124;
		static const long ID_BITMAPBUTTON125;
		static const long ID_BITMAPBUTTON126;
		static const long ID_BITMAPBUTTON127;
		static const long ID_BITMAPBUTTON128;
		static const long ID_BITMAPBUTTON129;
		static const long ID_BITMAPBUTTON130;
		static const long ID_BITMAPBUTTON131;
		static const long ID_BITMAPBUTTON132;
		static const long ID_BITMAPBUTTON133;
		static const long ID_BITMAPBUTTON134;
		static const long ID_BITMAPBUTTON135;
		static const long ID_BITMAPBUTTON136;
		static const long ID_BITMAPBUTTON137;
		static const long ID_BITMAPBUTTON138;
		static const long ID_BITMAPBUTTON139;
		static const long ID_BITMAPBUTTON140;
		static const long ID_BITMAPBUTTON141;
		static const long ID_BITMAPBUTTON142;
		static const long ID_BITMAPBUTTON143;
		static const long ID_BITMAPBUTTON144;
		static const long ID_BITMAPBUTTON145;
		static const long ID_BITMAPBUTTON146;
		static const long ID_BITMAPBUTTON147;
		static const long ID_BITMAPBUTTON148;
		static const long ID_BITMAPBUTTON149;
		static const long ID_TIMER1;
		//*)

	private:

		//(*Handlers(dialogTrudny)
		void OnBitmapButton0Click(wxCommandEvent& event);
		void OnBitmapButton150Click(wxCommandEvent& event);
		void OnTimer1Trigger(wxTimerEvent& event);
		//*)

		DECLARE_EVENT_TABLE()


        wxBitmapButton *plansza[150];
        wxBitmap rysunki[16];

        void OnRightClick(wxCommandEvent& event);

        Gra *G = new Gra(25);

        pole P[15][10]; // utworzenie obiektu P klasy Pole jako tablica dwuwymiarowa,
                        // pierwsza liczba definiuje ilość kolumn planszy,
                        // druga liczba definiuje ilość wierszy planszy

        int num = 0;            // służy do nadania klasie P atrybutu numer
        int ile_razy = 0;       // służy do obsługi timera

        string czas;            // służy do obsługi timera
};



#endif
