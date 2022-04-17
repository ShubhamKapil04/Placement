#include<iostream>
using namespace std;

class Student{

    public:
   
    /* We can create our Own constructor Mannualt*/

    Student()
    {
        cout << "Constructor Called" << endl;
        cout << endl;
    }



};

int main()
{
    cout << endl;
    cout << "HII" <<"    "<< "Kartik" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    //When ever we create a object a constructor created default 
    //Object Created Statically
    Student kartik;

    //Object created Dynamiclly
    Student *shubham = new Student;
    //when we are creating a Student Kartik then it invoke the constructor
    //which is called default Constructor

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Hello" << "     " << "Shubham" << endl;

}