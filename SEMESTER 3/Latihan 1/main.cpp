#include <iostream>

using namespace std;

//konversi binner ke desimal

// int main()
// {
//     int binner, desimal, sisa, pangkat;
//     cout << "Masukkan bilangan binner : ";
//     cin >> binner;
//     desimal = 0;
//     pangkat = 1;
//     while (binner != 0)
//     {
//         sisa = binner % 10;
//         desimal = desimal + sisa * pangkat;
//         binner = binner / 10;
//         pangkat = pangkat * 2;
//     }
//     cout << "Bilangan desimalnya adalah : " << desimal << endl;
//     return 0;
// }

//konversi desimal ke binner

// int main()
// {
//     int binner, desimal, sisa, pangkat;
//     cout << "Masukkan bilangan desimal : ";
//     cin >> desimal;
//     binner = 0;
//     pangkat = 1;
//     while (desimal != 0)
//     {
//         sisa = desimal % 2;
//         binner = binner + sisa * pangkat;
//         desimal = desimal / 2;
//         pangkat = pangkat * 10;
//     }
//     cout << "Bilangan binnernya adalah : " << binner << endl;
//     return 0;
// }

//fungsi konversi binner ke desimal

// int konversi(int binner) {
//     int desimal, sisa, pangkat;
//     desimal = 0;
//     pangkat = 1;
//     while (binner != 0)
//     {
//         sisa = binner % 10;
//         desimal = desimal + sisa * pangkat;
//         binner = binner / 10;
//         pangkat = pangkat * 2;
//     }
//     return desimal;
// }

// int main()
// {
//     int binner, desimal;
//     cout << "Masukkan bilangan binner : ";
//     cin >> binner;
//     desimal = konversi(binner);
//     cout << "Bilangan desimalnya adalah : " << desimal << endl;
//     return 0;
// }

//fungsi parameter void string bin2des int *angka_desimal

void bin2des(int *angka_desimal) {
    int binner, desimal, sisa, pangkat;
    cout << "Masukkan bilangan binner : ";
    cin >> binner;
    desimal = 0;
    pangkat = 1;
    while (binner != 0)
    {
        sisa = binner % 10;
        desimal = desimal + sisa * pangkat;
        binner = binner / 10;
        pangkat = pangkat * 2;
    }
    *angka_desimal = desimal;
}

int main()
{
    int binner, desimal;
    bin2des(&desimal);
    cout << "Bilangan desimalnya adalah : " << desimal << endl;
    return 0;
}