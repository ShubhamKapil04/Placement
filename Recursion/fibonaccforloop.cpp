#include <iostream>
using namespace std;

void numberFunction(int i) {

    // if(i==0)
    // {
    //     return 0;

    // }

    // if(i==1)
    // {
    //     return 1;
    // }


    cout << "The number is: " << i << endl;
   i++;
    if(i<10) {
    numberFunction(i);
  }
}

int main() {

int i = 0;
numberFunction(i);

return 0;
}

