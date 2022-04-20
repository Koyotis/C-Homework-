
#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout;

void fill (int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        num[i] = rand() % 100; 
    }
}
void print(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
}
void  fill_2array(int** arr, int rows, int cols, int max)
{
    srand(time(0));
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % max;
        }
    }

}

void print_2array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << std::endl;
    }
}

void delete_2arr(int** arr, int rows)
{
    for (int i = 0; i < rows; i++)
        delete arr[i];
    delete arr;
}
int main()
{
    srand(time(0));
    int rows, cols;
    std:: cin >> rows >> cols;
    int max = 25;
    int** arr = new int* [rows];

    fill_2array(arr, rows, cols, max);
    
    print_2array(arr, rows, cols);
    delete_2arr(arr, rows);
}
