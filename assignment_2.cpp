// student result management system
#include <iostream>
using namespace std;

// declaration — arrays to store data for 5 students
string student_name[5];
int marks_course_1[5];
int marks_course_2[5];
int marks_course_3[5];
int total[5];
int average[5];

//void function
void pass_or_fail(int index)
{
    if (average[index] >= 50)
    {
        cout << "You have passed" << endl;
    }
    else {
        cout << "you have failed" << endl;
    }
}

// main function
int main(){
    // for loop for 5 students
    for (int i = 1; i <= 5; i++){
        cout << "student number" << i << endl;

        //inputs
        cout << "Enter student's name:";
        cin >> student_name[i-1];
        cout << "Enter marks for first course out of 100:";
        cin >> marks_course_1[i-1];
        cout << "Enter marks for second course out of 100:";
        cin >> marks_course_2[i-1];
        cout << "Enter marks for third course out of 100:";
        cin >> marks_course_3[i-1];
        cout << "---------------------------------------------------" << endl;

        //operations total and average
        total[i-1] = marks_course_1[i-1] + marks_course_2[i-1] + marks_course_3[i-1];
        average[i-1] = total[i-1] / 3;

        //printing results
        cout << "Student: " << student_name[i-1] << endl;
        cout << "total: " << total[i-1] << endl;
        cout << "average: " << average[i-1] << endl;

        // void function calling
        pass_or_fail(i-1);
        cout << "-------------------------------------------------" << endl;
    }
    return 0;
}