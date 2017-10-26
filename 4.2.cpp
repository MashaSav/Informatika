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
    CandyBar snack={"Mocha Much",2.3,350};
    cout<<snack.Name<<"     "<<snack.netto<<"     "<<snack.Ccal<<endl;
    cin.get();
    return 0;
  }
