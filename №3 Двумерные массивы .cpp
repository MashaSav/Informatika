//---------------------------------------------------------------------------
#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<iomanip>
#pragma hdrstop
#pragma argsused

using namespace std;
//---------------------------------------------------------------------------
char *rus(const char *text);
int main(int argc, char* argv[])
 {
 void srand();
 int n,m,i,j,nmin,buf_a,num=-1; //����������
 long buf_sum; //����������
 cout<<rus("������� ����������� �������:")<<endl;
  cout<<rus("\n������� ���������� �����: n=");cin>>n;//���� n
 cout<<rus("������� ���������� ��������: m=");cin>>m; //���� m
 int **a=new int*[n]; //���������� ����������
 for(i=0;i<n;i++)a[i]=new int [m]; //������� a
 long *sum=new long[n]; //���������� ������� sum
//---------------------------------------------------------------------------
 cout<<rus("\n������� �������� �������:")<<endl<<endl;
 for(i=0;i<n;i++)
 {
 sum[i]=0;
 for(j=0;j<m;j++)
 {
 [i][j]=-10+rand(20);
 if(a[i][j]<0&&(a[i][j]%2)==0)
 {
 sum[i]+=a[i][j];
 }
 }
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 cout<<setw(5)<<a[i][j];
 cout<<" | "<<sum[i]<<endl;
 }
//---------------------------------------------------------------------------
 for(j=0;j<m;j++) //�����
 { //������ �������
 for(i=0;i<n;i++) //� �������
 if(a[i][j]==0) //��������� ���� �� ���� 0 �������
 num=j; //����� �������
 if(-1!=num)
 break;
 }
 if(-1==num)cout<<rus("\n�������� ���!")<<endl;
 else cout<<rus("\n����� ������� ������� ���������� ���� �� ���� 0 �������: ")<<(num+1);
//----------------------------------------------------------------------------
 for(i=0;i<n-1;i++)
 {
 nmin=i;
 for(j=i+1;j<n;j++)
 if(sum[j]>sum[nmin])
 nmin=j;
 buf_sum=sum[i];
 sum[i]=sum[nmin];
 sum[nmin]=buf_sum;
 for(j=0;j<m;j++)
 {
 buf_a=a[i][j];
 a[i][j]=a[nmin][j];
 a[nmin][j]=buf_a;
 }
  }
 cout<<rus("\n������������� �������:");
 cout<<endl<<endl;
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 cout<<setw(5)<<a[i][j];
 cout<<" | "<<sum[i]<<endl;
 }
 getch();
 return 0;
 }
//---------------------------------------------------------------------------
char bufrus[256];
char *rus(const char *text)
 {
 CharToOem(text, bufrus);
 return bufrus;
 }
//---------------------------------------------------------------------------
