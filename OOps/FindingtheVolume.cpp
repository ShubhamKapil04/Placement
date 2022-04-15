#include<iostream>
using namespace std;

class box{
public:

   double width;
   double hight;
   double depth;


};

int main()
{
    //creating object of class;
    box B1;

    B1.width = 23.9;
    B1.hight = 69.09;
    B1.depth = 43.86;

    double volume = B1.width * B1.hight * B1.depth;

    cout <<"volume of box is ---> "<< volume << endl;


    return 0;
}