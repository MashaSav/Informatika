#include <iostream>
#include <cmath>
 using namespace std;
int main(){
    int *array, n, i;
    
    cout << "Enter size of array: ";
    cin >> n;
    array = new int[n];
    
    for(i = 0; i < n; i++){
        cout << i << ": ";
        cin >> array[i];
    }  
    int c, a = 0;
    cout << "Enter c: ";
    cin >> c;
    for(i = 0; i < n; i++)
        if(array[i] > c)
           a++;
    cout << "Elements > c: " << a;
int max = abs(array[0]);
a = 0;
for(i = 0; i < n; i++)
        if(abs(array[i]) > max){
                a = i;
                max = abs(array[i]);
        }
int p = 1;
for(i = a+1; i < n; i++)
        p *= array[i];
if(a == n-1)
    p = 0;
cout << "\nThe product of array elements located after the maximum module of the element: " << p;
    for(i = 0; i < n; i++)
        if(array[i] != 0 && abs(array[i] - 1) > abs(array[i])){
            int t = array[i];
            for(int j = 0; j < i; j++)
                array[i - j] = array[i - j - 1];
            array[0] = t;
        }
 
    cout << "\nReorganised:\n";
    for(i = 0; i < n; i++)
        std::cout << array[i] << ' ';
    cout << endl;
 
    delete []array;
    system("pause");
}
