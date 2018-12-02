#include <iostream>
using namespace std;

void tukar(int & a, int & b){
    int tmp = a;
    a = b;
    b= tmp;
}

int main() {
    int a = 5;
    int b = 8;
    cout<< "Nilai Awal A Variable : " << a << endl;

    cout << "Nilai Awal B Variable : " << b << endl;

    tukar(a,b);

    cout<< "\nSetelah Digunakan Fungsi Tukar : (a,b)\n";
    cout<< "Nilai Tukar A Variable : " << a << endl;
    cout << "Nilai Tukar B Variable : " << b << endl;
}
