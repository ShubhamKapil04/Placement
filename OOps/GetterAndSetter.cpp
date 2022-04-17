#include<iostream>
using namespace std;

class Student{
    private:
    int rollno;
    char name[20];
    float marks;
    char grade;
    
    public:
    int getRollno()
    {
        return rollno;
    }

    int getMarkes()
    {
        return marks;
    }

    char getGrade()
    {
        return grade;
    }

    void setRollno(int Roll)
    {
        rollno = Roll;
    }

    void setMarks(float m)
    {
        marks = m;
    }

    void setGrade(char g)
    {
        grade = g;
    }

    // int setGrade()
    // {
    //     if(marks>90)
    //     {
    //         grade ='A';
    //     }
    //     else if(marks>80)
    //     {
    //         grade ='B';
    //     }
    //     else if(marks>70)
    //     {
    //         grade ='C';
    //     }
    //     else if(marks>60)
    //     {
    //         grade ='D';
    //     }
    //     else{
    //         grade ='E';
    //     }
    // }

};

int main()
{
    Student s1;
    Student s2;
    // Uisng getter to print the student details

    cout << "Before seting the details "<< endl;
    cout << " Student Rollno " << s1.getRollno() << endl;
    cout << " Student Marks " << s1.getMarkes() << endl;
    cout << " Student Grade " << s1.getGrade() << endl;
    cout << endl;
    cout << endl;

    //Using Setter to set health

     cout << "After seting the details "<< endl;

    s1.setRollno(20);
    s1.setMarks(88.9);
    s1.setGrade('B');


    cout << " Student Rollno " << s1.getRollno() << endl;
    cout << " Student Marks " << s1.getMarkes() << endl;
    cout << " Student Grade " << s1.getGrade() << endl;

}