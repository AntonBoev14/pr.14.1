#include <iostream>
#include <clocale>
#include <iomanip>
const int n(5), m(5);
void vvod_mass(int arr[n][m]);
void vivod_mass(int arr[n][m]);
void sum_v_stolbce(int arr[n][m]);

using namespace std;

int main()
{
    setlocale(0, "ru");
    int arr[n][m];
    int i, j;
    srand(time(0));
    vvod_mass(arr);
    cout << "матрица arr\n";
    vivod_mass(arr);
    cout << "сумма элементов в первом столбце\n";
    sum_v_stolbce(arr);
    system("pause");
    return 0;
}
void vvod_mass(int arr[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            arr[i][j] = rand() % 21 - 10;

}
void vivod_mass(int arr[n][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
void sum_v_stolbce(int arr[n][m])
{
    int d[m], s, i, j;
    for (i = 0; i < n; i++)
    {
        s = 0;
        for (j = 0; j < 1; j++)
        {
            s += arr[i][j];
        }
        if (i < 0)
            cout << i;
        

        d[i] = s;
        cout << "сумма элементов в  " << j << " столбце = " << d[j] << endl;

    }
}
