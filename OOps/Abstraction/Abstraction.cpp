#include<iostream>
using namespace std;

class Abstraction{
    private:
    int a;
    int b;

    public:

    void set(int x, int y){
        this->a = x;
        this->b = y;
    }

    void display(){
        cout << "Value at a is --> " << a << endl;
        
        cout << "Value at b is --> " << b << endl;

    }


};



int main(){
    Abstraction Kartik;
    Kartik.set(30, 50);
    Kartik.display();

    return 0;
}