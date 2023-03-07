#pragma once
#ifndef OTOPARK_H

class Otopark
{

private:
	int saat, secim, arabaCinsi, toplamUcret = 0;
	void hesapla();
public:
	void menu();
};


#endif  !OTOPARK_H
