#include<iostream>
using namespace std;
// Parent class
class Animal {
    public:
        void eat() {
            cout << "eating" << endl;
        }
};
// Child class
class Dog: public Animal {
    public: void bark() {
        cout << "barking";
    }
};
int main() {
    // Creating an object of the child class
    Dog obj;
    // calling methods
    obj.eat();
    obj.bark();
}