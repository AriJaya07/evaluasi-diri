#include <iostream>
using namespace std;

// Struktur Node untuk menyimpan data dan pointer ke node berikutnya
struct Node {
    int data;       // Data yang disimpan dalam node
    Node* next;     // Pointer ke node selanjutnya
};

// Fungsi untuk menambahkan node di akhir linked list
void tambahNode(Node*& head, int val) {
    Node* baru = new Node;   // Buat node baru di heap
    baru->data = val;        // Set nilai data
    baru->next = nullptr;    // Awalnya tidak menunjuk ke mana-mana

    if (!head) {
        // Jika linked list masih kosong, node baru menjadi kepala (head)
        head = baru;
    } else {
        // Jika sudah ada node, cari node terakhir
        Node* temp = head;
        while (temp->next) {   // Selama node selanjutnya masih ada
            temp = temp->next;
        }
        temp->next = baru;     // Tambahkan node baru di akhir
    }
}

// Fungsi untuk menampilkan semua elemen dalam linked list
void tampilkanList(Node* head) {
    while (head) {
        cout << head->data << " -> ";  // Tampilkan data node
        head = head->next;             // Lanjut ke node berikutnya
    }
    cout << "NULL\n";  // Penanda akhir linked list
}

int main() {
    Node* head = nullptr;       // Inisialisasi linked list kosong

    tambahNode(head, 10);       // Tambah nilai 10 ke linked list
    tambahNode(head, 20);       // Tambah nilai 20 ke linked list
    tambahNode(head, 30);       // Tambah nilai 30 ke linked list

    cout << "Linked List: ";
    tampilkanList(head);        // Tampilkan isi linked list

    return 0;
}
