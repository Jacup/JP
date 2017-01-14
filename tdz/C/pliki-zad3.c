#include<stdio.h>
#include "string.h"
/*
 Zad 3. Napisz program, ktory otwiera plik nowe_dane.txt i sprawdza czy osoba o wpisanym z klawiatury
Imieniu i nazwisku jest na liscie i jesli nie, to dopisuje ja w kolejnosci alfabetycznej.
*/

int main(){
FILE * fp, * out;
char imie[30], nazwisko[30];
char newImie[30], newNazwisko[30];
int zarobek;
int pensja;
int count;
int written;
// sprawdzenie czy sie zapisalo:
fp = fopen("nowe-dane.txt","r");
out = fopen ("nowa-lista.txt","w");

printf("podaj imie\n");
scanf("%s",newImie);
printf("podaj nazwisko\n");
scanf("%s",newNazwisko);
printf("podaj pensje\n");
scanf("%d",&pensja);

count = 0;
written = 0;

    while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&zarobek) == 3 && (!written)) {
          count++;
        if ((strcmp(newImie,imie)==0) && (strcmp(newNazwisko,nazwisko)==0))
        printf("ta osoba jest na liscie");
        else { if (strcmp(newNazwisko,nazwisko) > 0)
             fprintf(out,"%s %s %d",imie,nazwisko,zarobek); //przepisz nazwisko do nowego pliku
             else {
             fprintf(out,"%s %s %d",newImie,newNazwisko,pensja); //przepisz nowe nazwisko
             fprintf(out,"%s %s %d",imie,nazwisko,zarobek); // i to z ktorym porownywales tez
             written = 1;
             }
             }
}

if (count ==0 || (!written)) fprintf(out,"%s %s %d",newImie,newNazwisko,pensja); //jesli plik pusty lub wszystkie nazwiska poprzedzajace nowe

if (written)
while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&zarobek) == 3) // przepisz reszte nazwisk
fprintf(out,"%s %s %d\n",imie,nazwisko,zarobek);

    fclose(fp);
remove("nowe-dane.txt");
    fclose(out);

    //system("pause"); //
 return 0;
}
