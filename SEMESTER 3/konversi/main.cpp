#include <iostream>
using namespace std;

//program konversi YCBYR ke RGB

int main(){
    int Y, Cb, Cr, R, G, B;
    cout << "Masukkan nilai Y : ";
    cin >> Y;
    cout << "Masukkan nilai Cb : ";
    cin >> Cb;
    cout << "Masukkan nilai Cr : ";
    cin >> Cr;
    R = Y + 1.402 * (Cr - 128);
    G = Y - 0.34414 * (Cb - 128) - 0.71414 * (Cr - 128);
    B = Y + 1.772 * (Cb - 128);
    cout << "Nilai R : " << R << endl;
    cout << "Nilai G : " << G << endl;
    cout << "Nilai B : " << B << endl;
    return 0;
}
