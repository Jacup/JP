#include<stdio.h>
/*
Zad 1 a) Otworz plik o nazwie dane.txt do odczytu, i wypisz jego zawartosc na ekran.
           b) Otworz plik o nazwie dane.txt do dopisywania i dopisz do tego pliku dane:

Jan Kowalski 3000
Piotr Petla 4500
zamknij plik, a nastepnie wyswietl nowa zawarsc plikk
*/

int main(){
FILE * fp;
char imie[30], nazwisko[30];
int zarobek;
    fp = fopen("dane.txt","r");
//czesc a
    while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&zarobek) == 3)
    printf("%s %s %d\n",imie,nazwisko,zarobek);
    fclose(fp);
    printf("\n");
//czesc b
fp = fopen("dane.txt","a");
fprintf(fp,"%s %s %d\n","Jan","Kowalski",3333);
fprintf(fp,"%s %s %d\n","Piotr","Petla",4545);
fclose(fp);

// sprawdzenie czy sie zapisalo:
fp = fopen("dane.txt","r");
    while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&zarobek) == 3)
    printf("%s %s %d\n",imie,nazwisko,zarobek);
    fclose(fp);

    //system("pause");
    return 0;
}
