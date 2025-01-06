#include <iostream>
#include <algorithm> // Untuk std::sort
using namespace std;

// Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks jika ditemukan
        }
    }
    return -1; // Jika tidak ditemukan
}

// Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // Hindari overflow
        if (arr[mid] == target) {
            return mid; // Mengembalikan indeks jika ditemukan
        } else if (arr[mid] < target) {
            low = mid + 1; // Cari di sebelah kanan
        } else {
            high = mid - 1; // Cari di sebelah kiri
        }
    }
    return -1; // Jika tidak ditemukan
}

int main() {
	cout << "Nama : Rasyiq Surya Ramadhan" << endl;
    cout << "NIM  : 231011401088" << endl;
    cout << "Kelas: 03TPLP026" << endl;
    cout << "-------------------------------" << endl;
    int arr[] = {10, 20, 5, 7, 3, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Linear Search
    int linearResult = linearSearch(arr, size, target);
    if (linearResult != -1) {
        cout << "Linear Search: Elemen ditemukan di indeks " << linearResult << endl;
    } else {
        cout << "Linear Search: Elemen tidak ditemukan" << endl;
    }

    // Binary Search
    sort(arr, arr + size); // Urutkan array terlebih dahulu
    int binaryResult = binarySearch(arr, size, target);
    if (binaryResult != -1) {
        cout << "Binary Search: Elemen ditemukan di indeks " << binaryResult << endl;
    } else {
        cout << "Binary Search: Elemen tidak ditemukan" << endl;
    }

    return 0;
}

