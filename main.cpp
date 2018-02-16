

#include <iostream>
#include <string>

using namespace std;

int main(int c, char *args[]){

   cout << "Hello World!" << endl;

   cout << "Enter your name: ";

   string name;

   getline(cin, name);

   cout << "Welcome " << name << "!" << endl;


   return 0;

}



