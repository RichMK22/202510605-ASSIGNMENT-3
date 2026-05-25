#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

void addStudent(Student students[], int& count);
void displayStudents(Student students[], int count);
int searchStudent(Student students[], int count, int id);
void updateStudent(Student students[], int count);
void deleteStudent(Student students[], int& count);

#endif