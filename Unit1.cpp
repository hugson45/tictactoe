//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char p1,p2,p3,p4,p5,p6,p7,p8,p9;
char kto;

void sprawdz()
{
  if
  ((p1==p2 && p2==p3 && p1!='n') ||
   (p4==p5 && p5==p6 && p4!='n') ||
   (p7==p8 && p8==p9 && p7!='n') ||
   (p1==p4 && p4==p7 && p7!='n') ||
   (p2==p5 && p5==p8 && p2!='n') ||
   (p3==p6 && p6==p9 && p3!='n') ||
   (p1==p5 && p5==p9 && p1!='n') ||
   (p3==p5 && p5==p7 && p7!='n'))
{
   char * w;
   if(kto=='x') {
   w="Wygrywa kolko !";
   Application->MessageBox(w, "Koniec Gry", MB_OK);
   }
   else
    {
   w="Wygrywa krzyzyk !";
   Application->MessageBox(w, "Koniec Gry", MB_OK);
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

p1='n'; p2='n'; p3='n';
p4='n'; p5='n'; p6='n';
p7='n'; p8='n'; p9='n';

kto='o';

Pole1 -> Enabled = true;
Pole2 -> Enabled = true;
Pole3 -> Enabled = true;
Pole4 -> Enabled = true;
Pole5 -> Enabled = true;
Pole6 -> Enabled = true;
Pole7 -> Enabled = true;
Pole8 -> Enabled = true;
Pole9 -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole1Click(TObject *Sender)
{
if (p1=='n')
{
 if(kto=='o')
 {
 Pole1->Picture->LoadFromFile("img/kolko.bmp");
 p1='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole1->Picture->LoadFromFile("img/krzyzyk.bmp");
 p1='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole1 -> Enabled = false;
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole2Click(TObject *Sender)
{
if (p2=='n')
{
 if(kto=='o')
 {
 Pole2->Picture->LoadFromFile("img/kolko.bmp");
 p2='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole2->Picture->LoadFromFile("img/krzyzyk.bmp");
 p2='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole2 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole3Click(TObject *Sender)
{
if (p3=='n')
{
 if(kto=='o')
 {
 Pole3->Picture->LoadFromFile("img/kolko.bmp");
 p3='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole3->Picture->LoadFromFile("img/krzyzyk.bmp");
 p3='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole3 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole4Click(TObject *Sender)
{
if (p4=='n')
{
 if(kto=='o')
 {
 Pole4->Picture->LoadFromFile("img/kolko.bmp");
 p4='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole4->Picture->LoadFromFile("img/krzyzyk.bmp");
 p4='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole4 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole5Click(TObject *Sender)
{
if (p5=='n')
{
 if(kto=='o')
 {
 Pole5->Picture->LoadFromFile("img/kolko.bmp");
 p5='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole5->Picture->LoadFromFile("img/krzyzyk.bmp");
 p5='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole5 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole6Click(TObject *Sender)
{
if (p6=='n')
{
 if(kto=='o')
 {
 Pole6->Picture->LoadFromFile("img/kolko.bmp");
 p6='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole6->Picture->LoadFromFile("img/krzyzyk.bmp");
 p6='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole6 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole7Click(TObject *Sender)
{
if (p7=='n')
{
 if(kto=='o')
 {
 Pole7->Picture->LoadFromFile("img/kolko.bmp");
 p7='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole7->Picture->LoadFromFile("img/krzyzyk.bmp");
 p7='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole7 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole8Click(TObject *Sender)
{
if (p8=='n')
{
 if(kto=='o')
 {
 Pole8->Picture->LoadFromFile("img/kolko.bmp");
 p8='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole8->Picture->LoadFromFile("img/krzyzyk.bmp");
 p8='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole8 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole9Click(TObject *Sender)
{
if (p9=='n')
{
 if(kto=='o')
 {
 Pole9->Picture->LoadFromFile("img/kolko.bmp");
 p9='o';
 kto='x';
 Tura->Picture ->LoadFromFile("img/smallk.bmp");

 }
 else
 {
 Pole9->Picture->LoadFromFile("img/krzyzyk.bmp");
 p9='x';
 kto='o';
 Tura->Picture ->LoadFromFile("img/smallo.bmp");

 }
 Pole9 -> Enabled = false;
}
sprawdz();
}
//---------------------------------------------------------------------------




