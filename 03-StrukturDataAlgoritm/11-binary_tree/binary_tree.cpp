#include <iostream>
using namespace std;

// Struktur untuk node pohon biner
struct TreeNode {
    int data;           // Data yang disimpan di node
    TreeNode* left;     // Pointer ke anak kiri
    TreeNode* right;    // Pointer ke anak kanan

    // Konstruktor untuk inisialisasi node baru
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Fungsi untuk memasukkan nilai ke dalam pohon biner pencarian (BST)
TreeNode* insert(TreeNode* root, int val) {
    // Jika root kosong, buat node baru dan kembalikan
    if (!root) return new TreeNode(val);

    // Jika nilai lebih kecil dari data root, masukkan ke subtree kiri
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        // Jika nilai lebih besar atau sama, masukkan ke subtree kanan
        root->right = insert(root->right, val);

    // Kembalikan root yang sudah diupdate
    return root;
}

// Fungsi untuk traversal inorder (kunjungi kiri, root, kanan)
void inorder(TreeNode* root) {
    if (!root) return;          // Basis: jika node null, kembali

    inorder(root->left);        // Rekursif ke subtree kiri
    cout << root->data << " ";  // Cetak data root
    inorder(root->right);       // Rekursif ke subtree kanan
}

int main() {
    TreeNode* root = nullptr;   // Mulai dengan pohon kosong

    // Masukkan nilai-nilai ke dalam BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);

    // Cetak traversal inorder dari pohon
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
