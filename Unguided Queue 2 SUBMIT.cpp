#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 8


typedef struct 
	{
	int data [MAX];
	int head ;
	int tail ;
	}Queue;

Queue antrian ;
	void Create ()
	{
		antrian.head = antrian.tail = -1 ;
	}

	int IsEmpty ()
	{
		if (antrian.tail == -1)
		return 1;
		else
		return 0;
	}
	
	int IsFull ()
	{
		if (antrian.tail == MAX-1)
		return 1;
		else 
		return 0;
	}
	
	void Antrian (int data)
	{
		if (IsEmpty()==1)
		{
			antrian.head = antrian.tail = 0 ;
			antrian.data [antrian.tail] = data ;
			printf ("%d masuk!" , antrian.data[antrian.tail]);
			void Tampil ();
			{
				if (IsEmpty ()==0)
				{
					for (int i=antrian.head; i<=antrian.tail ; i++)
					{
					printf ("%d ", antrian.data[i]);
					}
				}
					else printf ("data kosong!\n");}
			}	else if (IsFull ()==0)
				{
					antrian.tail++ ;
					antrian.data[antrian.tail] = data ;
					printf("%d masuk", antrian.data[antrian.tail]);
					
				}
			}
		
	int Keluarkan() {
		int i ;
		int e = antrian.data[antrian.head];
		for (i=antrian.head ; i<=antrian.tail - 1 ; i++)
		{
			antrian.data [i] = antrian.data [i+1];
		}
		antrian.tail-- ;
		return e;
}

	void Tampil ()
	{
		int jum = 0 ;
			if (IsEmpty()==0)
			{
				for (int i= antrian.head ; i<=antrian.tail ; i++)
				{
					printf ("%d ",antrian.data[i]);
					jum=jum+antrian.data[i];
				}
			}
				else
				printf ("data kosong!\n");
	}
	
	int main()
	{
		int pil ;
		int data;
		int Create ();
		do{
			system ("CLS");
			printf ("************************\n");
			printf ("MENU PARKIRAN MOBIL\n");
			printf ("************************\n");
			printf ("1. Antrian Parkir Mobil\n");
			printf ("2. Keluarkan Mobil\n");
			printf ("3. Tampilkan Antrian Mobil\n");
			printf ("4. Exit\n");
			printf ("------------------------\n");
			printf ("Pilihan = "); scanf ("%d", &pil); switch (pil){
				case 1 : printf ("------------------------\n");printf ("Masukkan plat nomor mobil = ") ; scanf ("%d", &data); Antrian (data); break;
				case 2 : printf ("------------------------\n");printf ("Mobil yang keluar : %d", Keluarkan ()); break;
				case 3 : printf ("------------------------\n");Tampil (); break;
		getch ();} 
		} while (pil!=4);

}
