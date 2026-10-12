#include <iostream>
#include "BankAccount.h"
using namespace std;
int main() {
    // Khởi tạo một tài khoản mẫu
    BankAccount myAccount("0123456789", "Nguyen Van A", 50000.0);

    int choice = 0;
    do {
        std::cout << "\n========== MENU QUAN LY TAI KHOAN ==========\n";
        std::cout << "1. Xem thong tin tai khoan\n";
        std::cout << "2. Nap tien (Deposit)\n";
        std::cout << "3. Rut tien (Withdraw)\n";
        std::cout << "0. Thoat chuong trinh\n";
        std::cout << "============================================\n";
        std::cout << "Nhap lua chon cua ban (0 - 3): ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cout << "\n--- THONG TIN TAI KHOAN ---\n";
            myAccount.display();
            break;
        }
        case 2: {
            double amount = 0.0;
            std::cout << "Nhap so tien can nap: ";
            std::cin >> amount;

            if (myAccount.deposit(amount)) {
                std::cout << "-> Nap tien thanh cong!\n";
            }
            else {
                std::cout << "-> Nap that bai! So tien nap phai > 0.\n";
            }
            break;
        }
        case 3: {
            double amount = 0.0;
            std::cout << "Nhap so tien can rut: ";
            std::cin >> amount;

            if (myAccount.withdraw(amount)) {
                std::cout << "-> Rut tien thanh cong!\n";
            }
            else {
                std::cout << "-> Rut that bai! So du khong du hoac so tien khong hop le.\n";
            }
            break;
        }
        case 0: {
            std::cout << "Tam biet! Cam on ban da su dung dich vu.\n";
            break;
        }
        default: {
            std::cout << "Lua chon khong hop le! Vui long nhap tu 0 den 3.\n";
            break;
        }
        }
    } while (choice != 0);

    return 0;
}