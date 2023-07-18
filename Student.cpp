//
// Created by fox on 2023/7/16.
//
#include "Student.h"
#include <iostream>

using namespace std;

//构造函数
Student::Student() {
    cout << "空构造函数" << endl;
}

//构造函数之间的引用
Student::Student(char *name):Student(name,0) {
    cout << "一个参数的构造函数" << endl;
}

//有初始化列表的构造函数
Student::Student(char *name, int age):name(name),age(age) {
    cout << "两个参数的构造函数" << endl;
}

Student::~Student() {
    cout << "析构函数调用" << endl;
}

char *Student::getName() const {
    return name;
}

void Student::setName(char *name) {
    Student::name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}
