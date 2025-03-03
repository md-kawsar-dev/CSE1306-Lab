#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
        float marks[5], total_Marks = 0;

    public:
        Student(string n, int r, float mark[]) {
            name = n;
            rollNumber = r;
            for (int i = 0; i < 5; i++) {
                marks[i] = mark[i];  // Correct way to copy array values
            }
            totalMarks();  // Automatically calculate total marks upon object creation
        }

        void totalMarks() {
            total_Marks = 0; // Ensure it starts at 0 to prevent accumulation
            for (int i = 0; i < 5; i++) {
                total_Marks += marks[i];
            }
        }

        void studentInfo() {
            cout << "Name : " << name << endl;
            cout << "Roll : " << rollNumber << endl;
            cout << "Total Marks : " << total_Marks << endl;
        }

        float calculatePercentage() {
            return ((total_Marks / 500) * 100);
        }
};

int main() {
    string name;
    int roll;
    float marks[5];

    cout << "Enter Name : ";
    getline(cin, name);
    cout << "Enter Roll Number : ";
    cin >> roll;
    cout << "Enter Marks of 5 Subjects : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " : ";
        cin >> marks[i];

    }

    Student s(name, roll, marks);
    cout<<"Student Details : "<<endl;
    cout << "-----------------" << endl;
    s.studentInfo();
    cout << "Percentage : " << s.calculatePercentage() << "%" << endl;

    return 0;
}
