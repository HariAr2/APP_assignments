/*
Write a complete students database with subroutines involves storing and managing student
information using appropriate data structures and providing various functionalities to
interact with the database and implement in C++ with subroutines:
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct RA2211003010023_students
{
    string RA2211003010023_name, RA2211003010023_address;
    int RA2211003010023_roll_no;
    double RA2211003010023_CGPA_or_Marks;
    char RA2211003010023_gender;
};

void addStudent(vector<RA2211003010023_students>& database){
    RA2211003010023_students newstudent;
    cout << "Enter student name: ";
    cin >> newstudent.RA2211003010023_name;
    cout << "Enter student Roll No: ";
    cin >> newstudent.RA2211003010023_roll_no;
    cout << "Enter student gender (M/F): ";
    cin >> newstudent.RA2211003010023_gender;
    cout << "Enter student Address: ";
    cin.ignore();
    getline(cin, newstudent.RA2211003010023_address);
    cout << "Enter student CGPA/Marks: ";
    cin >> newstudent.RA2211003010023_CGPA_or_Marks;

    database.push_back(newstudent);
    cout << "==================================================" << endl;
    cout << "Student added to the student database." << endl;
    cout << "==================================================" << endl;
    cout << "\n";
}

void displayStudents(const vector<RA2211003010023_students>& database)
{
    cout << "========== Students List ==========" << endl;
    for (const RA2211003010023_students& student_added : database) {
        cout << "Name: " << student_added.RA2211003010023_name << endl;
        cout << "Roll No: " << student_added.RA2211003010023_roll_no << endl;
        cout << "Gender: " << student_added.RA2211003010023_gender << endl;
        cout << "Address: " << student_added.RA2211003010023_address << endl;
        cout << "CGPA/Marks: " << student_added.RA2211003010023_CGPA_or_Marks << endl;
        cout << "----------------------------------" << endl;
    }
    cout << "==================================" << endl;
}

const RA2211003010023_students* findStudent(vector<RA2211003010023_students>& database, int rollNumber) {
    for (const RA2211003010023_students& student_find : database) {
        if (student_find.RA2211003010023_roll_no == rollNumber) {
            return &student_find;
        }
    }
    return nullptr;
}

void updateStudentInfo(RA2211003010023_students& student) {
    cout << "Which information would you like to update?" << endl;
    cout << "1. Name" << endl;
    cout << "2. Roll No" << endl;
    cout << "3. Gender" << endl;
    cout << "4. Address" << endl;
    cout << "5. CGPA/Marks" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter updated name: ";
            cin >> student.RA2211003010023_name;
            break;
        case 2:
            cout << "Enter updated roll number: ";
            cin >> student.RA2211003010023_roll_no;
            break;
        case 3:
            cout << "Enter updated gender (M/F): ";
            cin >> student.RA2211003010023_gender;
            break;
        case 4:
            cout << "Enter updated address: ";
            cin.ignore();
            getline(cin, student.RA2211003010023_address);
            break;
        case 5:
            cout << "Enter updated CGPA/Marks: ";
            cin >> student.RA2211003010023_CGPA_or_Marks;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    cout << "Information updated." << endl;
}

void deleteStudent(vector<RA2211003010023_students>& database, int rollNumber) {
    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->RA2211003010023_roll_no == rollNumber) {
            database.erase(it);
            cout << "Student deleted from the database." << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

int main()
{
    vector<RA2211003010023_students> studentsdatabase;
    while (true) {
        cout << "=======Menu=======" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Find Student" << endl;
        cout << "4. Update Student Info" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Quit" << endl;
        cout << "\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent(studentsdatabase);
                break;
            case 2:
                displayStudents(studentsdatabase);
                break;
            case 3: {
                int rollNumber;
                cout << "Enter roll number to find: ";
                cin >> rollNumber;
                const RA2211003010023_students* foundStudent = findStudent(studentsdatabase, rollNumber);
                if (foundStudent) {
                    cout << "==================================" << endl;
                    cout << "Student found:\n";
                    cout << "Name: " << foundStudent->RA2211003010023_name << endl;
                    cout << "Roll No: " << foundStudent->RA2211003010023_roll_no << endl;
                    cout << "Gender: " << foundStudent->RA2211003010023_gender << endl;
                    cout << "Address: " << foundStudent->RA2211003010023_address << endl;
                    cout << "CGPA/Marks: " << foundStudent->RA2211003010023_CGPA_or_Marks << endl;
                    cout << "==================================" << endl;
                } else {
                    cout << "Student not found." << endl;
                }
                break;
            }
            case 4: {
                int rollNumber;
                cout << "Enter roll number to update info: ";
                cin >> rollNumber;
                RA2211003010023_students* foundStudent = const_cast<RA2211003010023_students*>(findStudent(studentsdatabase, rollNumber));
                if (foundStudent) {
                    updateStudentInfo(*foundStudent);
                } else {
                    cout << "Student not found." << endl;
                }
                break;
            }
            case 5: {
                int rollNumber;
                cout << "Enter roll number to delete: ";
                cin >> rollNumber;
                deleteStudent(studentsdatabase, rollNumber);
                break;
            }
            case 6:
                cout << "Quitting...." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}