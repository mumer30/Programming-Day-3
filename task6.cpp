#include <iostream>
using namespace std;
main(){
int size,cost,area;
cout <<"Enter the size of fertilizer in pound:  ";
cin >> size ;
cout <<"Enter the cost of bag:  $";
cin >> cost ;
cout <<"Enter the area coversd by the bag:  ";
cin >> area ;

cout <<"Cost of fertilizer per pound:  $"<<cost/size<< endl;
cout <<"Cost of fertilizer per square:  $"<<cost/area;
}
