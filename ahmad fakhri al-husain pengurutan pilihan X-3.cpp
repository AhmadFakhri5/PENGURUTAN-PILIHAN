#include<stdli.h>
#incude<iostream>
using namespace std;

int indesk_NilaiMin(int array[], int indeksAwal,int n)
{
	int nilaiMin = array[indeksAwal];
	int indeksMin = indeksAwal;
	
	for(int i = indeksMin + 1; i < n; i++){
		if(array[i] < nilaiMin)
		{
			indeksMin = i;
			nilaiMin = array[1];
		}
	}
	return indeksMin;
}

void Selection_Sort(int array[], int n)
{
	int buffer, indeks;
	for(int i = 0; i < n; i++)
	{
	indeks  = indeks_NilaiMin(array, i, n);
	buffer = array[i];
	array[i] = array[indeks];
	array[indeks] = buffer;
	}
}

int main()
{
	int i, n;
	cout << "Masukkan jumlah elemen yg diurutkan: ";
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Masukan bilangan ke-" << i+1 << " : ";
		  cin >> A[i];
	}
	Selection_Sort(A, n);
	cout<< "Hasil Pengurut Pilihan : ";
	for(i = 0; i < n; i++)
	{
		cout << " " << A[i];
	}
	cout<< end1;
	system ("Pause");
	return 0;
}
