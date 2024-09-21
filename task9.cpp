#include <iostream>
using namespace std;
main(){
int num,first_dig,sec_dig,third_dig,fourth_dig; 
cout <<"Enter a 4-digit number : ";
cin >> num;
first_dig=num%10;
num=num/10;
sec_dig=num%10;
num=num/10;
third_dig=num%10;
num=num/10;
fourth_dig=num;
cout <<"Sum of the indiviual digits: "<<first_dig + sec_dig + third_dig + fourth_dig;

}
