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

    printf("区分 array和 &array\n");
    //这里可以看到 array和array之间差4
    printf("%p,%p,%p,%p\n",array,array+1,&array,&array+1);

    //字符串
    //1 字符串数组 能够更改字符串内容
    char str[] = {'F','o','x','\0'};
    printf("第一种更改前:%s\n",str); //字符串结尾以 '\0'
    //修改内容
    str[1] = 'O';
    printf("第一种更改后:%s\n",str); //字符串结尾以 '\0'

    //2 此时指向的是常量 无法更改
    char* str1 = "Fox";
    printf("第二种:%s\n",str1);
    //str1[2] = 'O'; 报错

    return 0;
}
