//
// Created by fox on 2023/7/16.
//

#include "Human.h"
#include "iostream"

using namespace std;

Human::Human() {
    cout << "parent no param constructor invoke" << endl;
}

Human::Human(int age, char const *name) {
    cout << "parent two params constructor invoke" << endl;
}

void Human::setAge(int age) {
    this->age = age;
}

void Human::setName(char const *name) {
    this->name = name;
}

int Human::getAge() const {
    return this->age;
}

char const *Human::getName() const {
    return this->name;
}