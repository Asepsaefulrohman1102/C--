#ifndef TITIK_HPP_INCLUDED
#define TITIK_HPP_INCLUDED
#include <iostream>


#endif // TITIK_HPP_INCLUDED


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
