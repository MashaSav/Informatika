#include <iostream>
using namespace std;

int main() {
    const int x = 12;
    int growth;
    cout << "Enter your growth in inches: ___\b\b\b";
    cin >> growth;
    cout << "Your growth: " << growth / x << " ft and " << growth % x << " inches" << endl;
    return 0;
}
