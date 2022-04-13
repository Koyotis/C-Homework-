// Домашнее задание до 14.04.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void print(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << " a = " << a[i];;
  
    }
    std::cout << '\n';
    for (int i = 0; i < size; i++)
    {
        std::cout << " b = " << b[i];;

    }
}
int main()
{
    char a = 'a';
    char b = 'b';
    swap(a, b);

    std::cout << " a = " << a << " b = " << b;
    std:: cout << std::endl;
    const int size = 10;
    int c[size] = { 1,2,3,4,5 };
    int d[size] = { 7,8,9,0,10 };

    print (c+2, d, 6);
}
