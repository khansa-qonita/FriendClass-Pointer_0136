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
