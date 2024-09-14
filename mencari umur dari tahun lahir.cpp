#include <iostream>
#include <ctime>

int main() {
    int tahunKelahiran;
    std::cout << "Masukkan tahun kelahiran: ";
    std::cin >> tahunKelahiran;


    time_t t = time(0);
    tm* now = localtime(&t);
    int tahunSekarang = now->tm_year + 1900;

    int umur = tahunSekarang - tahunKelahiran;

    if (umur < 0) {
        std::cout << "Tahun kelahiran tidak valid." << std::endl;
    } else {
        std::cout << "Umur Anda adalah " << umur << " tahun." << std::endl;
    }

    return 0;
}
