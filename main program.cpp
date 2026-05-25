#include "student.h"
#include <iostream>

using namespace std;

int main() {
    Student students[100];
    int count = 0;
    int choice;

    do {
        cout << "\n1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) addStudent(students, count);
        else if(choice == 2) displayStudents(students, count);
        else if(choice == 3) {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            int index = searchStudent(students, count, id);
            if(index != -1)
                cout << "Found: " << students[index].name << endl;
            else
                cout << "Not found!\n";
        }
        else if(choice == 4) updateStudent(students, count);
        else if(choice == 5) deleteStudent(students, count);
        else if(choice == 6) cout << "Goodbye!\n";
        else cout << "Wrong choice!\n";

    } while(choice != 6);

    return 0;
}