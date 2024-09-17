#include <iostream>
using namespace std;

void pindahkanPiringan(int jumlahPiringan, char menaraAsal, char menaraTujuan, char menaraSementara) {
    if (jumlahPiringan == 1) {
        cout << "Pindahkan piringan 1 dari " << menaraAsal << " ke " << menaraTujuan << endl;
        return;
    }
    
    pindahkanPiringan(jumlahPiringan - 1, menaraAsal, menaraSementara, menaraTujuan);
    
    cout << "Pindahkan piringan " << jumlahPiringan << " dari " << menaraAsal << " ke " << menaraTujuan << endl;
    
    pindahkanPiringan(jumlahPiringan - 1, menaraSementara, menaraTujuan, menaraAsal);
}

int main() {
    int jumlahPiringan = 3;
    pindahkanPiringan(jumlahPiringan, 'A', 'C', 'B');
    return 0;
}
