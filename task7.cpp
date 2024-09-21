#include <iostream>
using namespace std;
main(){
string name;
int child_price,adult_price,child_sale,adult_sale,per,total;
cout <<"Enter the movie name:  ";
cin >>name;
cout <<"Enter the adult ticket price :  $";
cin >>adult_price;
cout <<"Enter the child ticket price :  $";
cin >>child_price;
cout <<"Enter the number of adult ticket sold :  $";
cin >>adult_sale;
cout <<"Enter the number of child ticket sold :  $";
cin >>child_sale;
cout <<"Enter the percentage of the amount to be donated to charity : ";
cin >>per;
total=(child_price*child_sale)+(adult_price*adult_sale);
cout <<"\nMovie: "<<name <<endl;
cout <<"Total amount generated from ticket sale: "<<total<<endl;
cout <<"Donation to charity ("<<per<<"%) : "<< total/per<<endl;
cout <<"Remaining amount after donation: "<<total-( total/per);
}
