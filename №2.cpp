/*������� 15
� ���������� �������, ��������� �� � ������������ ���������, ���������:
1) ���������� ��������� �������, ������� �;
2) ������������ ��������� �������, ������������� ����� ������������� ��
������ ��������.
������������� ������ ����� �������, ����� ������� ������������� ��� �������������
��������, � ����� � ��� ������������� (��������, ������ �, �������
��������������).*/
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main()
{
	int n,l;
	float c,k=0,max=0,nmax=0;
	cout<<" Enter the number of elements: "<<endl;
	cin>>n;
	float a[n];
	cout<<" Enter C: "<<endl; 
	cin>>c;
	cout<<" Enter the elements: "<<endl;
	for (int i=0;i<n;i++){
		cin>>a[i];
			if (a[i]>c){
			k++;
		}
		if (abs(a[i])>max){
			max=a[i];
			nmax=i;
    	}
	}
	cout<<" The quantity: "<<k<<endl;
    float p=1;
    for (int i=nmax+1;i<n;i++){
		p*=a[i];	
    }
	cout<<" The product: "<<p<<endl;
	cout<< " The elements: "<<endl;
	for (int i=0;i<n;i++){
		if (a[i]<0){
			cout<<" "<<a[i];
		}
	}
	for (int i=0;i<n;i++){
		if (a[i]>=0){
			cout<<" "<<a[i];
		}
	}
	return 0;
}
	
	
	
