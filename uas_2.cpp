#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menggabungkan dua array terurut
vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> mergedArray; // Array hasil gabungan
    int i = 0, j = 0; // Indeks untuk masing-masing array

    // Menggabungkan elemen dari kedua array
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            mergedArray.push_back(arr1[i]); // Tambahkan elemen dari arr1
            i++;
        } else {
            mergedArray.push_back(arr2[j]); // Tambahkan elemen dari arr2
            j++;
        }
    }

    // Tambahkan elemen yang tersisa dari arr1, jika ada
    while (i < arr1.size()) {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    // Tambahkan elemen yang tersisa dari arr2, jika ada
    while (j < arr2.size()) {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}

int main() {
	cout << "Nama : Rasyiq Surya Ramadhan" << endl;
    cout << "NIM  : 231011401088" << endl;
    cout << "Kelas: 03TPLP026" << endl;
    cout << "-------------------------------" << endl;
    // Dua array yang sudah terurut
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Gabungkan kedua array
    vector<int> mergedArray = mergeArrays(arr1, arr2);

    // Tampilkan hasil
    cout << "Array setelah digabung: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

