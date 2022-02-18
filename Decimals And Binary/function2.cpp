 #include<iostream>
using namespace std;

   // 1 --> Even
   // 0 --> odd
bool isEven(int a){
    if (a&1)
    {   // Odd
        return 0;
    }
    else{//Even
        return 1;
    }
    
}
int main(){
    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Nuber is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
    
    return 0;
    
}