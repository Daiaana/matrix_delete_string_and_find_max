int** creat(int& n, int& m);
void print(int** matrix, int n, int m);
void free(int** matrix, int n);
template <typename T> T maxmas(T* mas, int n)
{
    T* max = mas;
    for (int i = 0; i < n; i++) {
        if (*(mas + i) > *max) {
            max = mas + i;
        }
    }
    return *max;
}