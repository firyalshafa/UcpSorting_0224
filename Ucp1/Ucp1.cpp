// Ucp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int firyal[24];
int n;

void input() {
    while (true) {
        cout<< "masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 24)
            break;
        else {
            cout << "\nArray dapat menyimpan maksimal 24 elemen\n";
        }

    }
    cout << endl;
    cout << "=============" << endl;
    cout << "masukan elemen array" << endl;
    cout << "==============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << " : ";
        cin >> firyal [i];

    }
}

void selectionsort() {
    int i, j, temp;

    do {
        for (j = 0; j <= n - 2; j++) {
            firyal[24] = j;
            while(j + 1 <= n - j++) {
                if (firyal[i] < firyal[24])
                    firyal[24] = i;
            }



        }
    }
}

void display() {
    cout << endl;
    cout << "===============" << endl;
    cout << "elemen Array yang telah tersusun" << endl;
    cout << "=============" << endl;
    for (int j = 0; j < n; j++) {
        cout << firyal[j] << endl;
    }
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}



int main()
{
    input();
    selectionsort();
    display();
    return 0;

}



// jawaban no 1 sampai  3
//   1. algoritma bubble sort menukar dan membandingkan elemennya dengan cara scanning list nya  terlebih dahulu, kemudian membandingkan elemen yang berurutan, dan menukar tempatnya
//   2. shell sort menukar dan membandingkan  elemennya dengan cara memecah elemen menjadi sub elemen lalu diselesaikan satu persatu dan setelah terselesaikan di satukan kembali lalu di urutkan.
//   3. insertion sort karna lebih efisien 
// 
