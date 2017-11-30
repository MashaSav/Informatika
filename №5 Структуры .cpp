#include <tchar.h> 
#include <sdkddkver.h> 
#include <iostream>
#include "string.h"
using namespace std;
    const int N=256;
    struct Znak
    {
      char
       FirstName[N],
       LastName[N],
       Zodiak[N];
      int DR[3];
    }  A[8];
    void init(Znak *A,int size)
     {
      char S[N];
 
       for (int i=0;i<size;i++)
    {
        cout<<"FirstName: "; cin>>S;
        strcpy(A[i].FirstName,S);
     cout<<"LastName: "; cin>>S;
     strcpy(A[i].LastName,S);
     cout<<"Zodiak: "; cin>>S;
     strcpy(A[i].Zodiak,S);
     cout<<"Date: "<<'\n';
      for (int j=0;j<3;j++)
          cin>>A[i].DR[j];
 
      cout<<'\n';
    }
     }
    void Show(Znak *A,int N)
    {
      for (int i=0;i<N;i++)
      {
          cout<<A[i].FirstName<<'\t';
          cout<<A[i].LastName<<'\t';
          cout<<A[i].Zodiak<<'\t';
          for (int j=0;j<3;j++) cout<<A[i].DR[j]<<".";
          cout<<"\n";
      }
    }
int main()
{
  const int N=8;
  Znak obj1[N];
      init(obj1,N);
      Show(obj1,N);
 system("PAUSE");
 return 0;
}
