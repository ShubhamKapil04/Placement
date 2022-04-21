#include<iostream>
using namespace std;

//Creating class
class Student{
    
    int health;
    float marks;
    char name;

   

    

    public:
    int getHealth()
    {
       return health;
    }

    float getMarks()
    {
        return marks;
    }

    char getName()
    {
        return name;
    }
    
    
    void setHealth( int h )
    {
      health = h;
    }

    void setMarks(float m)
    {
        marks = m;
    }

    void setName(char n)
    {
        name = n;
    }
    
    
};


int main()
{
    //Static Alocation
    Student s1;

    //Dynamically Allocation
    Student *s2 = new Student;

    s1.setHealth(100);
    s1.setMarks(90.24);
    s1.setName('K');
   

    // Static prints
    cout << s1.getHealth() << endl;
    cout << s1.getMarks() << endl;
    cout << s1.getName() << endl;

    cout << endl;
    cout << endl;

    //With the help of -> (this) we can use setter & getter in the dynmaic memory Allocation
    s2->setHealth(200);
    s2->setMarks(78.54);
    s2->setName('S');

    cout << "Health is --> " << s2->getHealth() << endl;
    cout << "Marks is --> " << s2->getMarks() << endl;
    cout << "Name is --> " << s2->getName() << endl;
   
}