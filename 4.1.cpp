#include <iostream>
 
int main ()
{ 
    using namespace std;
    const int M = 20;
    char K[M];
    char L[M];
    int age;
    char bit;
    cout<<"what is your first name? "<<endl;
    cin.getline(K,M);
    cout<<"what is your last name? "<<endl;
    cin.getline(L,M);
    cout<<"what letter grade do you deserve? "<<endl;
    cin>>bit;
    cout<<"what is your age "<<endl;
    cin>> age ;
    cin.get();
    cout<<"Name: "<<L<<" "<<K<<endl;
    cout<<"Age: "<<age<<endl;
    switch (bit)
    {case 'A':
    cout<<"Grade B "<<endl;
    break;
    case 'B':
    cout<<"Grade C"<<endl;
    break;
    case 'C':
    cout<<"Grade D"<<endl;
    break;
    default: cout<<"wrong"<<endl;}
    cin.get();
    return 0;
  }

