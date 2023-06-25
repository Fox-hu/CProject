#include <stdio.h>

int main() {
    //二级指针
//    printf("Hello, World!\n");
//    int i = 100;
//    int *p = &i;
//    int **d = &p;
//    printf("d的地址是%p\n", *d);
//    printf("i的数据是%p\n", p);
//    printf("d的内容是%d\n", **d);


    //数组指针
    int array[] = {1, 2, 3, 4};
    //数组指针 = 数组首地址 = 数组声明
    printf("arr = %p\n",array);
    printf("&arr = %p\n",&array);
    printf("&arr[0] = %p\n",&array[0]);

    printf("=====数组方式=====\n");
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        printf("arr[%d]的数据是%d\n", i, array[i]);
    }
    printf("=====指针方式=====\n");
    int *array_p = array;//数组和指针
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        printf("arr[%d]的数据是%d\n", i, *array_p++);
    }

    return 0;
}
