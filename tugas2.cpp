#include <iostream>
 using namespace std;

int kali (int, int);
int kurang (int, int);
int bagi ( int, int);
int tambah ( int, int);
void cetak(int);

 int main (){
    int a=kali(20,10);
    cetak(a);
    int c=kurang(20,10);
    cetak(c);
    int e=bagi(20,10);
    cetak(e);
    int g=tambah(20,10);
    cetak(g);
}
 int kali(int a, int b) {
    return a*b;
}
int kurang (int c, int d){
    return c-d;
}
int bagi (int e, int f) {
    return e/f;
}
int tambah (int g, int h) {
    return g+h;
}

 void cetak (int a){
    cout << "Nilai dari Variable adalah: " << a << endl;
}
