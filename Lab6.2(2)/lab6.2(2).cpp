#include <iostream>
#include <climits>

using namespace std;

void fillArrayRecursive(int arr[], int n, int index) {
    if (index < n) {
        cin >> arr[index];
        fillArrayRecursive(arr, n, index + 1);
    }
}

void fillArray(int arr[], int n) {
    fillArrayRecursive(arr, n, 0);
}

void printArrayRecursive(const int arr[], int n, int index) {
    if (index < n) {
        cout << arr[index] << " ";
        printArrayRecursive(arr, n, index + 1);
    }
    else {
        cout << endl;
    }
}

void printArray(const int arr[], int n) {
    cout << "Array: ";
    printArrayRecursive(arr, n, 0);
}

int findMinMaxRecursive(const int arr[], int n, int index, int& min, int& max) {
    if (index >= n) {
        return 0;
    }
    if (arr[index] < min) {
        min = arr[index];
    }
    if (arr[index] > max) {
        max = arr[index];
    }

    findMinMaxRecursive(arr, n, index + 1, min, max);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements for the array:\n";

    if (n <= 0) {
        cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[n];

    fillArray(arr, n);
    printArray(arr, n);

    int minValue = INT_MAX, maxValue = INT_MIN;
    findMinMaxRecursive(arr, n, 0, minValue, maxValue);
    cout << "Min: (recursive): " << minValue << endl;
    cout << "Max: (recursive): " << maxValue << endl;

    delete[] arr;

    return 0;
}