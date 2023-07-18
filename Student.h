//
// Created by fox on 2023/7/16.
//

#ifndef CPROJECT_STUDENT_H
#define CPROJECT_STUDENT_H

class Student {
private:
    char *name{};
    int age{};
public:

    Student();

    Student(char *name, int age);

    Student(char *name);

    ~Student();

    char* getName() const;

    void setName(char *name);

    int getAge() const;

    void setAge(int age);

};

#endif //CPROJECT_STUDENT_H
