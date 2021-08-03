#include <iostream>
#include <cmath>

struct Complex
{
    float realpart;  //实部
    float imagpart;  //虚部
};

void assign(Complex * A, float real, float imag); // 赋值
void add(Complex * A, float real, float imag); // A + B
void minus(Complex * A, float real, float imag); // A - B
void multiply(Complex * A, float real, float imag); // A * B
void divide(Complex * A, float real, float imag); // A / b

void assign(Complex * A, float real, float imag)
{
    A -> realpart = real;
    A -> imagpart = imag;
} // 赋值函数

void add(Complex * c, Complex A, Complex B) 
{
    c->realpart = A.realpart + B.realpart;
    c->imagpart = A.imagpart + B.imagpart;
} // 复数相加

void minus(Complex * c, Complex A, Complex B) 
{
    c->realpart = A.realpart - B.realpart;
    c->imagpart = A.imagpart - B.imagpart;
} // 复数相减

void multiply(Complex * c, Complex A, Complex B) 
{
    c->realpart = A.realpart*A.imagpart - B.realpart*B.imagpart;
    c->imagpart = B.realpart*A.imagpart - A.realpart*B.imagpart;
} // 复数相减

void divide(Complex * c, Complex A, Complex B) 
{
    c->realpart = A.realpart*A.imagpart + B.realpart*B.imagpart/(pow(A.realpart) + pow(B.imagpart));
    c->imagpart = B.realpart*A.imagpart + A.realpart*B.imagpart/(pow(A.realpart) + pow(B.imagpart));
} // 复数相减

/* 计算 */
int main(int argc, char *argv[])
{
    Complex z1,z2,z3,z4,z;
    float RealPart, ImagPart;
    assign(z1,9,6);
    assign(z2,4,3);
    add(z3,z1,z2);
    multiply(z4,z3,z1);
    divide(z,z4,z3);

    return 0;
}

