//
// Created by fox on 2023/7/16.
//

#ifndef CPROJECT_STUDENT_H
#define CPROJECT_STUDENT_H

class Student {
private:
    char *name;
    int age;
public:
    char* getName() const;

    void setName(char *name);

    int getAge() const;

    void setAge(int age);

public:

};

#endif //CPROJECT_STUDENT_H
