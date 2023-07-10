//
// Created by fox on 2023/7/4.
//

#include <iostream>

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

    return 0;
}