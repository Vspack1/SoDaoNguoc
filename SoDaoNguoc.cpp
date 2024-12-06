#include <iostream>  

using namespace std;

int main() {
    int n;
    cout << "Nhap so: ";
    cin >> n;

    int tam = n;
    int soDaoNguoc = 0;

    while (n > 0) {
        int digit = n % 10;
        soDaoNguoc = soDaoNguoc * 10 + digit;
        n /= 10;
    }

    if (tam == soDaoNguoc) {
        cout << tam << " la so dao nguoc." << endl;
    }
    else {
        cout << tam << " khong phai la so dao nguoc." << endl;
    }

    return 0;
}