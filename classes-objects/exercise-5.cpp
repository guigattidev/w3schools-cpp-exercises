// Create a function named myMethod with no return value. Then Use myObj to call myMethod inside main.
#include <iostream>

using namespace std;

class MyClass {
  public:
    void myMethod() {
        cout << "Hello World!";
    }
};

int main() {
    MyClass myObj; 
    myObj.myMethod();

    return 0;
}