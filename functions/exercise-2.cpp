// Insert the missing part to call myFunction two times.
#include <iostream>

using namespace std;

void myFunction() {
    cout << "I just got executed!";
}

int main() {
    myFunction();
    myFunction();

    return 0;
}