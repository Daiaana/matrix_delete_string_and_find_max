#include <iostream>
#include "source.h"
using namespace std;
//операции с двумерным массивом, удаление строки и поиск максимума сроки с помощью функций-шаблонов


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


