#include <iostream>
using namespace std;
main(){
float veg,fruit,total;
int T_veg,T_fruit;
cout <<"Enter vegitable price per kg (in coins) :  ";
cin >>veg;
cout <<"Enter fruit price per kg (in coins) :  ";
cin >>fruit;
cout <<"Enter total kg of vegitables :  ";
cin >>T_veg;
cout <<"Enter total kg of fruits:  ";
cin >>T_fruit;
total=(T_veg*veg/1.94)+(T_fruit*fruit/1.94);
cout <<"Total earnings in Rupees (Rps) :"<<total ;
}
