//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char p1,p2,p3,p4,p5,p6,p7,p8,p9;
char kto; //n /o /x

void sprawdzanie()
{
 if(((p1 == p2) && (p2 == p3) && (p1 != 'n')) ||
    ((p4 == p5) && (p5 == p6) && (p4 != 'n')) ||
    ((p7 == p8) && (p8 == p9) && (p7 != 'n')) ||
    ((p1 == p4) && (p4 == p7) && (p1 != 'n')) ||
    ((p2 == p5) && (p5 == p8) && (p2 != 'n')) ||
    ((p3 == p6) && (p6 == p9) && (p3 != 'n')) ||
    ((p1 == p5) && (p5 == p9) && (p1 != 'n')) ||
    ((p3 == p5) && (p5 == p7) && (p3 != 'n')))

    {
      Application -> MessageBox("Wygrana !!!", "Koniec Gry", MB_OK);
    }
    else
     {
    if ((p1 != 'n') && (p2 != 'n') && (p3 != 'n') && (p4 != 'n') && (p5 != 'n')
    && (p6 != 'n') && (p7 != 'n') && (p8 != 'n') && (p9 != 'n'))
    {
     Application -> MessageBox("Brak wygranego !!!","Koniec Gry", MB_OK);
    }
    }

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Pole1->Picture -> LoadFromFile("img/pole.bmp");
Pole2->Picture -> LoadFromFile("img/pole.bmp");
Pole3->Picture -> LoadFromFile("img/pole.bmp");
Pole4->Picture -> LoadFromFile("img/pole.bmp");
Pole5->Picture -> LoadFromFile("img/pole.bmp");
Pole6->Picture -> LoadFromFile("img/pole.bmp");
Pole7->Picture -> LoadFromFile("img/pole.bmp");
Pole8->Picture -> LoadFromFile("img/pole.bmp");
Pole9->Picture -> LoadFromFile("img/pole.bmp");
Tura -> Picture -> LoadFromFile("img/smallo.bmp");

p1='n'; p2='n'; p3='n';
p4='n'; p5='n'; p6='n';
p7='n'; p8='n'; p9='n';

kto = 'o';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole1Click(TObject *Sender)
{
if (p1 == 'n')
{
 if (kto == 'o')
 {
  Pole1 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p1='o';
  sprawdzanie();
 }
 else
 {
  Pole1 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p1='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole2Click(TObject *Sender)
{
if (p2 == 'n')
{
 if (kto == 'o')
 {
  Pole2 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p2='o';
  sprawdzanie();
 }
 else
 {
  Pole2 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p2='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole3Click(TObject *Sender)
{
if (p3 == 'n')
{
 if (kto == 'o')
 {
  Pole3 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p3='o';
  sprawdzanie();
 }
 else
 {
  Pole3 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p3='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole4Click(TObject *Sender)
{
if (p4 == 'n')
{
 if (kto == 'o')
 {
  Pole4 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p4='o';
  sprawdzanie();
 }
 else
 {
  Pole4 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p4='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole5Click(TObject *Sender)
{
if (p5 == 'n')
{
 if (kto == 'o')
 {
  Pole5 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p5='o';
  sprawdzanie();
 }
 else
 {
  Pole5 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p5='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole6Click(TObject *Sender)
{
if (p6 == 'n')
{
 if (kto == 'o')
 {
  Pole6 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p6='o';
  sprawdzanie();
 }
 else
 {
  Pole6 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p6='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole7Click(TObject *Sender)
{
if (p7 == 'n')
{
 if (kto == 'o')
 {
  Pole7 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p7='o';
  sprawdzanie();
 }
 else
 {
  Pole7 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p7='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole8Click(TObject *Sender)
{
if (p8 == 'n')
{
 if (kto == 'o')
 {
  Pole8 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p8='o';
  sprawdzanie();
 }
 else
 {
  Pole8 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p8='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole9Click(TObject *Sender)
{
if (p9 == 'n')
{
 if (kto == 'o')
 {
  Pole9 -> Picture -> LoadFromFile("img/kolko.bmp");
  Tura -> Picture -> LoadFromFile("img/smallk.bmp");
  kto='x';
  p9='o';
  sprawdzanie();
 }
 else
 {
  Pole9 -> Picture -> LoadFromFile("img/krzyzyk.bmp");
  Tura -> Picture -> LoadFromFile("img/smallo.bmp");
  kto='o';
  p9='x';
  sprawdzanie();
 }

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (Application -> MessageBox("Rozpoczac nowa gre?","Nowa Gra", MB_YESNO) == IDYES)
 {
 Pole1 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole2 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole3 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole4 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole5 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole6 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole7 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole8 -> Picture -> LoadFromFile("img/pole.bmp");
 Pole9 -> Picture -> LoadFromFile("img/pole.bmp");
 Tura -> Picture -> LoadFromFile("img/smallo.bmp");

 kto='o';
 p1='n'; p2='n'; p3='n'; p4='n';
 p5='n'; p6='n'; p7='n'; p8='n';
 p9='n';
}

}
//---------------------------------------------------------------------------
