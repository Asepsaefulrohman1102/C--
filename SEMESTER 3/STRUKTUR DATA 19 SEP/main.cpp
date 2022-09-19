// Nama    : Asep Saeful Rohman
// NIM     : A11.2021.13705

#include <iostream>

using namespace std;

// typedef int bilbul; // bilbul=tipedata serupa int

typedef struct T_Titik    // dengan typedef titiik = tipe data
{               // typedeff bukan tipe data
    int x;
    int y;
    T_Titik buatTitik(int x, int y);
    void resetTitik(T_Titik &t);    //mengubah sumbu x dan y menjadi 0
    void cetakTitik(T_Titik t);     //mencetak titik
    bool isOrigin(T_Titik t);       //apakah titik t memiliki koordinat 0,0
    int getAbsis(T_Titik t);        //mengembalikan sumbu x
    int getOrdinate(T_Titik t);     //mengembalikan sumbu y
}Titik;

T_Titik Titik::buatTitik(int x, int y){
    T_Titik tHasil;
    tHasil.x=x;
    tHasil.y=y;
    return tHasil;
}

// mengubah sumbu x dan y menjadi 0
void Titik::resetTitik(T_Titik &t){
    t.x=0;
    t.y=0;
}

// mencetak titik
void Titik::cetakTitik(T_Titik t){
    cout << "(" << t.x << "," << t.y << ")" << endl;
}

// apakah titik t memiliki koordinat 0,0 ya atau tidak
bool Titik::isOrigin(T_Titik t){
    if(t.x==0 && t.y==0){
        cout << "yes " ;
        return true;
    }else{
        cout << "no " ;
        return false;
    }
}

// mengembalikan sumbu x awal buatTitik(10,20)
int Titik::getAbsis(T_Titik t){
    return t.x;
}

// mengembalikan sumbu y awal
int Titik::getOrdinate(T_Titik t){
    return t.y;
}

int main() {
    // bilbul a=10;
    // cout << a << endl;

    Titik t1;     //t1 bukan variabel tapi objek
    // Titik t1={10,20};
    t1=t1.buatTitik(10,20);
    cout << t1.x << t1.y << endl;
    cout << "Hasil reset titik : ";
    t1.resetTitik(t1);
    cout << t1.x << t1.y << endl;
    cout << "Hasil cetak titik : ";
    t1.cetakTitik(t1);
    cout << "Apakah titik t memiliki koordinat 0,0? " << t1.isOrigin(t1) << endl;
    //mengembalikkan sumbu t1.x=10
    cout << "Absis dari sumbu x : " << t1.getAbsis(t1) << endl;
    //mengembalikkan sumbu y
    cout << "Ordinate dari sumbu y : " << t1.getOrdinate(t1) << endl;


    return 0;
}