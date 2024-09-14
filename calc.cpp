#include <iostream>   
#include <cmath>      

using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);


int main() {
    double num1, num2, result;
    int choice;

    cout << "Kalkulator" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Perpangkatan" << endl;
    cout << "6. Akar kuadrat" << endl;
    cout << "Pilih operasi yang diinginkan (1-6): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Masukkan dua angka : ";
        cin >> num1 >> num2;
    } 
    else if (choice == 5 || choice == 6) {
        cout << "Masukkan angka : ";
        cin >> num1;
    }
    if (choice == 5) {
            cout << "Masukkan eksponen : ";
            cin >> num2;
    }

    if (choice == 1) {
        result = add(num1, num2);
        cout << "Hasil: " << result << endl;
    } 
    else if (choice == 2) {
        result = subtract(num1, num2);
        cout << "Hasil: " << result << endl;
    } 
    else if (choice == 3) {
        result = multiply(num1, num2);
        cout << "Hasil: " << result << endl;
    } 
    else if (choice == 4) {
        if (num2 != 0) {
            result = divide(num1, num2);
            cout << "Hasil: " << result << endl;
        } else {
            cout << "Error: Pembagian dengan nol tidak terdefinisi! " << endl;
        }
    } 
    else if (choice == 5) {
        result = pow(num1, num2);
        cout << "Hasil: " << result << endl;
    }
    else if (choice == 6) {
        result = sqrt(num1);
        cout << "Hasil: " << result << endl;
    }
    else {
        cout << "Pilihan invalid" << endl;
    }

    return 0;
}


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}



