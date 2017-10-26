#include <iostream>
struct CandyBar
{
 char Name [20];
double netto;
int Ccal;
};
int main ()
{ 
using namespace std;
CandyBar snack[3]={
{"Mocha Much",2.3,350},
{"MurMer",3.89,576},
{"KiuTyu", 1.89 , 134}};
cout<<snack[1].Name<<"    "<<snack[1].netto<<"   "<<snack[1].Ccal<<endl;
cin.get();
return 0;
  }
