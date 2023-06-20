// Fill in the missing parts to print the sum of two numbers (which is put in by the user):
#include <iostream>

using namespace std;

int main() {
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;

    return 0;
}