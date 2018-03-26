#include <iostream> 

using namespace std; 

class Horse { 
private: 
int speed; 
public: 
Horse(int s) : speed(s) {} 

void getSpeed() { 
cout<<speed<<endl; 
} 
}; 


class Arabian : virtual public Horse { 
private: 
int vysotavholke; 
public: 
Arabian(int s, int h) : Horse(s), Arabian(h) {} 

void getVysotavholke() { 
cout<<vysotavholke<<endl; 
} 
}; 


class Konkurhorse : virtual public Horse, virtual public Arabian { 
private: 
int vysotapryzhka; 
public: 
Konkurhorse(int s, int h, int p) : Horse(s), Arabian(s, h), Konkurhorse(p) {} 

void getVysotapryzhka() { 
cout<<vysotapryzhka<<endl; 
} 
}; 


int main() { 
Konkurhorse Nizami(70, 170, 180); 

Nizami.getSpeed();
Nizami.getVysotavholke();
Nizami.getVysotapryzhka();
return 0;
}
