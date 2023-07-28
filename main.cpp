//
// Created by fox on 2023/7/4.
//

#include <iostream>
#include <algorithm>
//#include "Student.h"
#include "vector"
#include "Student.cpp"

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

class Point {
private:
    int x, y;
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    //返回可以修改的引用左值 注意 这里和java不一样
    int &getX() {
        return this->x;
    }

};

//函数对象
class Equal {
private:
    int threshold;
public:
    Equal(int threshold) {
        this->threshold = threshold;
    }

    bool operator()(int number) {
        return threshold == number;
    }
};

int main() {
    const int number = 10;
    int *number_p = const_cast<int *>(&number);
    *number_p = 20; //c++中改不了 c中可以改
    cout << "number = " << number << endl; //10

    //使用引用
    int number1 = 10, number2 = 20;
    swap(number1, number2);
    cout << "number1 = " << number1 << " number2 = " << number2 << endl;
    //注意这个例子
    Point point = Point(1, 2);
    //注意 这里 getx返回的是引用 直接可以修改 和java不一样
    point.getX() = 3;
    cout << "point x = " << point.getX() << endl;

    //malloc free new delete 都是开辟和释放内存 malloc/free配对 new和delete配对
    //malloc free不会去调用构造函数和析构函数
    Student *student = (Student *) malloc(sizeof(Student));
    free(student);

    char const *name = "fox";
    Student *student1 = new Student(name, 23);
    student1->setAge(32);
    delete (student1);

    //拷贝构造函数
    Student stu1("fox", 32);
    Student stu2 = stu1; // = 是赋值 c++编译器此时会调用拷贝构造函数
    cout << "name = " << stu2.getName() << " age = " << stu2.getAge() << endl;

    //string的使用
    string str("123456");
    cout << str.c_str() << endl;
    //字符串遍历
    for (const auto &item: str) {
        cout << item << endl;
    }
    //删除
    string str1 = "123 456 789 101";
    //第一个参数 start 第二个参数 end 默认是字符串结尾
    str1.erase(3);
    cout << str1.c_str() << endl;

    //预定义函数对象和函数适配器
    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(2);
    vector1.push_back(4);
    vector1.push_back(2);

    int count = count_if(vector1.begin(), vector1.end(),Equal(2));
    cout << "count = " << count << endl;

    return 0;
}