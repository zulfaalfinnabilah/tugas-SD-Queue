#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 8
#include <iostream>
using namespace std;

typedef struct 
	{
	int data [MAX];
	int head ;
	int tail ;
	}Queue;

Queue antrian ;
	void Creat ()
	{
		antrian.head = antrian.tail = -1 ;
	}
	
	int IsEmpety ()
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
	
	void Enqueue (int data)
	{
		if (IsEmpety()==1)
		{
			antrian.head = antrian.tail = 0 ;
			antrian.data [antrian.tail] = data ;
			printf ("%d masuk!" , antrian.data[antrian.tail]);
			void Tampil ();
			{
				if (IsEmpety ()==0)
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
		
	int Dequeue() {
		int i ;
		int e = antrian.data[antrian.head];
		for (i=antrian.head ; i<=antrian.tail - 1 ; i++)
		{
			antrian.data [i] = antrian.data [i+1];
		}
		antrian.tail-- ;
		return e;
}
	
	void Clear ()
	{
		antrian.head = antrian.tail = -1 ;
		printf("data clear");
	}	
	
	void Tampil ()
	{
		int jum = 0 ;
			if (IsEmpety()==0)
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
	
	void operasidata (int pill)
	{
		int jum=0;
		int b=antrian.tail+1 ;
		float avg;
		if (IsEmpety()==0)
		{
			for(int i=antrian.head; i<=antrian.tail; i++)
			{
				jum = jum+antrian.data[i];
			}
			avg=jum/b;
			switch (pill){
				case 1 : 
				cout <<"jumlah datanya ="<<jum;
				break;
				
				case 2 :
				cout<<"rata-ratanya ="<<avg;
				break;
				
				case 3 :
				cout<<"banyak datanya="<<antrian.tail+1;
				break;
				default:
				break;
			}
		}
	}

	
	int main()
	{
		int pil ;
		int data;
		int Create ();
		do{
			system ("CLS");
			printf ("MENU ANTRIAN\n");
			printf ("1. Enqueue\n");
			printf ("2. Dequeue\n");
			printf ("3. Tampil\n");
			printf ("4. Clear\n");
			printf ("5. Banyak Data\n");
			printf ("6. Rata-rata\n");
			printf ("7. Jumlah Data\n");
			printf ("8. Exit\n");
			printf ("Pilihan = "); scanf ("%d", &pil); switch (pil){
				case 1 : printf ("Data = ") ; scanf ("%d", &data); Enqueue (data); break;
				case 2 : printf ("Elemen yang keluar : %d", Dequeue ()); break;
				case 3 : Tampil (); break;
				case 4 : Clear (); break;
				case 5 : operasidata (3) ; break;
				case 6 : operasidata (2) ; break;
				case 7 : operasidata (1); break;
		getch ();} 
		} while (pil!=8);
}
