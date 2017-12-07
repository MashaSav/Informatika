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
 int n,m,i,j,nmin,buf_a,num=-1; //объ€вление
 long buf_sum; //переменных
 cout<<rus("¬ведите размерность массива:")<<endl;
  cout<<rus("\n¬ведите количество строк: n=");cin>>n;//ввод n
 cout<<rus("¬ведите количество столбцов: m=");cin>>m; //ввод m
 int **a=new int*[n]; //объ€вление двумерного
 for(i=0;i<n;i++)a[i]=new int [m]; //массива a
 long *sum=new long[n]; //объ€вление массива sum
//---------------------------------------------------------------------------
 cout<<rus("\n¬ведите элементы массива:")<<endl<<endl;
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
 for(j=0;j<m;j++) //поиск
 { //номера столбца
 for(i=0;i<n;i++) //в котором
 if(a[i][j]==0) //находитс€ хот€ бы один 0 элемент
 num=j; //номер столбца
 if(-1!=num)
 break;
 }
 if(-1==num)cout<<rus("\n—толбцов нет!")<<endl;
 else cout<<rus("\nЌомер первого столбца содержащий хот€ бы один 0 элемент: ")<<(num+1);
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
 cout<<rus("\n”пор€доченна€ матрица:");
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
