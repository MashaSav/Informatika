#include <iostream> 

using namespace std; 

class Abc {
	private:
	int a;
	public:
	Abc(int a){
	this->a = a;
	}
    
    Abc operator - (int a){
	return Abc(a * -1);
    }
    
    Abc operator ++ (int a){
	return Abc(this->a++);
    }
    
    Abc operator * (int a){
	return Abc(a * 5);
    }
    
    int getA() { 
    return a; 
    } 
};
int main()
{
Abc S(8);
S - 1; 
S ++; 
S * 1;
cout<<S.getA();
return 0; 
}

