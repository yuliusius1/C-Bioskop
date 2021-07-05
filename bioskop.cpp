#include <stdio.h>
#include <stdlib.h>

int kursi[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
int nol = 0;
int main(){
	system("cls");
	int pilihan;
	printf("=====================================\n");
	printf("\tMenu Bioskop\n");
	printf("=====================================\n");
	printf("1. Lihat Kursi\n");
	printf("2. Pesan Kursi\n");
	printf("3. Hapus Kursi\n");
	printf("4. Exit\n");
	printf("Pilihanmu : ");
	scanf("%i",&pilihan);
	if (pilihan == 1) view();
	else if(pilihan == 2) pesan();
	else if(pilihan == 3) hapus();
	else if(pilihan == 4 ) exit(EXIT_SUCCESS);
}

int pesan(){
	int o;
	system("cls");
	printf("=====================================\n");
	printf("\tMenu Pesan Kursi\n");
	printf("=====================================\n");
	printf("Masukkan Nomor Kursi : ");
	scanf("%d",&o);
	if(kursi[o-1] == 0){
		printf("Kursi Telah Dipesan sebelumnya\n");
		system("pause");
		main();
	} else {
		kursi[o-1] = 0;
		printf("Berhasil Pesan Kursi !\n");
		view();
	}
		
	
}

int hapus(){
	int o;
	system("cls");
	printf("=====================================\n");
	printf("\tMenu Hapus Kursi\n");
	printf("=====================================\n");
	printf("Masukkan Nomor Kursi : ");
	scanf("%d",&o);
	if(kursi[o-1] == o){
		printf("Kursi Telah Dihapus sebelumnya\n");
		system("pause");
		main();
	} else {
		kursi[o-1] = o;
		printf("Berhasil Hapus Kursi !\n");
		view();
	}
}

int view(){
	int k = 0;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%3i ",kursi[k]);
			k++;
		}
		printf("\n");
	}
	system("pause");
	main();
}
