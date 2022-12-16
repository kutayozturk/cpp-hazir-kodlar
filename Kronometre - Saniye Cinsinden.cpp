#include <iostream>
#include <ctime>

using namespace std;

//Saniye cinsinden KRONOMETRE

int main()
{

	int x = 2;

	clock_t baslangic = clock(); // Kronometre baslangic degeri
 	for (int i=0; i<1000000000; i++)
	{
		x=2;
	}

	// Yukaridaki for dongusu ornek olması açısında eklenmiştir. Aslında dogru bir ornek degildir.

	clock_t bitis = clock(); // Kronometre bitis degeri
	cout << (double)(bitis - baslangic) / CLOCKS_PER_SEC << endl; // CLOCKS_PER_SEC clock'u saniyeye cinsine cevir

	return 0;
}
