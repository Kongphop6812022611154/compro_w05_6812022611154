#include <stdio.h>

int main() {
    char name = 'K';                                           //ประกาศตัวแปร name = K
    int age = 18;                                              //ประกาศตัวแปร age = 18
    float weight = 85.00;                                     //ประกาศตัวแปร weight(เลขทศนิยม) = 85.0

    printf("Student %c is %d years old.\n", name, age);        //แสดง Student (ตัวแปร name) is (ตัวแปร age) years old 
    printf("His weighs is %.1f kg.\n", weight);                // แสดง His weighs is (ตัวแปร weight) kg.

    return 0;                                                  //คืนค่า 0 เสร็จสิ้นกระบวนการ
}