#include <iostream> 

using namespace std; 

const int a=9; 

static int b; 

class Loc { 
private: 
int c; 
public: 
Loc(int c) { 
this->c = c; 
} 

friend ostream &operator<<(ostream &stream, Loc &item) { 
return stream<<item.c; 
} 
}; 

void hi() { 
class Oc: public Loc { 
public: 
Oc(): Loc(b++) {} 
}; 

Oc array[a]; 
for (int i = 0; i < a; ++i) { 
cout<<array[i]<<endl; 
} 
} 

int main() { 
hi(); 
return 0; 
}
