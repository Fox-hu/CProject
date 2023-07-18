//
// Created by fox on 2023/7/4.
//

#include <iostream>
//#include "Student.h"
#include "Student.cpp"

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    const int number = 10;
    int *number_p = const_cast<int *>(&number);
    *number_p = 20; //c++中改不了 c中可以改
    std::cout << "number = " << number << std::endl; //10


    //使用引用
    int number1 = 10, number2 = 20;
    swap(number1, number2);
    std::cout << "number1 = " << number1 << " number2 = " << number2 << std::endl;

    //malloc free new delete 都是开辟和释放内存 malloc/free配对 new和delete配对
    //malloc free不会去调用构造函数和析构函数
    Student *student = (Student*) malloc(sizeof (Student));
    free(student);

    Student *student1 = new Student("fox");
    student1->setAge(32);
    delete(student1);

    return 0;
}