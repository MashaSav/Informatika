#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int x = 12;
    const float y = 0.0254;
    const float z = 2.2;
    int pounds;
    int foot;
    int inch;
    int r;
    cout << "Enter height in foot: _\b";
    cin >> foot;
    cout << "and inches: _\b";
    cin >> inch;
    cout << "Enter your weight in pounds:___\b\b\b";
    cin >> pounds;
    r = (foot * x + inch)*y;
    cout << "Body mass index: " << (pounds / z) /pow(r,2) << endl;
    return 0;
}
