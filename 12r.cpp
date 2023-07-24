#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void displayArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 5;

    int intArray[SIZE] = {5, 3, 1, 4, 2};
    float floatArray[SIZE] = {5.5, 3.3, 1.1, 4.4, 2.2};

    cout << "Before sorting:\n";
    cout << "Integers: ";
    displayArray(intArray, SIZE);
    cout << "Floats: ";
    displayArray(floatArray, SIZE);

    bubbleSort(intArray, SIZE);
    bubbleSort(floatArray, SIZE);

    cout << "After sorting:\n";
    cout << "Integers: ";
    displayArray(intArray, SIZE);
    cout << "Floats: ";
    displayArray(floatArray, SIZE);

    return 0;
}