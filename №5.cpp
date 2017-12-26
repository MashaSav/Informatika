/*Указатели
Выполнить задания из разделов «Двумерные массивы» и «Структуры», используя
динамическое выделение памяти.*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
 
int main()
{
	int n,s=-1,x,y,t,sum,max;
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
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) 
        	if (a[i][j]==0)
        	s=j;	
	if(s!=-1)
	break;		
    }
    if(s!=-1)
    cout<<"Column Number: "<<s+1<<endl;
    else
    cout<<"No such columns"<<endl;
    for (int j = 0; j < y; j++){
    	max+=a[0][j];
	}
   for (int i = 1; i <= x; i++) {
    	sum=0;
        for (int j = 1; j <= y; j++) {
        if (a[i][j]<0 && a[i][j]%2==0){
	    	sum+=a[i][j];	
		}
		if (sum>=max){
			max=sum;
			for (int i = 1; i <= x; i++){
				for (int j = 1; j <= y; j++) {
				t=a[i][j];
				a[i][j]=a[i-1][j-1];
				a[i-1][j-1]=t;	
			}
		}
	}
}
}
	for (int i = 0; i < x; i++) {
		cout<<"\n";
        for (int j = 0; j < y; j++) {
        	cout<<a[i][j]<<"  ";
        }
	}   
	for (int i=0; i<n; i++)
    delete a [i]; 
    delete [] a;
    return 0;
}
