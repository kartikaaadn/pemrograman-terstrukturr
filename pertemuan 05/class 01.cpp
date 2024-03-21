#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama, npm;
};

int main(){
    Mahasiswa Mhs.nama;
    cin >> Mhs.nama;
    cin >> Mhs.npm;

    cout << Mhs.nama << " " << Mhs.npm << endl;
}