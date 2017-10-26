#include <iostream>
struct Pizza
{
char Name [20];
double netto;
int Ccal;
};
int main ()
{   
using namespace std;
Pizza Peper;
cout<<"Enter Name:"<<endl;
cin.getline (Peper.Name,20);
cout<<"Enter diametr:"<<endl;
cin>>Peper.netto;
cout<<"Enter massa:"<<endl;
cin>>Peper.Ccal;
cout<<"Pizza: "<<Peper.Name<<endl<<"Diametr: "<<Peper.netto<<endl<<"Massa: "<<Peper.Ccal<<endl;
cin.get();
cin.get();
return 0;
}
