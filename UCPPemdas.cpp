#include <iostream>
#include <vector>
using namespace std;

class Pengarang;
class penerbit{
public:
    string nama;
    vector<Pengarang*> daftar_Pengarang;
    penerbit(string pNama) :nama(pNama) {
        cout << "Penerbit \"" << nama << "\" ada\n";

    }
    ~penerbit() {
        cout << "Penerbit \"" << nama << "\" tidak ada\n";
    }
    void tambahPengarang(Pengarang*);
    void cetakPengarang();
};

class Pengarang{
public:
    string nama;
    vector<penerbit*> daftar_penerbit;

    Pengarang(string pNama) :nama(pNama) {
        cout << "Pengarang \"" << nama << "\" ada\n";
    }
    ~Pengarang() {
        cout << "Pengarang \"" << nama << "\" tidak ada\n";
    }

    void tambahPenerbit(penerbit*);
    void cetakPenerbit();
};
void penerbit::tambahPengarang(Pengarang* pPengarang) {
    daftar_Pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
    cout << "Daftar Pengarang yang menangani penerbit \"" << this->nama << "\":\n";
    for (auto& a : daftar_Pengarang) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

void Pengarang::tambahPenerbit(penerbit* pPenerbit) {
    daftar_penerbit.push_back(pPenerbit);
    pPenerbit->tambahPengarang(this);
}

void Buku ::cetakBuku() {
    cout << "Daftar Buku dari Penerbit \"" << judul buku << "\":\n";
    for (auto& a : daftar_Buku) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
int main()
{
    Pengarang* vaPengarang1 = new Pengarang("Giga");
    Pengarang* varPengarang2 = new Pengarang("Joko");
    Pengarang* varPengarang3 = new Pengarang("Asroni");

    varPengarang1->tambahBuku(varBuku1);
    varPengarang2->tambahBuku(varBuku2);
    varPengarang3->tambahBuku(varBuku3);

    varPengarang1->cetakBuku();
    varPengarang1->cetakBuku();

    varPenerbit1->tambahPengarang();
    varPenerbit2->tambahPengarang();

    delete varPenerbit1;
    delete varPenerbit2;
    delete varPengarang1;
    delete varPengarang2;

    return 0;
}
int main() {
    Pengarang* varPengarang = new Pengarang("dini");
    Pengarang* varPengarang2 = new Pengarang("novi");
    Penerbit* varPenerbit1 = new Penerbit("tono");
    Penerbit* varPenerbit2 = new Penerbit("rini");
    Penerbit* varPenerbit3 = new Penerbit("Dewi");

    varPengarang1->tambahBuku(varPenerbit1);
    varPengarang2->tambahBuku(varPenerbit2);
    varPengarang3->tambahBuku(varPenerbit3);
    varPengarang4->tambahBuku(varPenerbit4);

    varPengarang->cetakPenerbit();
    varPengarang2->cetakPenerbit();

    delete varPengarang;
    delete varPengarang2;
    delete varPenerbit1;
    delete varPenerbit2;
    delete varPenerbit3;

    return 0;
