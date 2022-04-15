#include<iostream>
using namespace std;

//Creating class
class Car{
    //By Default Private Access Modifier Works
    //We won't initialize it
    int topSpeed;

    //Using Public Modifier
    public:
    string CarName;

    protected: 
    char CarBrand[100];

};

int main()
{
    //Creating Object of class
    // statical object allocation
    Car.car1;

    //Dynamicaly object allocation
    Car *car2 = new Car();
    //This is How we create Dynamic Memory for object

}