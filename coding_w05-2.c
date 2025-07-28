#include <stdio.h>                  //Header file การรับข้อมูลเข้า(input) และแสดงผลออก(Output)

int main() {                        // จุดเริ่มต้นของโปรแกรม โดยฟังก์ชั่นนี้จะคืนค่า Return เป็นจำนวนเต็ม
    char name[31];                  // ประกาศตัวแปร name(array) โดยเก็บข้อความได้มากสุด 30+1 ตัว
    int age;                        // ประกาศตัวแปร age โดยเป็นจำนวนเต็ม
    float height;                   // ประกาศตัวแปร height โดยเป็นเลขทศนิยม

    char subject;                   // ประกาศตัวแปร subject โดยเก็บตัวอักษรเพียง 1 ตัว
    float grade;                    // ประกาศตัวแปร grade โดยเป็นเลขทศนิยม
    char symbol;                    // ประกาศตัวแปร symbol โดยเก็บตัวอักษรเพียง 1 ตัว

    char buffer[100];               // ประกาศตัวแปร buffer(array) โดยเก็บตัวอักษรได้มากสุด 99+1 ตัว

    printf("Enter name, age, height: ");                                // แสดงผลข้อความเพื่อกรอก name age height
    fgets(buffer, sizeof(buffer), stdin);                               // ใช้ fgets เพื่ออ้านข้อมูลจาก Keyborad และนำไปเก็บไว้ใน buffer
    sscanf(buffer, "%s %d %f", name, &age, &height);                    // รับค่า name(แบบ string ขนาด 30), age(เป็นเลขจำนวนเต็ม), height(เป็นทศนิยม 1 ตำแหน่ง)

    printf("Enter subject, grade, symbol: ");                           // แสดงข้อความเพื่อให้กรอกข้อมูลของ subject grade symbol
    fgets(buffer, sizeof(buffer), stdin);                               // ใช้ fgets เพื่ออ้านข้อมูลจาก Keyborad และนำไปเก็บไว้ใน buffer
    sscanf(buffer, "%c %f %c", &subject, &grade, &symbol);              // รับค่า subject(ตัวอักษรพิมพ์ใหญ่ตัวแรกของของวิชา), grade(เป็นทศนิยม 2 ตำแหน่ง), ตัวอักษร(1 ตัว แทนเกรดแบบไม่มีประจุ)

    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);                                // แสดงผลลัพธ์ของค่า name, age, height
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject, name[0], grade, symbol);           // แสดงผลลัพธ์ของค่า subject, ตัวอักษรตัวแรกของ name, grade, เกรดแบบไม่มีประจุ

    return 0;       // คืนค่า 0 เสร็จสิ้นกระบวนการ
}