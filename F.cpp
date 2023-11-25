#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int largestIdx = 0;
    
    for (int i = 1; i < n; ++i) {
        if (numbers[i] >= largest) {
            largest = numbers[i];
            largestIdx = i;
        }
    }

    int temp = numbers[largestIdx];
    numbers[largestIdx] = numbers[n - 1];
    numbers[n - 1] = temp;

    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}