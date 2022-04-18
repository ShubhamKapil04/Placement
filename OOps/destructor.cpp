#include<iostream>
using namespace std;
class student{

    private:
    int rollNo;
    public:
    char rank;
    //Static Keyword
    static int School;

    //Creating Copy Constructor
    student(student& harsh){
        cout <<"Copy Constructor called " << endl;
        this->rollNo = harsh.rollNo;
        this->rank = harsh.rank;
    }

    student(int rollNo, char rank){
        cout << "Simple Constructor  Called " << endl;
        this->rollNo = rollNo;
        this->rank = rank;
    }

    int getRollno()
    {
        return rollNo;
    }
    char getRanks()
    {
        return rank;
    }
    void setRollno(int r)
    {
        rollNo = r;
    }
    void setRanks(char c)
    {
        rank = c;
    }

    void print()
    {
        cout <<this->rollNo << endl;
        cout <<this->rank   << endl;
    }

    //Destructor Called
    ~student(){
        cout << "Destructor is called" << endl;
    }

};

int student::School =  11;

int main()
{
    //We can user parameterised contructor
    //student kartik;
    cout << student::School <<endl;
    student kartik(10,'C');
   
    // kartik.setRollno (2);
    // kartik.setRanks ('A');
    kartik.print();

    // cout << "Roll number of kartik is " << kartik.getRollno() << endl;
    // cout << "Rank of kartik is " << kartik.getRanks() << endl;

    student Shubham(kartik);
    Shubham.print();

    student *Harsh = new student(11, 'A');
    //This Line tell us
    // Shubham.rank = kartik.rank;

    // cout << "Roll number of Shubham is " <<  Shubham.getRollno() << endl;
    // cout << "Rank of  Shubham is " <<  Shubham.getRanks() << endl;

}