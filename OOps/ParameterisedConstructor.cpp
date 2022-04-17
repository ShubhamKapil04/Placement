#include<iostream>
using namespace std;

class Student{
public:
int health;
char level;

//Creating Parameterised Constructor
Student(int health)
{
    cout << "Address of This is--> " << this << endl;
    this->health = health;
}

Student(int health, char level)
{
    this->level = level;
    this->health = health;
}

char getLevel()
{
    return level;
}

int getHealth()
{
    return health;
}

void setLevel(char l)
{
    level = l;
}

void setHealth(int h)
{
    health = h;
}

};


int main()
{
    //Statically created Object
    Student Kartik(10);
    cout <<"Address of kartik" << &Kartik << endl;
    Kartik.setHealth(100);
    cout << "Health of kartik is --> " << Kartik.getHealth() << endl;

    //Dynamiclly Created Object
    //So on Parameterised Constructor we have to pass the value with the object
    Student *s1 = new Student(10, 'Z');


    cout << "Health of Shubham is --> " << s1->getHealth() <<endl;
    
    cout << "Level of Shubham is --> " << s1->getLevel() <<endl;

}