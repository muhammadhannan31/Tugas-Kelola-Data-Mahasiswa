#include <iostream>

using namespace std;

struct kelas
{
    string Kelas;
};

int main(){ 
    int n;
    int nilaiMahasiswa[999];
    string namaMahasiswa[999];

    namaMahasiswa[0] = "asep";
    namaMahasiswa[1] = "kebakaran";
    namaMahasiswa[2] = "hutan";

    nilaiMahasiswa[0] = 10;
    nilaiMahasiswa[1] = 20;
    nilaiMahasiswa[2] = 30;

    cin >> n;
    for(int i = 0; i<=n; i++){
        cout << "Mahasiswa ke : "<< i+1 << " | " <<namaMahasiswa[i]<< " " << "Nilai : " << nilaiMahasiswa[i]<< " "<< endl;
    }

}



