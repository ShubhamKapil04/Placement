#include<iostream>
using namespace std;

class Teacher{
    private:
    string name;
    int age;
    char level;

    public:
    int getAge(){
        return this->age;
    }


};

int main()
{
    Teacher Kartik;

    cout << "Working" << endl;



    return 0;
}