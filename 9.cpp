#include <iostream> 

using namespace std; 

class AB { 
protected: 
double x, y; 
public: 
void set(int x, int y) { 
this->x = x; 
this->y = y; 
} 

virtual void getXY() = 0; 
}; 

class A : public AB { 
public: 
void getXY() { 
cout<<x-y<<endl; 
} 
}; 

class B : public AB { 
public: 
void getXY() { 
cout<<x+y<<endl; 
} 
}; 

int main() { 
A a1; 
B b1; 

a1.set(9, 4); 
b1.set(3, 7); 

a1.getXY(); 
b1.getXY(); 
return 0; 
}
