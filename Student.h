//
// Created by fox on 2023/7/16.
//

#ifndef CPROJECT_STUDENT_H
#define CPROJECT_STUDENT_H

#include "Human.h"

class Student :public Human{
private:
    char const *name{};
    int age{};
public:

    Student();

    Student(char const *name, int age);

    Student(char const *name);

    Student(const Student& other);

    ~Student();

    char const * getName() const;

    void setName(char const *name);

    int getAge() const;

    void setAge(int age);

};

#endif //CPROJECT_STUDENT_H
