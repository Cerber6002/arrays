#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int smallest = numbers[0];
    int smallestIdx = 0;

    for (int i = 1; i < n; ++i) {
        if (numbers[i] <= smallest) {
            smallest = numbers[i];
            smallestIdx = i;
        }
    }

    int temp = numbers[0];
    numbers[0] = numbers[smallestIdx];
    numbers[smallestIdx] = temp;

    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}