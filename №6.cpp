/*¬ариант 15
— помощью текстового редактора создать файл, содержащий текст, длина которого
не превышает 700 символов (длина строки текста не должна превышать
70 символов).
»м€ файла должно иметь расширение DAT.
Ќаписать программу, котора€:
Х выводит текст на экран диспле€;
Х по нажатию произвольной клавиши поочередно выдел€ет в тексте заданные
слова, которые нужно помен€ть местами (заданные слова вводить с клавиатуры);
Х выводит текст на экран диспле€ еще раз, мен€€ в нем местами заданные слова
и удал€€ лишние пробелы.*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
 
void f1(int **a, int m, int l,int s = -1)
    {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) 
        	if (a[i][j]==0)
        	s=j;	
	if(s!=-1)
	break;		
    }
    if(s!=-1)
    cout<<"Column Number: "<<s+1<<endl;
    else
    cout<<"No such columns"<<endl;
    }
    
void f2(int **a,int m, int l, int max=0, int sum=0, int t=0)
    {
    for (int j = 0; j < l; j++){
    	max+=a[0][j];
	}
   for (int i = 1; i <= m; i++) {
    	sum=0;
        for (int j = 1; j <= l; j++) {
        if (a[i][j]<0 && a[i][j]%2==0){
	    	sum+=a[i][j];	
		}
		if (sum>=max){
			max=sum;
			for (int i = 1; i <= m; i++){
				for (int j = 1; j <= l; j++) {
				t=a[i][j];
				a[i][j]=a[i-1][j-1];
				a[i-1][j-1]=t;	
			}
		}
	}
}
}
	for (int i = 0; i < m; i++) {
		cout<<"\n";
        for (int j = 0; j < l; j++) {
        	cout<<a[i][j]<<"  ";
        }
	} 
}
    
int main()
{
	int n,x,y,t,max;
	cout<<" Enter the number of rows and columns:"<<endl; 
	cin>>x;
	cin>>y;
	int **a;
	a = new int * [x];
	for (int i=0; i<x; i++)
	a[i] = new int [y];	
	cout<<" Enter the elements:"<<endl;
	for (int i = 0; i < x; i++) {
		cout<<"\n";
        for (int j = 0; j < y; j++) { 
		cin>>a[i][j];
        }
    }
    
    f1(a,x,y);
    
    cout << endl << endl;
    
    f2(a,x,y);
    
    cout << endl;
	for (int i=0; i<n; i++)
    delete a [i]; 
    delete [] a;
    system("pause");
    return 0;
}
