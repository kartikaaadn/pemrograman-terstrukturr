#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		void perkenalan(){
			cout << "Nama: " << nama << endl;
			cout << "Npm: " << npm;
		}
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	Mhs.perkenalan();
}