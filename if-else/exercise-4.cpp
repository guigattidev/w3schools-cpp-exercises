// Print "1" if x is equal to y, print "2" if x is greater than y, otherwise print "3".
#include <iostream>

using namespace std;

int main() {
    int x = 50;
    int y = 50;
    if (x == y) {
        cout << "1";
    } else if (x > y) {
        cout << "2";
    } else {
        cout << "3";
    }  

    return 0;
}