#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const int n = 3;
    int matr[n][n];
    int temp[n];
    int i = 0, j = 0, k = 0;
    cout<<"Enter the matrix:"<<endl;
    for(i ^= i; i < n; ++i)
        for(j ^= j; j < n; ++j)
            cin>>matr[i][j];
    for(j ^= j; j < n; ++j)
        for(i = 0; i < n; ++i)
            if(matr[i][j] == 0)
                goto OUT;
    OUT:
   cout<<"The column number is "<<j;
    {
        temp[j] = 0;
        for(i ^= i; i < n; ++i)
            if(matr[i][j] & 1 && matr[i][j] < 0)
                temp[j] += -matr[i][j];
    }
    for(j ^= j; j < n - 1; ++j)
        for(k ^= k; k < n - j - 1; ++k)
            if(temp[j] > temp[j + 1])
            {
               temp[j] ^= temp[j + 1] ^= temp[j] ^= temp[j + 1];
               for(i ^= i; i < n; ++i)
                   matr[i][j] ^= matr[i][j + 1] ^= matr[i][j] ^= matr[i][j + 1];
            }
 
   cout<<"\nMatrix:"<<endl;
    for(i ^= i; i < n; ++i, std::cout<<std::endl)
        for(j ^= j; j < n; ++j)
            cout<<matr[i][j]<<' ';
 
    system("pause");
    return 0;
}
