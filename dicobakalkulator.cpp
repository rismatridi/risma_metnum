#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

 int hasil;
 int a;
 int x;
 int y;
 int i;
 
 int tambah(int x, int y)
 {
 	hasil=x+y;
 	return hasil;
 }
 int kurang(int x, int y)
 {
 	hasil=x-y;
 	return hasil;
 }
 int kali(int x, int y)
 {
 	hasil=x*y;
 	return hasil;
 }
 
 int pangkat(int x, int y){
 	int hasil;
 	
 	hasil=pow(x,y);
 	return hasil;
 }
 void fungsi(int x,int y);	

 
int  main()
 {
 	int pil=1,x1,y1;
 	int hasil;
 	
	 while(pil!=5)
 	{
 		menu:
 		printf("************WELCOME TO KALKULATOR GINI GINI AJA***************");
 		printf("\n..........Mata Kuliah Metode Numerik........................");
 		printf("\n			Risma Trisdiyanti                              ");
 		printf("\n			3411151176								");
 		printf("\n			SIE C");
		printf("\n\n1. Penjumlahan");
		printf("\n\n2. Pengurangan");
		printf("\n\n3. Perkalian");
		printf("\n\n4. Pangkat");
		printf("\n\n5. Fungsi");
		printf("\n\nPilihan: ");
		scanf("%d",&pil);
		switch(pil)
		{
			case 1 : system("cls");
					 printf("Masukkan nilai x: ");
					 scanf("%d",&x1);
					 printf("Masukkan nilai y: ");
					 scanf("%d",&y1); 
					 hasil=tambah(x1,y1);
					 printf("Hasil dari X+Y adalah %d",hasil);
					 printf("\n");
					 getch();
					 system("cls");
					 goto menu;
					 
					 
			case 2 : system("cls");
					 printf("Masukkan nilai x:");
					 scanf("%d",&x1);
					 printf("Masukkan nilai y:");
				     scanf("%d",&y1); 
					 hasil=kurang(x1,y1);
					 printf("Hasil X-Y adalah %d",hasil);
					 printf("\n");
					 getch();
					 system("cls");
					 goto menu;
					 
			case 3 : system("cls");
					 printf("Masukkan nilai x:");
					 scanf("%d",&x1);
					 printf("Masukkan nilai y:");
				     scanf("%d",&y1); 
					 hasil=kali(x1,y1);
					 printf("Hasil x*y adalah %d",hasil);
					 printf("\n");
					 getch();
					 system("cls");
					 goto menu;
					 
			case 4 : system("cls");
   					 printf("Masukan nilai x: ");
   					 scanf("%d",&x1);
   					 printf("Masukan nilai y: ");
   					 scanf("%d",&y1);
   					 hasil = pangkat(x1,y1);
   					 printf("Hasil x^y adalah %d",hasil);  				 
					 getch();
					 system("cls");
					 goto menu;
					 
			case 5 : printf("OPERASI HITUNG F(X)");
	                        printf("\n---------------------------------------------\n");
				            printf("Masukan Bilangan x : ");
                            scanf("%d",&x1);
                            printf("Masukan Bilangan y : ");
                            scanf("%d",&y1);
                            
							for (i=x;i<=y;i++){
						        printf ("\nJika x = %d \n", i);
	                            hasil=((2 * (pow(i,2)) - ( 3 * i) + 1));
	                            printf("\nf(%d)=2(%d)^2 - 4(%d) + 1= %d", i, i, i, hasil);
	                            printf("\n---------------------------------------------\n");
						    }
						    
						    getch();
						    system("cls");
						    goto menu;
						    
						    getch();
						    system("cls");
						    goto menu;
			default : printf("Pilihan anda tidak terdaftar dalam menu");
			
		}
 	}
 		
 	
 }
  void fungsi(int x,int y)
 {	
 	int i,hasil2;
 	
 	for(i=x;i<=y;i++){
 	hasil2=(2*(i*i))-(3*i)+1;
 	printf("Hasil:%d\n",hasil2);
 	}
 	
 }
 
