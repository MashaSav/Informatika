#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;      
int main()
{
    float x,x1,x2,a,b,c,dx,d,f,dX,g;
    cout<<"  a="; cin>>a;
    cout<<"  b="; cin>>b;
    cout<<"  c="; cin>>c;
    cout<<"  x1="; cin>>x1;
    cout<<"  x2="; cin>>x2;
    cout<<"  dx="; cin>>dx;
    cout<<"  X   |   Y"<<endl;
    { int ac=(int)a;
    int bc=(int)b;
    int cc=(int)c; 
    if((x<0)&&(b!=0))if(!(ac|bc|cc)!=0)  cout<<(f=(-a)*x*x+b)<<endl;
    else for(x=x1;x<=x2;x+=dx) cout<<"  "<<x<<"   |   "<<int(f=(-a)*x*x+b)<<endl;
    else if((x>0)&&(b=0))if(!(ac|bc|cc)!=0) cout<<(f=(x/(x-c))+5.5)<<endl;
    else for(x=x1;x<=x2;x+=dx) cout<<"  "<<x<<"   |   "<<int(f=(x/(x-c))+5.5)<<endl;  
    else if(!(ac|bc|cc)!=0) cout<<(f=x/(-c))<<endl;
	else for(x=x1;x<=x2;x+=dx) cout<<"  "<<x<<"   |   "<<int((f=x/(-c)))<<endl; }
    getch();
    return 0;
}

