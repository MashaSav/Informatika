#include <iostream>
using namespace std;

int main() { 
	int c;
	double f;
	cout << "Please enter a Celsius value: ";
	cin >> c;
	f = 1.8*c + 32.0;
	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit" << endl;
    return 0; 
}
