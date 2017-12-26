/*¬ариант 15
1. ќписать структуру с именем ZNAK, содержащую следующие нол€:
Х фамили€, им€;
Х знак «одиака;
Х день рождени€ (массив из трех чисел).
2. Ќаписать программу, выполн€ющую следующие действи€:
Х ввод с клавиатуры данных в массив, состо€щий из восьми элементов тина
ZNAK; записи должны быть упор€дочены по датам дней рождени€;
Х вывод на экран информации о человеке, чь€ фамили€ введена с клавиатуры;
Х если такого нет, выдать на дисплей соответствующее сообщение.*/
#include <iostream>
#include <iomanip>

using namespace std;
 
struct ZNAK
{
	char name;
	char znak;
	int dr[3];
};

int main()
{
	int i,b;
	char m;
	const int n=8;
	ZNAK a[n];
	for(i=0;i<n;i++){
		cout<<"Enter last name and first name: ";
		cin>>a[i].name;
		cout<<"Enter the zodiac sign: ";
		cin>>a[i].znak;
		cout<<"Enter date of birth";
		cin>>a[i].dr[0]>>a[i].dr[1]>>a[i].dr[2];
	}
	for(i=0;i<n;i++){
		if (a[i].dr > a[i+1].dr){
			b=a[i].dr;
			a[i].dr=a[i+1].dr;
			a[i+1].dr=b;
		}
	}
	cout<<"Orderly structure:"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i].name<<endl;
		cout<<a[i].znak<<endl;
		cout<<a[i].dr[0]>>".">>a[i].dr[1]>>"."a[i].dr[2];
	}
	cout<<"Display information on the screen about";
	cin>>m;
	for(i=0;i<n;i++){
	if (a[i].name==m){
	cout<<a[i].name<<" "<<a[i].znak<<" "<<a[i].dr[0]>>".">>a[i].dr[1]>>"."a[i].dr[2]<<endl,"\n";
    }
    else
    cout<<"No information"
    }
}
