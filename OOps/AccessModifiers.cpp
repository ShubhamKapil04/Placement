#include<iostream>
using namespace std;

//Creating class
class Car{
    //By Default Private Access Modifier Works
    //We won't initialize it
    public:
    int topSpeed;
    //Using Public Modifier
    string CarName;

    protected: 
    char CarBrand[100];

};

int main()
{
    //Creating Object of class
    // statical object allocation
    Car car1;
    car1.CarName = "Audi";
    car1.topSpeed = 100;

    cout<< " The name of car 1 is--> " << car1.CarName <<endl;
    cout<< " The topSpeed of car is --> " << car1.topSpeed <<endl;

    //Dynamicaly object allocation
    Car *car2 = new Car();
   // car2->CarName = "BMW";
   // car2->topSpeed = 200;

    //cout<< " The name of car 1 is--> " << car2.CarName <<endl;
   // cout<< " The topSpeed of car is --> " << car2.topSpeed <<endl;


    //This is How we create Dynamic Memory for object

}