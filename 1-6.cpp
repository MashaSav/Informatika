#include <iostream>

using namespace std;

class Horse {
private:
	
 string name, poroda;	
 int godrozhdeniya;
static int counter;

friend void setData(Horse &, string, string, int);

public:
Horse() {
name = "Nizami";
poroda = "Arabian";
godrozhdeniya = 2007;
counter++;
}

Horse(string name, string poroda, int godrozhdeniya) {
this->name = name;
this->poroda = poroda;
this->godrozhdeniya = godrozhdeniya;
counter++;

}

Horse(const Horse &H) {
name = H.name;
poroda = H.poroda;
godrozhdeniya = H.godrozhdeniya;
counter++;
}

~Horse() {
counter--;
}

void getInfo() {
cout <<"Name: "<<name<< "\nPoroda:"<<poroda<< "\nGod rozhdeniya: "<<godrozhdeniya<< endl<<endl;
}

void say() {
cout<<"Igogo"<<endl<<endl;
}

static int getCounter() {
return counter;
}

};

int Horse::counter = 0;

void setData(Horse &H, string a, string b, int c) {
H.name = a;
H.poroda = b;
H.godrozhdeniya = c;
}

int main() {
Horse firsthorse;
Horse secondhorse("Podbel", "russkaya rysistaya", 2005);
Horse firsthorse1(firsthorse);

setData(secondhorse, "Podbel", "russkaya rysistaya", 2005);
firsthorse.say();
firsthorse.getInfo();
secondhorse.getInfo();
firsthorse1.getInfo();
cout<<"Kolichestvo loshadey: "<<firsthorse1.getCounter()<<endl;
return 0;
}
