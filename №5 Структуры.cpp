#include<iostream>
#include<conio.h>
#include<windows.h>
#pragma hdrstop
#pragma argsused

using namespace std;
char *rus(const char *text);
int main(int argc, char* argv[])
 {
 const int m=3,k=30; 
 struct Znak 
 {
 char fio[k]; 
 char znak[k]; 
 int bdate[m]; 
 };
 int i,j,n; 
 bool not_found,sort=1;
 char surname[k]; 
 cout<<rus(" ������� ���������� �������� ZNAK: ");
 cin>>n;
 cout<<endl;
 Znak temp;
 Znak *ZNAK=new Znak[n];
 for(i=0;i<n;i++)
 {
 cout<<' '<<(i+1)<<rus(".������� ������� � ���: ");
 cin.ignore();cin.getline(ZNAK[i].fio,k); 
 cout<<rus(" ������� ���� �������: ");cin>>ZNAK[i].znak; 
 for(j=0;j<m;j++)
 {
 cout<<rus(" ������� ���� ��������: ");cin>>ZNAK[i].bdate[j++];
 cout<<rus(" ������� ����� ��������: ");cin>>ZNAK[i].bdate[j++];
 cout<<rus(" ������� ��� ��������: "); cin>>ZNAK[i].bdate[j];
 }
 cout<<endl;
 }
 while(sort)
 { 
 sort=0; 
 for(i=0;i<n-1;i++) 
 {
 if(ZNAK[i].bdate[2]>ZNAK[i+1].bdate[2])
 { 
 temp=ZNAK[i];
 ZNAK[i]=ZNAK[i+1];
 ZNAK[i+1]=temp;
 sort=1;
 }
 if((ZNAK[i].bdate[2]==ZNAK[i+1].bdate[2])&&\
 (ZNAK[i].bdate[1]>ZNAK[i+1].bdate[1]))
 {
 temp=ZNAK[i];
 ZNAK[i]=ZNAK[i+1];
 ZNAK[i+1]=temp;
 sort=1;
 }
 if((ZNAK[i].bdate[2]==ZNAK[i+1].bdate[2])&&\
 (ZNAK[i].bdate[1]==ZNAK[i+1].bdate[1])&&\
 (ZNAK[i].bdate[0]>ZNAK[i+1].bdate[0]))
{
 temp=ZNAK[i];
 ZNAK[i]=ZNAK[i+1];
 ZNAK[i+1]=temp;
 sort=1;
 }
 }
 }
 cout<<rus(" ������ ������������� �� ����� ��������:\n\n");
 for(i=0;i<n;i++)
 { 
 cout<<rus(" ������� � ���: ")<<ZNAK[i].fio<<endl;
 cout<<rus(" ���� �������: ")<<ZNAK[i].znak<<endl;
 cout<<rus(" ���� ��������:");
 for(j=0;j<m;j++)
 {
 cout<<ZNAK[i].bdate[j]<<'.';
 }
 cout<<endl<<endl;
 }
 cout<<rus("\n ���������� � ��������, ��� ������� ������� � ����������:")<<endl;
while(true)
 {
 cout<<rus(" ������� ������� ��� ""\"end\" ��� ���������: ");cin>>surname;
 cout<<endl;
 if(strcmp(surname,"end")==0)break;
 not_found=true; 
 for(i=0;i<n;i++) 
 { 
 if(strstr(ZNAK[i].fio,surname)) 
 if(ZNAK[i].fio[strlen(surname)]==' '||ZNAK[i].fio[strlen(surname)]=='\0')
 {
 cout<<rus(" ������� � ���: ")<<ZNAK[i].fio<<endl;
 cout<<rus(" ���� �������: ")<<ZNAK[i].znak<<endl;
 cout<<rus(" ���� ��������:"); 
 for(j=0;j<m;j++) 
 { 
 cout<<ZNAK[i].bdate[j]<<'.';
 }
 not_found=false;
 cout<<endl<<endl;
 }
 } 
 if(not_found)cout<<rus(" ����� ����� ���!")<<endl<<endl;
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
