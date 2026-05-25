#include "student.h"
#include <iostream>

void addStudent(Student students[], int& count) {
    cout << "Enter ID: ";
    cin >> students[count].id;
    cout << "Enter Name: ";
    cin >> students[count].name;
    cout << "Enter Age: ";
    cin >> students[count].age;
    cout << "Enter Course: ";
    cin >> students[count].course;
    count++;
    cout << "Student added!\n";
}

void displayStudents(Student students[], int count) {
    if(count == 0) {
        cout << "No students!\n";
        return;
    }
    cout << "ID\tName\tAge\tCourse\n";
    for(int i = 0; i < count; i++) {
        cout << students[i].id << "\t" << students[i].name << "\t" 
             << students[i].age << "\t" << students[i].course << endl;
    }
}

int searchStudent(Student students[], int count, int id) {
    for(int i = 0; i < count; i++) {
        if(students[i].id == id) return i;
    }
    return -1;
}

void updateStudent(Student students[], int count) {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;
    int index = searchStudent(students, count, id);
    if(index == -1) {
        cout << "Not found!\n";
        return;
    }
    cout << "Enter new Name: ";
    cin >> students[index].name;
    cout << "Enter new Age: ";
    cin >> students[index].age;
    cout << "Enter new Course: ";
    cin >> students[index].course;
    cout << "Updated!\n";
}

void deleteStudent(Student students[], int& count) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    int index = searchStudent(students, count, id);
    if(index == -1) {
        cout << "Not found!\n";
        return;
    }
    for(int i = index; i < count-1; i++) {
        students[i] = students[i+1];
    }
    count--;
    cout << "Deleted!\n";
}