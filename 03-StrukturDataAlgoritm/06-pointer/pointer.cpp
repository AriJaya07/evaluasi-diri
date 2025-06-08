#include <iostream>
using namespace std;

int main() {
    int a = 10;              // Variabel biasa bertipe integer
    int* p;                  // Deklarasi pointer yang menunjuk ke integer

    p = &a;                  // Pointer p menyimpan alamat dari variabel a

    // Menampilkan nilai dan alamat dari variabel a
    cout << "Nilai a        : " << a << endl;
    cout << "Alamat a       : " << &a << endl;

    // Menampilkan isi pointer p dan nilai yang ditunjuk oleh pointer
    cout << "Isi pointer p  : " << p << endl;     // Alamat yang ditunjuk oleh p (alamat dari a)
    cout << "Nilai *p       : " << *p << endl;    // Nilai yang ada di alamat yang ditunjuk oleh p
    cout << "Alamat pointer : " << &p << endl;    // Alamat memori tempat pointer p disimpan

    // Mengubah nilai variabel a melalui pointer
    *p = 20;

    // Menampilkan hasil setelah perubahan nilai melalui pointer
    cout << "\nSetelah *p = 20:" << endl;
    cout << "Nilai a        : " << a << endl;
    cout << "Nilai *p       : " << *p << endl;

    return 0;
}
