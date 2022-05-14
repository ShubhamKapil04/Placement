#include<iostream>
#include<stack>

using  namespace std;

// class Stack{
// public:
//     string *arr;
//     int top;
//     int size;

//     //Properties
//     //Behaviour
//     Stack(int s){
//         this->size = s;
//         arr = new string[size];
//         top = -1;
//     }

//     void push(char a){
//         if(size - top > 1){
//             top++;
//             string ans =" ";
//             string arr = a;
//         }
//         else{
//             cout << "Stack is OverFlow" ;
//         }
//     }
//     void pop(){
//         if(top >= 0){
//             // cout << "The element is popped is--> "<< top << endl;
//             top--;
//         }
//         else{
//             cout << "Stack UnderFlow";
//         }
//     }

//     int peek(){
//         if(top >= 0){
//             return top;
//         }
//         else{
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };


int main()
{
    // Stack String(4);

    // String.push('L');
    // String.push('O');
    // String.push('V');
    // String.push('E');

    string str = "LOVE";
    cout << str.size() << endl;

    stack < char > s;

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = " ";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << ans << endl;

    return 0;



        
}