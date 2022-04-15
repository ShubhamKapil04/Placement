#include<iostream>
using namespace std;
//Creating Class
class Student{

    //Using Public Modifier for using the class in through ot the program
    public:
    //Name of Student
    string name;

    //Id of student
    int id;

    //RollNumber of student

    int RollNo;

    void insert(string n, int i, int r)
    {
        name=n;
        id=i;
        RollNo=r;
    }

    void display()
    {
        cout << name << " " << id << " " << RollNo << endl;
    }




};

int main()
{
    Student s1;
    Student s2;
    //using insert keyword to insert the value
    s1.insert("Kartik", 201, 23);
    s2.insert("Harsh", 201, 24);

    s1.display();
    s2.display();
    
}