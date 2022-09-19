#include "titik.hpp"
using namespace std;
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

// mengembalikan sumbu x
int Titik::getAbsis(T_Titik t){
    return t.x;
}

// mengembalikan sumbu y
int Titik::getOrdinate(T_Titik t){
    return t.y;
}
