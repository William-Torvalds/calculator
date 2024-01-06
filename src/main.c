/* This is a calculator program that is still in development.
    Copyright (C) 2024    Zhengyuan Xu

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.*/
#include <stdio.h>
#include "include/main.h"
int intnum1,intnum2,intnum3;
double floatnum1,floatnum2,floatnum3;
char oper;
int main()
{
    for(;;){
        int mode;
        printf("请输入模式\n1:整数\t2:浮点数\n");
        scanf("%d",&mode);
        switch (mode)
        {
        case 1:
            printf("1.请输入第一个整数\n2.运算符号\n3.请输入第二个整数\n");
            intinput();
            intnum3 = intcalc(intnum1,oper,intnum2);
            intprint(intnum3);
            break;

        case 2:
            printf("1.请输入第一个浮点数\n2.运算符号\n3.请输入第二个浮点数\n");
            floatinput();
            floatnum3 = floatcalc(floatnum1,oper,floatnum2);
            floatprint(floatnum3);
            break;

        }
    }
}
