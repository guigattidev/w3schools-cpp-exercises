// Complete the switch statement, and add the correct keyword at the end to specify some 
// code to run if there is no case match in the switch statement.
#include <iostream>

using namespace std;

int main() {
    int day = 4;
    switch (day) {
        case 1:
            cout << "Saturday";
            break;
        case 2:
            cout << "Sunday";
            break;
        default:
            cout << "Weekend";
    }

    return 0;
}