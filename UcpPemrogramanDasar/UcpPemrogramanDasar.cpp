// UcpPemrogramanDasar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Mariska Esa Purnomo 20230140167

// 1. int nim
//string nama
//float c

// 2. prosedur: sintaks nya yaitu-> void...namaprosedur
        //void display
// fungsi: sintaksnya yaitu-> tipedata...namafungsi
            // diakhiri return nilai yg dikembalikan
     // int penjumlahan(int a, int b)
     // {
     //      return a + b;
     //  }

//3. looping for-> sintaksnya: FOR (kondisi awal; kondisi akhir; pengubah kondisi)
//  looping while -> sintaksnya: WHILE (konndisi)
//  looping do...while -> sintaksnya: 
                       //    DO
                       //    [
                       //     (proses yang diulang)
                       //    ]
                       //     while (kondisi)

//4. conditional statement:
//  
    /*if (nPolutan > 45) {
         status = "Sehat";
    }
    else if (nPolutan > 75) {
        status = "Sehat";
    }
    else {
        status = "Tidak Sehat";*/
//  

//5. implementasi struct: 
//  struct mahasiswa {
//       string nim;
//       string nama;
//       string alamat;
//       string umur;
//  };



#include <iostream>
using namespace std;

int main()
{
    int sensor1, sensor2, sensor3, nPolutan;
    string NamaKota;
    string status;

    srand(time(0));

    cout << "Masukkan Nama Kota: ";
    cin >> NamaKota;

    nPolutan = (sensor1 + sensor2 + sensor3);

    if (nPolutan > 45) {
        status = "Sehat";
    }
    else if (nPolutan > 75) {
        status = "Sehat";
    }
    else {
        status = "Tidak Sehat";
    }

    cout << "Nama Kota" << NamaKota << endl;
    cout << "Status" << nPolutan << endl;
  

}

