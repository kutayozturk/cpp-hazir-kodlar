#include<iostream>
#include<stdlib.h>
#include<time.h>
 
using namespace std;
 
int main() 
{
    setlocale(LC_ALL,"Turkish"); // T�rk�e karakter sorunu d�zeltme
    int birinciSayi , ikinciSayi , ucuncuSayi;
    srand(time(NULL));
    birinciSayi = rand() % 100;
    ikinciSayi = rand() % 400 + 100;
    ucuncuSayi = rand() % 499 + 500;
    cout << "1. Say� (0 ile 99 aras�nda): " << birinciSayi << endl;
    cout << "2. Say� (100 ile 500 aras�nda): " << ikinciSayi << endl;
    cout << "3. Say� (500 ile 999 aras�nda): " << ucuncuSayi;
    return 0;
}
