#ifndef DIALOGLATWY_H
#define DIALOGLATWY_H

//(*Headers(dialogLatwy)
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

class dialogLatwy: public wxDialog
{
	public:

		dialogLatwy(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~dialogLatwy();
		void odkryj(int x,int y); //funkcja odkrywająca pole
		void reset();             //funkcja resetu

		//(*Declarations(dialogLatwy)
		wxBitmapButton* BitmapButton0;
		wxBitmapButton* BitmapButton10;
		wxBitmapButton* BitmapButton11;
		wxBitmapButton* BitmapButton12;
		wxBitmapButton* BitmapButton13;
		wxBitmapButton* BitmapButton14;
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
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton7;
		wxBitmapButton* BitmapButton8;
		wxBitmapButton* BitmapButton9;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxTimer Timer1;
		//*)

	protected:

		//(*Identifiers(dialogLatwy)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BITMAPBUTTON64;
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
		static const long ID_TIMER1;
		//*)

	private:

		//(*Handlers(dialogLatwy)
		void OnBitmapButton0Click(wxCommandEvent& event);
		void OnBitmapButton64Click(wxCommandEvent& event);
		void OnTimer1Trigger(wxTimerEvent& event);
		void OnBitmapButton64Click1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()

        wxBitmapButton *plansza[64];
        wxBitmap rysunki[16];

        void OnRightClick(wxCommandEvent& event);

        Gra *G = new Gra(10);

        pole P[8][8]; // utworzenie obiektu P klasy Pole jako tablica dwuwymiarowa,
                      // pierwsza liczba definiuje ilość kolumn planszy,
                      // druga liczba definiuje ilość wierszy planszy


        int num = 0;            // służy do nadania klasie P atrybutu numer
        int ile_razy = 0;       // służy do obsługi timera

        string czas;            // służy do obsługi timera

};



#endif
