#include <iostream>
using namespace std;

//Тема: Указатели.
//Домашнее задание
//Задание 1 :
//Используя два указателя на массив целых чисел, скопируйте один массив в другой.Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разименования.
void task01()
{
    cout << "task 01" << endl;
    const int n = 30;
    int* arr1 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        *(arr1 + i) = rand() % 10;
    }

    int* arr2 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }

    cout << "arr1[" << *arr1;
    for (size_t i = 1; i < n; i++)
    {
        cout << ", " << *(arr1 + i);
    }
    cout << "]" << endl;

    cout << "arr2[" << *arr2;
    for (size_t i = 1; i < n; i++)
    {
        cout << ", " << *(arr2 + i);
    }
    cout << "]" << endl;
}
//Задание 2 :
//Используя указатель на массив целых чисел, изменить порядок прохождения элементов массива на противоположный.Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разименования.
void task02()
{
    cout << "task 02" << endl;
    const int n = 30;
    int* arr1 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        *(arr1 + i) = rand() % 10;
    }

    cout << "arr1[";
    for (size_t i = 0; i < n; i++)
    {
        cout << *(arr1 + i) << ((i != n - 1) ? ", " : "");
    }
    cout << "]" << endl;

    cout << "arr1[";
    for (size_t i = 0; i < n; i++)
    {
        cout << *(arr1 + n - 1 - i) << ((i != n - 1) ? ", " : "");
    }
    cout << "]" << endl;
}
//Задание 3 :
//Используя два указателя на массивы целых чисел, скопируйте один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разименования.
void task03()
{
    cout << "task 03" << endl;
    const int n = 30;
    int* arr1 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        *(arr1 + i) = rand() % 10;
    }

    int* arr2 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        *(arr2 + n - 1 - i) = *(arr1 + i);
    }

    cout << "arr1[";
    for (size_t i = 0; i < n; i++)
    {
        cout << *(arr1 + i) << ((i != n - 1) ? ", " : "");
    }
    cout << "]" << endl;

    cout << "arr2[";
    for (size_t i = 0; i < n; i++)
    {
        cout << *(arr2 + i) << ((i != n - 1) ? ", " : "");
    }
    cout << "]" << endl;
}
//Задание 4 :
//Используя указатели и оператор разименования, определить больше всего из двух чисел.
void task04()
{
    cout << "task 04" << endl;
    int* a = new int(5);
    int* b = new int(7);
    cout << (*a > *b ? "a" : (*b > *a ? "b" : "a=b")) << endl;

}
//Задание 5 :
//Используя указатели и оператора разименования, обменять местами значения двух переменных.
void task05()
{
    cout << "task 05" << endl;
    int* a = new int;
    cout << "input a >> ";
    cin >> *a;
    cout << (*a < 0 ? "-" : "+") << endl;
}
//Задание 6 :
//Используя указатель на массив целых чисел, сосчитать сумму элементов массива.Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разименования.
void task06()
{
    cout << "task 08" << endl;
    const int n = 30;
    int* arr1 = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        *(arr1 + i) = rand() % 10;
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << (i == 0 ? "arr[" : "") << *(arr1 + i) << ((i != n - 1) ? ", " : "]\n");
    }

    int* sum = new int(0);
    for (size_t i = 0; i < n; i++)
    {
        *sum += *(arr1 + i);
    }
    cout << "sum = " << *sum << endl;
}

int main()
{
    task01();
    task02();
    task03();
    task04();
    task05();
    task06();
}