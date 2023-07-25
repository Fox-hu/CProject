//
// Created by fox on 2023/7/16.
//

#ifndef CPROJECT_HUMAN_H
#define CPROJECT_HUMAN_H


class Human {
private:
    int age{};
    char const *name{};
public:
    Human();

    Human(int age, char const *name);

    char const * getName() const;

    void setName(char const *name);

    int getAge() const;

    void setAge(int age);
};


#endif //CPROJECT_HUMAN_H
