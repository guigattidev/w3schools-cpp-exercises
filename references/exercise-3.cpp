// Create a pointer variable with the name ptr, that should point to a string variable named food:
#include <iostream>

using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    return 0;
}