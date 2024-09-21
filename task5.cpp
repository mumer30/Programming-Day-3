#include <iostream>
using namespace std;
main(){
string name;
float kg;
cout <<"Enter the name of Person:  ";
cin >>name;
cout <<"Enter the target weight loss in kg:  ";
cin >>kg;
cout <<name <<" will need "<<float(kg*15)<<" days to lose "<<kg<<" kg of weight by doctor's suggestions";
}
