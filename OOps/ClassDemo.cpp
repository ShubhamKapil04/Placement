#include<iostream>
#include<string>
using namespace std;

class house{

private:
    // Member variable
    int length  = 0;
    int breadth = 0;

public:
    // Memeber Function
    void setData(int x, int y){
        length = x;
        breadth = y;
    }

    void area(){
        cout << "Area of the house " << length * breadth;
    }

};
int main(){ 

    house kartik;
    
    kartik.setData(5, 600);
    kartik.area();

    return 0;
}