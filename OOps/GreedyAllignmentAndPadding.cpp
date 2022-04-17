/*
  64 bits system---> 8 bits read in one time
  32 bits system ---> 4 bits read in one time
*/
#include<iostream>
using namespace std;

class Hero{
  // int level;
  // char name[20];
  // double strengh;
  // float strenghLevel;
  // char name2[10];

  double strengh;
  float strenghtlevel;
  int level;
  short int id;

};

int main()
{
   Hero Kartik;

   cout << "Size of Kartik is --> " << sizeof(Kartik);
}

