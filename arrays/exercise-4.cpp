// Loop through the elements in the cars array.
#include <iostream>

using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }

    return 0;
}