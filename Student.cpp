//
// Created by fox on 2023/7/16.
//
#include "Student.h"
#include "Human.cpp"
#include <iostream>

using namespace std;

//构造函数
Student::Student():Human() {
    cout << "no param constructor invoke" << endl;
}

//构造函数之间的引用
Student::Student(char const *name):Student(name,0){
    cout << "one param constructor invoke" << endl;
}

//有初始化列表的构造函数
Student::Student(char const *name, int age):name(name),age(age),Human(age,name) {
    cout << "two params constructor invoke" << endl;
}

Student::~Student() {
    cout << "destructor invoke" << endl;
}

Student::Student(const Student& other) {
    cout << "copy constructor invoke" << endl;
    name = other.name;
    age = other.age;
}

char const *Student::getName() const {
    return name;
}

void Student::setName(char const *name) {
    Student::name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

