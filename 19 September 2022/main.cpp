// Nama    : Asep Saeful Rohman
// NIM     : A11.2021.13705

#include "titik.hpp"

using namespace std;

// typedef int bilbul; // bilbul=tipedata serupa int



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
    t1.cetakTitik(t1);
    cout << "Apakah titik t1 origin? " << t1.isOrigin(t1) << endl;
    cout << "Absis titik t1 : " << t1.getAbsis(t1) << endl;
    cout << "Ordinate titik t1 : " << t1.getOrdinate(t1) << endl;


    return 0;
}
