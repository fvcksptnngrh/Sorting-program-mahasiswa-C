#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct grades{
    char nma[100];
    int struktur;
    int automata;
    int kritis;
    float mean;
};
struct grades person[100];
int banyakMahasiswa;

char carinama[50];
float rata (float a, float b, float c){
    float x = (a+b+c)/3;
    return x;
}

int main()
{
    int input = 0;

    do{

    menu:
    system("cls");
    printf("============================================\n");
    printf("==== Program Mahasiswa S1 - TI FTI UKSW ====\n");
    printf("============================================\n");

    printf("1.Input Data Mahasiswa\n");
    printf("2.Lihat Data Mahasiswa\n");
    printf("3.Cari Data Mahasiswa\n");
    printf("4.Urutkan Data Mahasiswa\n");
    printf("5.Exit\n");
    printf("Masukan Pilihan : ");
    scanf("%d,", &input);
    switch(input){
    case 1 :
          system("cls");
          inputMahasiswa();
          getch();
          goto menu;

    case 2 :
          system("cls");
          lihatMahasiswa();
          getch();
          goto menu;
    break;

    case 3 :
          system("cls");
          cariMahasiswa();
          getch();
          goto menu;
    break;

    case 4 :
          system("cls");
          urutMahasiswa();
          getch();
          goto menu;
    break;

    case 5 :
            exit(0);

    default :
        printf("\n\nMENU NYA GA ADA KOK DI CARI SIHH");
        getch();
        goto menu;
    }
}
while (input !=6);

return 0;
}


void inputMahasiswa(){
    int i;
    printf("\t\t\t\t\t============================================\n");
    printf("\t\t\t\t\t========== Input Data Mahasiswa ============\n");
    printf("\t\t\t\t\t============================================\n\n");
    fflush(stdin);

    printf ("Jumlah Mahasiswa : ");
    scanf ("%d", &banyakMahasiswa);

    for (i = 0; i<banyakMahasiswa; i++){
    printf ("\nMahasiswa ke- %d\n", i+1);
    printf("Nama Mahasiwa  \t\t: ");
    scanf (" %[^\n]", &person[i].nma);

    printf("Nilai ASD      \t\t:");
    scanf(" %d", &person[i].struktur);

    printf("Nilai automata \t\t:");
    scanf(" %d", &person[i].automata);

    printf("Nilai Berfikir Kritis\t:");
    scanf(" %d", &person[i].kritis);

    person[i].mean = rata(person[i].struktur,person[i].automata,person[i].kritis);
    }
    printf("\n");
    system("pause > nul | echo Tekan apa saja untuk kembali . . . ");
}

void lihatMahasiswa(){
     int i;
     printf("\t\t\t\t\t|===========================================|\n");
     printf("\t\t\t\t\t|           Data Mahasiwa Baru              |\n");
     printf("\t\t\t\t\t|===========================================|\n");

   for (i = 0; i<banyakMahasiswa; i++) {
        printf ("\nMahasiswa ke- %d\n", i+1);
        printf ("Nama Mahasiwa  \t\t: %s\n", person[i].nma);
        printf ("Nilai ASD      \t\t: %d\n", person[i].struktur);
        printf ("Nilai automata \t\t: %d\n", person[i].automata);
        printf ("Nilai Berfikir Kritis\t: %d\n", person[i].kritis);
        printf ("Rata rata nilai\t\t: %2f\n", person[i].mean);


    }
    printf("\n");
    system("pause > nul | echo Tekan apa saja untuk kembali . . . ");
}

void cariMahasiswa()
{
    char nama[50];
    int i, flag = 0;
    printf("\t\t\t\t\t============================================\n");
    printf("\t\t\t\t\t============ Cari Data Mahasiswa ===========\n");
    printf("\t\t\t\t\t============================================\n");
    printf("\nMasukkan Nama Mahasiswa Yang Ingin Dicari: ");
    scanf(" %[^\n]", &nama);

    for (i = 0; i < banyakMahasiswa; i++) {
        if (strcmp(nama, person[i].nma) == 0) {
            printf("\nMahasiswa dengan nama '%s' ditemukan pada data ke-%d\n", nama, i+1);
            printf("\nData ditemukan!!");
            printf("\nMahasiswa ke- %d\n", i+1);
            printf("Nama Mahasiwa  \t\t: %s\n", person[i].nma);
            printf("Nilai ASD      \t\t: %d\n", person[i].struktur);
            printf("Nilai automata \t\t: %d\n", person[i].automata);
            printf("Nilai Berfikir Kritis\t: %d\n", person[i].kritis);
            printf("Rata rata nilai\t\t: %2f\n", person[i].mean);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("\nData tidak ditemukan!!");
        printf("\nMohon Mengisi Data dengan Benar!!");
    }
    printf("\n");
    system("pause > nul | echo Tekan apa saja untuk kembali . . . ");
}




void urutMahasiswa()
{
    int i,j;
    struct grades temp;

    printf("\t\t\t\t\t=============================================\n");
    printf("\t\t\t\t\t============Urutan Data Mahasiswa============\n");
    printf("\t\t\t\t\t=============================================\n\n\n\n");


    for(i=0; i<banyakMahasiswa-1; i++)
    {
        for(j=0; j<banyakMahasiswa-i-1; j++)
        {
            if(strcmp(person[j].nma, person[j+1].nma) > 0)
            {

                temp = person[j];
                person[j] = person[j+1];
                person[j+1] = temp;
            }
        }
    }


    printf("===============================================================================\n");
    printf("|   Nama   |   Nilai ASD   |    Nilai Automata   |    Nilai Berfikir Kritis    |\n");
    printf("===============================================================================\n");
    for(i=0; i<banyakMahasiswa; i++)
    {
        printf("|%10s|%15d|%21d|%29d|\n", person[i].nma, person[i].struktur, person[i].automata, person[i].kritis);
    }
    printf("===============================================================================\n");

    printf("\n\n");
    system("pause > nul | echo Tekan apa saja untuk kembali . . . ");
}