 #include<iostream>
 using namespace std;

 bool Search(int arr[], int size, int Key){

     for (int i = 0; i < size; i++)
     {
         if ( arr[i] == Key)
         {
             return 1;
         }
     }
     
    return 0;
 }

 int main(){

     int arr[10] = { 10, 13, 14, 76, 56, -4, -67, 5, 0, 1};

     cout <<  "Enter the key : ";
     int key;
     cin >> key;

     bool found = Search( arr, 10, key);

     if (found)
     {
        cout << "Key is Present";
     }

     else {

         cout << " Key is Not-Present" <<endl;
     }
     return 0;

     

 }