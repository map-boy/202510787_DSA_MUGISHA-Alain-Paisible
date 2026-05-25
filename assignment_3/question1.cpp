#include <iostream>
using namespace std;

// Function that swaps two numbers using pointers
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Before swap:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "-------------------------------------------------" << endl;

    // Passing the addresses of the numbers
    swapNumbers(&num1, &num2);

    cout << "After swap:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}