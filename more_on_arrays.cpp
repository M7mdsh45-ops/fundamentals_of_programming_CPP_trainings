#include <iostream>
#include <string>

using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << "The first car is: " << cars[0] << endl;

    cars[0] = "Tesla";
    cout << "The first car is now: " << cars[0] << "\n" << endl;

    cout << "Full list of cars:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ": " << cars[i] << endl;
    }

    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int n : numbers) {
        sum += n;
    }

    cout << "\nThe sum of the numbers is: " << sum << endl;

    return 0;
}
