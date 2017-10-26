#include <iostream>
using namespace std;

int main() {
    float km, l;
    cout << "Enter the kilometers:";
    cin >> km;
    cout << "Enter the liters:";
    cin >> l;
    cout << "Consumption: " << km / l << " liters on kilometers";
    return 0;
}
