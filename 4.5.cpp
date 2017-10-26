#include <iostream>
#include <string>
struct CandyBar
{
std::string Name  ;
 double netto;
 int Ccal;
  };
void main ()
{ 
 using namespace std;
 CandyBar *bar= new CandyBar[3];
  bar[0].Name="Mocha Much";
 bar[0].netto=2.3;
bar[0].Ccal=350;
bar[1].Name="sfdsfsdf";
 bar[1].netto=2.45;
bar[1].Ccal=435;
 bar[2].Name="bnderlogi";
    bar[2].netto=2.12;
    bar[2].Ccal=777;
cout<<"Struct  "<<bar[0].Name<<"    "<<bar[0].netto<<"   "<<bar[0].Ccal<<endl;
 system("pause");
 delete bar;
 }
