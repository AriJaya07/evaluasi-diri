#include <iostream>
using namespace std;

struct Stack {
    int data[100];     // Array statis untuk menyimpan elemen stack, maksimal 100 elemen
    int top;      // Indeks top elemen stack, -1 berarti stack kosong

    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top < 99)              // Jika stack belum penuh
            data[++top] = val;     // Tambahkan elemen dan naikkan top
        else
            cout << "Stack penuh\n";  // Jika penuh, tampilkan pesan
    }

    int pop() {
        if (top >= 0)              // Jika stack tidak kosong
            return data[top--];    // Keluarkan elemen di posisi top lalu turunkan top
        cout << "Stack kosong\n";  // Jika kosong, tampilkan pesan
        return -1;                 // Kembalikan -1 sebagai tanda stack kosong
    }

    bool isEmpty() {
        return top == -1;          // Mengecek apakah stack kosong
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Pop: " << s.pop() << endl;  // Mengeluarkan 20
    cout << "Pop: " << s.pop() << endl;  // Mengeluarkan 10
    cout << "Pop: " << s.pop() << endl;  // Stack kosong, output -1

    return 0;
}
