// Nama     : Asep Saeful Rohman
// NIM      : A11.2021.13705
// Kelas    : A11.4304
// Tanggal  : 06/09/2022

#include <iostream>

using namespace std;

int a, b, c, d, e, pilih, ulang, n, N, M, y;

// cetak Dinus sebanyak n kali

void cetakDinus(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " DINUS" << endl;
    }
}

// menghitung luas segitiga sama kaki

int luasSegitiga(int a, int b)
{
    return (a * b) / 2;
}

// penentuan pemenang

void penentuan(int a, int b)
{
    if (a > b)
    {
        cout << " Ipin Menang" << endl;
        cout << " Kak Ros Mendapatkan : " << a << endl;
        cout << " Opah Mendapatkan : " << b << endl;
    }
    else
    {
        cout << " Upin Menang" << endl;
        cout << " Kak Ros Mendapatkan : " << b << endl;
        cout << " Opah Mendapatkan : " << a << endl;
        }
    
}

// deret bilangan angka N, M yang bisa dibagi 5

void deretBilangan(int a, int b )
{
    for(int i = a; i <= b; i++){
        if ( i % 5 == 0)
        {
            cout << i << endl;
        }
    }
    
}

// menghitung angsuran

void angsuran(int a, int b){
    int total = (b/(a/10)) * 10;
    cout <<" Harga Asli : " <<  total << endl;
}

int main(){
    cout << " ================== Daftar menu ==================" << endl;
    cout << " 1. Cetak Dinus sebanyak n kali" << endl;
    cout << " 2. Hitung Segitiga Sama Kaki" << endl;
    cout << " 3. Penentuan Pemenang Upin & Ipin" << endl;
    cout << " 4. Deret Bilangan Angka N, M yang bisa dibagi 5" << endl;
    cout << " 5. Biaya Angsuran" << endl;
    cout << " Pilih menu : ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        cout << " Program Cetak Dinus sebanyak n kali" << endl;
        cout << " Masukkan nilai n: ";
        cin >> n;
        cetakDinus(n);
        break;
    case 2:
        int alas, tinggi, luas;
        cout << " Program Hitung Segitiga Sama Kaki" << endl;
        cout << " Masukkan alas: ";
        cin >> alas;
        cout << " Masukkan tinggi: ";
        cin >> tinggi;
        cout << " Luas segitiga sama kaki adalah: " << luasSegitiga(alas, tinggi) << endl;
        break;
    case 3:
        int ipin, upin;
        cout << " Program Penentuan Pemenang" << endl;
        cout << " Masukkan nilai ipin: ";
        cin >> ipin;
        cout << " Masukkan nilai upin: ";
        cin >> upin;
        penentuan(ipin, upin);
        break;
    case 4:
        cout << " Program Deret Bilangan Angka N, M yang bisa dibagi 5" << endl;
        cout << " Masukkan nilai N: ";
        cin >> N;
        cout << " Masukkan nilai M: ";
        cin >> M;
        deretBilangan(N, M);
        break;
    case 5:
        cout << " Program Biaya Angsuran" << endl;
        cout << " Masukkan persen angsuran : ";
        cin >> a;
        cout << " Masukkan Total biaya Angsuran : ";
        cin >> b;
        angsuran(a, b);
        break;
    default:
        cout << " Menu tidak tersedia" << endl;
        break;
    }

    cout << " Apakah anda ingin mengulang program? (1 = ya, 2 = tidak) : ";
    cin >> ulang;
    if (ulang == 1)
    {
        main();
    }
    else
    {
        cout << " Terima kasih" << endl;
    }


    return 0;
}