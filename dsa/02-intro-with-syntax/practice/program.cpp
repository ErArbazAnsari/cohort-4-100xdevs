#include <iostream>
using namespace std;

int main()
{
    // printing on screen
    cout << "hello, arbaz";
    cout << "\nnew line";
    cout << endl
         << "another line";

    // variables and basic data types
    int age = 21;
    int newage = 21.56; // here it will ignore .56 because of int
    float maxPrice = 99.999;
    char myGroup = 'A';
    string myname = "arbaz ansari";

    cout << "my age is: " << age << endl;
    cout << "new age: " << newage << endl;
    cout << "price is: " << maxPrice << endl;
    cout << "mygroup is: " << myGroup << endl;
    cout << "my name is: " << myname << endl;
}