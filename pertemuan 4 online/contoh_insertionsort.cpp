#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input()
{ // procedure input
while (true)
{
    cout << "masukkan jumlah ddata pada array : "; // membuat inputan jumlah element array
    cin >> n; // memanggil variable inputan n
    
    if (n <= 20)
    {// membuat kondisi n tidak lebih dari 20
        break;
    }
    else
    {
        cout << "\nArray yang anda masukkan maksimal 20 element.\n"; //menampilkan pesan jikan data lebih dari 20
    }
    }
    