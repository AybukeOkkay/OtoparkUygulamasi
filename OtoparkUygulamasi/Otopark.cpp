#include "Otopark.h"
#include<iostream>

using namespace std;

void Otopark::hesapla()
{
	cout << "Saat: "; cin >> saat;
	if (secim == 1)
		toplamUcret = 10 + saat * 3;
	else if (secim == 2)
		toplamUcret = 14 + saat * 5;
	else if (secim == 3)
		toplamUcret = 18 + saat * 7;

	system("cls");

	cout << "Toplam Ücret: " << toplamUcret << "TL" << endl;

	system("pause");


}
void Otopark::menu()
{
	while (true)
	{
		system("cls"); //Ekran temizleme

		cout << "Otopark Uygulamsi" << endl;
		cout << "Arac Cinsleri: " << endl; //taksi 10, minibus 14, ticari arac 18
		cout << "[1] Taksi " << endl;
		cout << "[2] Minibus " << endl;
		cout << "[3] Ticari Arac " << endl;
		cout << "[0] CIKIS " << endl;
		cout << "Seciminiz: "; cin >> secim;

		if (secim == 0)
		{
			cout << "Uygulamadan cikildi!";
			break;
		}
		else if (secim > 0 && secim < 4)
		{
			arabaCinsi = secim;
			hesapla();
		}

	}

}