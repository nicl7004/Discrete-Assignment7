#include <iostream>
#include <math.h>
using namespace std;

double function1(double n) {
  if (n==0)
    return sqrt(2);
  else
      {
      double part = pow((0.5*function1(n-1)),2);
      return sqrt(part + (pow((1 - sqrt(1-part)),2)));}
    }

int main() {


cout << function1(1)<< "  1"<<endl;
cout << function1(2)<<"   2"<<endl;
cout << function1(3)<<"   3"<<endl;
cout << function1(4)<<"   4"<<endl;
cout << function1(5)<<"   5"<<endl;
cout << function1(6)<<"   6"<<endl;
cout << function1(7)<<"   7"<<endl;
cout << function1(8)<<"   8"<<endl;

cout << function1(-2)<<"    -2"<<endl;
// for(int i=0; i<6; i++) {

//   cout << function1(i)<<endl;
// }

return 0;
}
