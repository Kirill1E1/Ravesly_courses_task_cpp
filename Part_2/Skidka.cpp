#include <iostream>

using namespace std;

int main()
{

double summ, result;

cout << "Vvedite summu pokupki: ";
cin>> summ;

if(summ > 1000 ){
cout<< endl<<"Skidka 5%";
summ = summ*0.95;
} else {
    if(summ > 500 )summ = summ*0.97;
    cout<< endl<<"Skidka 3%";
}

cout <<endl<<"Summa s uchetom skidki: "<< summ<< " rublej.";

return 0;
}
