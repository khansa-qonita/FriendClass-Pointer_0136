#include <iostream>
#include <string>
using namespace std;


class BelahKetupat;
class LayangLayang {
    private:
    double d1, d2, s1, s2;

public:
    void input() {
        cout << "[ Input Layang-Layang ]" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi Miring 1: "; cin >> s1;
        cout << "Sisi Miring 2: "; cin >> s2;
    }
    double luas() {
        return 0.5 * d1 * d2;
    }
    double keliling() {
        return 2 * (s1 + s2);
    }
    void output() {
        cout << "Luas Layang-Layang: " << luas() << endl;
        cout << "Keliling Layang-Layang: " << keliling() << endl;
        cout << "---------------------------" << endl;
    }
    friend class BelahKetupat;
};

class BelahKetupat {
    private:
    double d1, d2, sisi;

public:
    void input() {
        cout << "[ Input Belah Ketupat ]" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi: "; cin >> sisi;
    }
    double luas() {
        return 0.5 * d1 * d2;
    }
    double keliling() {
        return 4 * sisi;
    }
    void cetakKelilingLayang(LayangLayang &l) {
        cout << "Akses via Friend: Keliling Layang-Layang adalah " << 2 * (l.s1 + l.s2) << endl;
    }
    void output() {
        cout << "Luas Belah Ketupat: " << luas() << endl;
        cout << "Keliling Belah Ketupat: " << keliling() << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    LayangLayang ly;
    BelahKetupat bk;

    ly.input();
    ly.output();

    bk.input();
    bk.output();

    bk.cetakKelilingLayang(ly);

    return 0;
}
