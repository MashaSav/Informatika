#include<iostream>
#include<conio.h>
#pragma hdrstop
#pragma argsused

using namespace std;

int main(int argc, char* argv[])
{
	int ac,bc,cc,i=0;
	double a,b,c,x,x1,x2,dx,F;
	cout<<"Enter a=";cin>>a;
	cout<<"Enter b=";cin>>b;
	cout<<"Enter c=";cin>>c;
	cout<<"Enter x1=";cin>>x1;
	cout<<"Enter x2=";cin>>x2;
	cout<<"Enter dx=";cin>>dx;
	ac=a,bc=b,cc=c;
	cout<<"\n\nn X"<<' '<<"F"<<endl<<endl;
	for(x=x1;x<=x2;x+=dx)
	{
		if((x<0)&&(b!=0))F=-a*x*x+b;
		if((x>0)&&(b==0))F=(x/(x-c))+5.5;
		else F=x/(-c);
		if((~(ac|bc|cc))!=0)
		{
			cout<<++i<<"|"<<x<<"|"<<F<<endl;
		}
		else cout<<++i<<"|"<<x<<"|"<<int(F)<<endl;
	}
	getch();
	return 0;
}
