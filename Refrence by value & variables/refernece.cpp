    #include<iostream>
    using namespace std;

    void updateVar(int n, double m)
    {
        // printing in update function
        n++;
        cout <<"Inside the updaet fuction the value of int is --> " << n << endl;

        // printing in update function Double Value
        m++;
        cout <<"Inside the updaet fuction the value of double is --> " << m << endl;
    }

    int main()
    {
        int i = 10;

        int &j = i;

        j++;

        // throw reffernce we get the value incremented in simple int type
        cout << "Before update function int valur is  --> " << j << endl;

        double k = 90.65;

        double &m = k;

        // Refernce throw double variable
        m++;
        cout << "Before update function double value is " <<  m << endl;

        // 
        // int& t = arr;

        // cout <<  t << endl;


        updateVar(i, k);

        // Printing after returnning from update Function int value

        cout <<  "After Update function int --> "<< i << endl;

        // Printing after returning from update function doublr value

        cout << "After update function doublr --> " << k << endl;
        return 0;
    }