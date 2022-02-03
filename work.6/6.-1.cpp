﻿#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void function(int f[]) // void не возвращает значения
{
    for (int n = 3; n < 16; n++) // в начале int n = 3 и пока n < 16, к n прибавляется 1 и выполняется пустой оператор 
    {
        f[n] = f[n - 1] + f[n - 2] + f[n - 3];
        cout << f[n];
    }
}

int main()
{
    int f[15]; // массив, размер которого 15 элементов (первый эл. 0)
    f[0] = 0; // 1 элементу массива присваевается значение 0
    f[1] = 3; // 2 элементу массива присваевается значение 3
    f[2] = 5; // 3 элементу массива присваевается значение 5
    function(f);
}