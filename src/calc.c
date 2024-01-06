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
int intcalc(int num1,char oper,int num2)
{
    int num3;
    switch (oper)
    {
    case '+':
        num3 = num1 + num2;
        break;

    case '-':
        num3 = num1 - num2;
        break;

    case '*':
        num3 = num1 * num2;
        break;

    case '/':
        num3 = num1 / num2;
        break;

    }
    return num3;
}
double floatcalc(double num1,char oper,double num2)
{
    double num3;
    switch (oper)
    {
    case '+':
        num3 = num1 + num2;
        break;

    case '-':
        num3 = num1 - num2;
        break;

    case '*':
        num3 = num1 * num2;
        break;

    case '/':
        num3 = num1 / num2;
        break;

    }
    return num3;
}
