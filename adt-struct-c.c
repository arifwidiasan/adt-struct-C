#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//link github : https://github.com/arifwidiasan

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data_mahasiswa{
	char *nama[30];
	int nilai;
};
typedef struct data_mahasiswa mhs;

void simpan(mhs *mh,char *nama, int nilai){
    strcpy(mh->nama,nama);
    mh->nilai = nilai;
}

void tampil(mhs *mh,int i){
    printf("%d. \t%s \t%d\t",i+1,mh->nama,mh->nilai);
	if(mh->nilai<=100&&mh->nilai>80){
		printf("A\n");
	}else if(mh->nilai<=80&&mh->nilai>70){
		printf("B\n");
	}else if(mh->nilai<=70&&mh->nilai>60){
		printf("C\n");
	}else if(mh->nilai<=60&&mh->nilai>50){
		printf("D\n");
	}else if(mh->nilai<=50&&mh->nilai>=0){
		printf("E\n");
	}else{
		printf("Input Nilai Salah\n");
	}
}


void main() {
	char nama[30][30];
	int k,i,nilai;
	char pilih;
	mhs list[k];
	printf("\nMasukan banyak data mahasiswa = ");
	scanf(" %d",&k);
	printf("\n====================================");
	//perulangan input data
	for(i=0;i<k;i++){
		printf("\nMahasiswa ke - %d\n",i+1);
		printf("\t- Nama Mahasiswa : ");
		scanf(" %[^\n]%*c",&nama);
		printf("\t- Nilai Mahasiswa (1-100) : ");
		scanf(" %d",&nilai);
		simpan(&list[i],nama,nilai);
	}
	printf("\nData berhasil diinput, apakah anda ingin menampilkan data nilai mahasiswa ? [Y/N] = ");
	scanf(" %c",&pilih);
	if(pilih=='y'||pilih=='Y'){
		system("cls");
		printf("\n=========== Daftar Nilai Ujian Mahasiswa ===========\n");
	printf("No. \tNama \t Nilai\t Grade\n");
	//perulangan tampil data
	for(i=0;i<k;i++){
		tampil(&list[i],i);
	};
	printf("=========== Terima Kasih ===========\n");
	getch();
	}else{
		printf("\nTerima Kasih!");
	}
	
	
}
