#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*  Numara:17010011089 
	Ad:Muhammet Yusuf
    Soyad:Piroglu
*/

int main(int argc, char *argv[]) {
	
	printf("\t\t\t\t\tHesap Makinesi\n\n\n");
	int secim,menuSecim=5;
	float float1,float2,sonuc;
	int integer,integer1;
	
	while(1){
		system("cls");
	printf("[1]Basit Hesap\n");
	printf("[2]Gelismis Hesap\n");
	printf("[3]Cikis\n");
	printf("Secim=");
	scanf("%d",&secim);
	switch(secim){
		case 1:
		while(1){
				system("cls");
			printf("\t\t\t\t\tBasit hesap\n\n");
			printf("[1]Toplama\n");
			printf("[2]Cikarma\n");
			printf("[3]Carpma\n");
			printf("[4]Bolme\n");
			printf("[5]Geri\n");
			printf("Secim:");
			scanf("%d",&menuSecim);
			if(menuSecim==5)
			break;
			switch(menuSecim){
				case 1:
					system("cls");
					printf("\t\t\tToplama Islemi\n\n");
					printf("1. Sayiyi giriniz:");
					scanf("%f",&float1);
					printf("2. Sayiyi giriniz:");
					scanf("%f",&float2);
					sonuc=float1+float2;
					printf("Sonuc=%.0f",sonuc);
					printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
					getch("%d",&menuSecim);
					if(menuSecim==1)
					break;
					break;					
					case 2:
							system("cls");
					printf("\t\t\tCikarma Islemi\n\n");
					printf("1. Sayiyi giriniz:");
					scanf("%f",&float1);
					printf("2. Sayiyi giriniz:");
					scanf("%f",&float2);
					sonuc=float1-float2;
					printf("Sonuc=%.1f",sonuc);
					printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
					getch("%d",&menuSecim);
					if(menuSecim==1)
					break;
						break;
						case 3:
								system("cls");
					printf("\t\t\tCarpma Islemi\n\n");
					printf("1. Sayiyi giriniz:");
					scanf("%f",&float1);
					printf("2. Sayiyi giriniz:");
					scanf("%f",&float2);
					sonuc=float1*float2;
					printf("Sonuc=%.1f",sonuc);
					printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
					getch("%d",&menuSecim);
					if(menuSecim==1)
					break;
							break;
							case 4:
					system("cls");
					printf("\t\t\tBolme Islemi\n\n");
					printf("1. Sayiyi giriniz:");
					scanf("%f",&float1);
					printf("2. Sayiyi giriniz:");
					scanf("%f",&float2);
					sonuc=float1/float2;
					printf("Sonuc=%.1f",sonuc);
					printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
					getch("%d",&menuSecim);
					if(menuSecim==1)
					break;
								break;
								case 5:
									break;
			}
			
		}
		break;
		
			case 2:
			//	printf("gelismis");
			while(1){
				system("cls");
				printf("\t\t\t\t\tGelismis Hesap\n");
				printf("[1]Toplama\n");
				printf("[2]Cikarma\n");
				printf("[3]Carpma\n");
				printf("[4]Bolme\n");
				printf("[5]Logaritma\n");
				printf("[6]Karekok Hesaplama\n");
				printf("[7]Us Alma\n");
				printf("[8]Mod Alma\n");
				printf("[9]Geri\n");
				printf("Secim:\n");
				scanf("%d",&menuSecim);
				if(menuSecim == 9)
				break;
				switch(menuSecim){
					case 1:
						system("cls");
						printf("\t\t\tToplama Islemi\n\n");
						printf("1. Sayiyi giriniz:");
						scanf("%f",&float1);
						printf("2. Sayiyi giriniz:");
						scanf("%f",&float2);
						sonuc=float1+float2;
						printf("Sonuc=%.2f",sonuc);
						printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
						getch("%d",&menuSecim);
						if(menuSecim==1)
						break;						
						break;
						case 2:
							system("cls");
							printf("\t\t\tCikarma Islemi\n\n");
							printf("1. Sayiyi giriniz:");
							scanf("%f",&float1);
							printf("2. Sayiyi giriniz:");
							scanf("%f",&float2);
							sonuc=float1-float2;
							printf("Sonuc=%.2f",sonuc);
							printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
							getch("%d",&menuSecim);
							if(menuSecim==1)
							break;
							break;
							case 3:
								system("cls");
								printf("\t\t\Carpma Islemi\n\n");
								printf("1. Sayiyi giriniz:");
								scanf("%f",&float1);
								printf("2. Sayiyi giriniz:");
								scanf("%f",&float2);
								sonuc=float1*float2;
								printf("Sonuc=%.2f",sonuc);
								printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
								getch("%d",&menuSecim);
								if(menuSecim==1)
								break;
								break;
								case 4:
									system("cls");
									printf("\t\t\tBolme Islemi\n\n");
									printf("1. Sayiyi giriniz:");
									scanf("%f",&float1);
									printf("2. Sayiyi giriniz:");
									scanf("%f",&float2);
									sonuc=float1/float2;
									printf("Sonuc=%.2f",sonuc);
									printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
									getch("%d",&menuSecim);
									if(menuSecim==1)
									break;
									break;
									case 5:
										system("cls");
										printf("\t\t\tLogaritma Hesaplama \n\n");
										printf("Kac tabaninda Log hesaplamak isterseniz:");
										scanf("%d",&integer);
										integer1=log(integer);
										printf("Sonuc=%d\n",integer1);
										printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
										getch("%d",&menuSecim);
										if(menuSecim==1)
										break;
										case 6:
											system("cls");
											printf("\t\t\tKarekok Hesaplama \n\n");
											printf("Karekokunu hesaplamak istediginiz sayiyi giriniz:");
											scanf("%f",&float1);
											sonuc=sqrt(float1);
											printf("Sonuc=%.1f",sonuc);
											printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
											getch("%d",&menuSecim);
											if(menuSecim==1)
											break;
											break;
											case 7:
												system("cls");
												printf("\t\t\tUs Alma  \n\n");
												printf("X uzeri y icin x-y seklinde  degerlerini giriniz:");
									            scanf("%d-%d",&integer,&integer1);
									            integer=pow(integer,integer1);
									            printf("Sonuc= %d",integer);
									            printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
												getch("%d",&menuSecim);
												if(menuSecim==1)
												break;
												break;
													case 8:
												system("cls");
												printf("\t\t\t\tMod Alma\n");
									            printf("Sayiyi giriniz:");
									            scanf("%d",&integer);
									            printf("Mod degerini giriniz:");
									            scanf("%d",&integer1);
									            integer=integer % integer1;
									            printf("Sonuc=%d\n",integer);
									            printf("\n\nGeri gelmek icin bir tusa basiniz!\n");
												getch("%d",&menuSecim);
												if(menuSecim==1)
												break;
												break;
								
				}
				
			}
			
				break;
					default:
						printf("Program Sonlaniyor...");
						break;
	}
	if(secim == 3){
		break;
	}
	
	}
	printf("\nTekrar Bekleriz :)\n");

		
	
	

	return 0;
}
