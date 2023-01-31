#include <iostream>
using namespace std;
//операции с двумерным массивом, удаление сроки и поиск максимума сроки с помощью функций-шаблонов


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

//функция-шаблон:
template <typename T> T maxmas(T *mas, int n)
{
    T *max = mas;
    for (int i = 0; i < n; i++) {
        if (*(mas + i)> *max) {
            max = mas + i;
        }
    }
    return *max;
}


int main()
{
    int n, m, k, l;
    int** a = creat(n, m);
    cout << "your matrix: " << endl;
    print(a, n, m);
    cout << "enter number string for searching max: ";
    cin >> l;
    int maxOfString = maxmas(a[l], m);
    cout << "Max of string: " << maxOfString << endl;
    cout << "enter number of string for delete k = ";
    cin >> k;
    if (k < 0 || k > n - 1)
        cout << "error";
    else {
        delete[] a[k];
        for (int i = k; i < n - 1; ++i)
            a[i] = a[i + 1];
        a[n - 1] = NULL;
        --n;
        print(a, n, m);
    }
    free(a, n);
    return 0;
}


