#include <iostream>
#include <fstream>
using namespace std;

struct birthday
{
	string nama;
	string bulan;	
	string tanggal;
	int tanggalint;
	int point;
}urutan[100];

void id(int &x)
{
	cin.ignore();
	a:
	cout << "Menu 1\n";
	cout << "Nama    : ";
	getline(cin,urutan[0].nama);
	cout << "Tanggal : ";
	getline(cin,urutan[0].tanggal);
	ofstream tulis;
	tulis.open("data.txt");
	tulis << urutan[0].tanggal;
	tulis.close();
	ifstream baca;
	baca.open("data.txt");
	baca >> urutan[0].tanggalint;
	baca >> urutan[0].bulan;
	baca.close();
	if(urutan[0].bulan == "januari" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 0;
	}
	else if(urutan[0].bulan == "februari" && urutan[0].tanggalint <= 29)
	{
		urutan[0].point = urutan[0].tanggalint + 31;	
	}
	else if(urutan[0].bulan == "maret" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 60;
	}
	else if(urutan[0].bulan == "april" && urutan[0].tanggalint <= 30)
	{
		urutan[0].point = urutan[0].tanggalint + 91;	
	}
	else if(urutan[0].bulan == "mei" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 121;	
	}
	else if(urutan[0].bulan == "juni" && urutan[0].tanggalint <= 30)
	{
		urutan[0].point = urutan[0].tanggalint + 152;
	}
	else if(urutan[0].bulan == "juli" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 182;
	}
	else if(urutan[0].bulan == "agustus" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 213;	
	}
	else if(urutan[0].bulan == "september" && urutan[0].tanggalint <= 30)
	{
		urutan[0].point = urutan[0].tanggalint + 244;
	}
	else if(urutan[0].bulan == "oktober" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 274;
	}
	else if(urutan[0].bulan == "november" && urutan[0].tanggalint <= 30)
	{
		urutan[0].point = urutan[0].tanggalint + 305;
	}
	else if(urutan[0].bulan == "desember" && urutan[0].tanggalint <= 31)
	{
		urutan[0].point = urutan[0].tanggalint + 335;
	}
	else
	{
		cout << "\n\nTidak Ditemukan\n\n";
		system("pause");
		system("cls");
		goto a;
	}
	x++;
	if(x == 1)
	{
		urutan[1] = urutan[0];
	}
	else if(urutan[0].point < urutan[1].point)
	{
		for(int y = x ; y > 1 ; y--)
		{
			urutan[y] = urutan[y - 1];
		}
		urutan[1] = urutan[0];
	}
	else if(urutan[0].point > urutan[x - 1].point)
	{
		urutan[x] = urutan[0];
	}
	else
	{
		int z;
		z = 1;
		while(urutan[z].point < urutan[0].point)
		{
			z++;
		}
		urutan[z + 1] = urutan[0];
	}
}

void ld(int x)
{
	cout << "Menu 2\n\n";
	for(int a = 1 ; a <= x ; a++)
	{
		cout << "Nama : ";
		cout << urutan[a].nama << endl;
		cout << "Tangga : ";
		cout << urutan[a].tanggal;
		cout << "\n\n";
	}
	system("pause");
}

main()
{
	int input;
	int jumlah;
	jumlah = 0;
	awal:
	system("cls");
	cout << "1.Input Data\n";
	cout << "2.Lihat Data\n";
	cout << "3.Keluar\n";
	cin >> input;
	system("cls");
	switch(input)
	{
		case 1:
			id(jumlah);
			break;
		case 2:
			ld(jumlah);
			break;
		case 3:
			return 0;
			break;
	}
	goto awal;
}
