#include<iostream>

using namespace std;
 
int main()
{
	int i, no, first = 0, second = 1, next;
	first = 0;
	second = 1;
	cout << "Bir sayi giriniz giriniz: "; 
	cin >> no;
	cout << "Fibonacci serisi: \n";
	
	for(i = 0; i < no; i++)
	{
		cout << "\n" << first;
		next = first + second;
		first = second;
		second = next;
	}
  	return 0;
}
