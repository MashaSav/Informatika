#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
#pragma hdrstop
#pragma argsused
using namespace std;

char *rus(const char *text);
int main(int argc, char* argv[])
{
int i,n,imax=0,count=0;
float pro=1,max=0,c; 
 cout<<rus("Введите размерность n=");cin>>n;
 cout<<rus("Введите число C=");cin>>c; 
 cout<<rus("\nВведите элементы массива:")<<endl<<endl;
float *p=new float[n]; 
for(i=0;i<n;i++)cin>>p[i]; 
for(i=0;i<n;i++) 
if(p[i]>c) 
 {
 count++; 
 }
 cout<<rus("\nКоличество элементов больших C: ")<<count<<endl;
 max=p[0]; 
for(i=0;i<n;i++) 
if(fabs(p[i])>fabs(max)) 
 {
 max=p[i];
 imax=i;
 }
 cout<<rus("\nМаксимальный по модулю элемент: ")<<max<<endl;
 cout<<rus("Позиция максимального по модулю элемента: ")<<imax+1<<endl;
for(i=imax+1;i<n;i++)pro*=p[i];
 cout<<rus("\nПроизведение элементов расположенных после максимального по модулю: ")<<pro<<endl;
 cout<<rus("\nПреобразованный массив:")<<endl<<endl;
for(i=0;i<n;i++) 
if(p[i]<0) 
 {
 cout<<p[i]<<' ';
 }
for(i=0;i<n;i++)
if(p[i]>=0) 
 {
 cout<<p[i]<<' '; 
 }
 getch();
return 0;
}
//---------------------------------------------------------------------------
char bufrus[256];
char *rus(const char *text)
 {
 CharToOem(text,bufrus);
 return bufrus;
 }
//---------------------------------------------------------------------------
