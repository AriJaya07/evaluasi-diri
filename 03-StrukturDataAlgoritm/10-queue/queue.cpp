#include <iostream>
using namespace std;


struct Queue {
    int data[100];
    int front, rear, size;

    Queue() {
        front = 0;
        rear = -1;
        size = 0;
    }

    void enqueue(int val) {
        if (size < 100) {
            rear = (rear + 1) % 100;  // pindah rear ke index berikutnya secara circular
            data[rear] = val;          // simpan nilai di posisi rear
            size++;                    // tambah ukuran queue
        } else {
            cout << "Queue penuh\n";   // jika queue penuh, tampilkan pesan
        }
    }

    int dequeue() {
        if (size > 0) {
            int val = data[front];      // ambil nilai dari posisi depan queue
            front = (front + 1) % 100; // pindah front ke index berikutnya secara circular
            size--;                    // kurangi ukuran queue
            return val;                // kembalikan nilai yang diambil
        }
        cout << "Queue kosong\n";       // jika queue kosong, tampilkan pesan
        return -1;                      // kembalikan -1 sebagai tanda queue kosong
    }

    bool isEmpty() {
        return size == 0;               // cek apakah queue kosong
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    cout << "Dequeue: " << q.dequeue() << endl;  // keluarkan 5
    cout << "Dequeue: " << q.dequeue() << endl;  // keluarkan 10
    cout << "Dequeue: " << q.dequeue() << endl;  // queue kosong, output -1

    return 0;
}
