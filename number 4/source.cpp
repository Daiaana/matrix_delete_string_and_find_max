#include <iostream>
using namespace std;


int** creat(int& n, int& m)
{
    cout << "enter matrix size" << endl;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i)
        matrix[i] = new int[m];
    cout << "enter martix: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "string " << i << endl;
        for (int j = 0; j < m; ++j)
            cin >> matrix[i][j];
    }
    return matrix;
}

void print(int** matrix, int n, int m)
{
    for (int i = 0; i < n; i++, cout << endl)
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << "\t";
}

void free(int** matrix, int n)
{
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
}




