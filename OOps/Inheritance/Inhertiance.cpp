#include<iostream>
using namespace std;


// Inheritances Concept
class Human{
    public:

    int age;
    char name;
    float weight;

    public: 
    int getAge(){
        return this->age;
    }

    float getWeight(){
        return this->weight;

    }

    void setAge(int a){
        this->age = a;
    }

    void setWeight(float weight){
        this->weight = weight;
    }
    

};

class Men: public Human{
    public:
    string color;

    void sleep(){
        cout << "Male is Sleeping" << endl;
    }

};


int main()
{
    Men Kartik;
    cout << Kartik.age << endl;
    cout << Kartik.weight << endl;
    cout << Kartik.name << endl;

    cout << Kartik.color << endl;

    Kartik.sleep();
    
    Kartik.setWeight(68.9);
    cout << Kartik.getWeight() << endl;
    Kartik.setAge(21);
    cout << Kartik.getAge() << endl;


    return 0;

}