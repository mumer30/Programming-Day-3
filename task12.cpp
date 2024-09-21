#include <iostream>
using namespace std;
main(){
int num,width,height,area,wall;
cout <<"Number of square meter you can print : ";
cin >>num;
cout <<"Width of wall (in meters): ";
cin >>width;
cout <<"Height of wall (in meters): ";
cin >>height;
area=width*height;
wall=num/area;
cout <<"Number of walls you can print: "<<wall;
}
