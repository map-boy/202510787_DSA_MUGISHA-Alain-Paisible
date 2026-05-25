#include <iostream>
using namespace std;

int main() {
int chosen_number = 5;
int user_input;
int numbers_entered[5];
int count = 0; 


while (user_input != chosen_number) {


cout << "Enter a number: " << endl;
cin >> user_input;



numbers_entered[count] = user_input;
count++;


if (user_input > chosen_number) {
cout << "Too high" << endl;
} else if (user_input < chosen_number) {
cout << "Too low" << endl;
} else {
cout << "Correct " << endl;
}
}


cout << "\nYour numbers_entered were:" ;
for (int i = 0; i < count; i++) {
cout << "answer is " << (i + 1) << ": " << numbers_entered[i] << endl;
}

return 0;
}