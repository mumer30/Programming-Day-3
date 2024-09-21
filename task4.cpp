#include <iostream>
using namespace std;
main(){
int i,p;
float per;
cout <<"Enter Imposter Count :  ";
cin >>i;
cout <<"Enter Player Count :  ";
cin >>p;
per=float(p)/float(i);
cout <<per;
cout <<"Change of being an imposter : " << int(100/per)<<"%";
}
