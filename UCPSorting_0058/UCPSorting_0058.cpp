// UCPSorting_0058.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int gheo[59];
int n;

//1. membandingkan index 0 dengan index 1 dan men swap / menukar value nya apabila tidak berurutan
//2. pertama memilih jarak yang akan mengelompokkan element element ke dalam sub list, lalu mengaplikasikan insertion sort terhadap sub list tersebut ke posisi yang benarnya
//3. insertion sort, karena ia hanya akan membandingkan sedikit saja yaitu yg belum ter urutkan


// 4. codingan
    
void input() {      //procedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; //output ke layar
        cin >> n;   //input dari pengguna
        if (n <= 59) 
            break;   // keluar dari loop
        else {      // jika n lebih dari 59
            cout << "\nArray dapat mempunyai maksimal 59 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {  // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
        cin >> gheo[i];              //output dari pengguna

    }
}

void insertionsort() {

    int i, temp, j;


    for (i = 0; i <= n - 2; i++) { //step 1
        temp = gheo[i]; //step 2
        j = i - 2; //step 3
        while (j >= 0 && gheo[j] > temp) //step 4
        {
            gheo[j + 1] = gheo[j]; ///step 4a
            j--; //step 4b
        }

        gheo[j + 1] = temp; //step 5
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << gheo[j]; // menampilkan array
        if (j < n - 1) {
            cout << " -->";
        }
    }
    cout << endl;
    cout << endl;

    cout << " jumlah pass = " << n - 2 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;
}

void bubbleSortArray() { // procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 2 - pass; j++) { //step 2
            if (gheo[j] > gheo[j + 1]) { // step 3
                int temp;
                temp = gheo[j];
                gheo[j] = gheo[j + 1];
                gheo[j + 1] = temp;

            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass" << pass - 2 << ": "; // number of pass
        for (int k = 0; k < n; k++) {
            cout << gheo[k] << " ";   // Menampilkan data pada number of pass

        }
        cout << endl;
    } while (pass <= n - 1);  //step 5

}

void display1() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << gheo [j]; // menampilkan array
        if (j < n - 2) {
            cout << " -->";
        }
    }
    cout << endl;
    cout << endl;

    cout << " jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;

}


int main() {

    input();

    bubbleSortArray();

    display1();

    return 0;
}

