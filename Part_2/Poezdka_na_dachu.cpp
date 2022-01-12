#include <iostream>

using namespace std;

int main()
{

double length, litr, price, count;

cout << "Vvedite rasstoyanie do dachi v kilometrah: ";
cin>> length;
cout << endl<<"Vvedite rashod benzina (litrov na 100km): ";
cin >> litr;
cout <<endl<< "Vvedite zenu benzina za litr: ";
cin >>price;

count = length/100*litr*price;

cout <<endl<<"Poezdka na dachu obojdetsa v: "<< count<< " rublej.";

return 0;
}
