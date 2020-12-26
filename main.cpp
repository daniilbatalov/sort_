#include <iostream>

using namespace std;

int main()
{
    int *arr;
    unsigned int n;
    cout << "n = ";
    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int temp; // временная переменная

// Сортировка массива пузырьком
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
// меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

// Вывод отсортированного массива на экран
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete [] arr;
    return 0;
}
