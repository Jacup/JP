/*
 Zad 4. Napisz program, ktory otwiera plik nowe-dane.txt i usuwa z niego podane nazwisko, lub wypisuje na ekran napis "tego nazwiska nie ma w bazie". Baze z nowymi nazwiskami zapisuje w pliku
nowe-dane-v1.txt, plik nowe-dane.txt ma byc usuniety funkcja remove("nowe-dane.txt");
*/

#include<stdio.h>
#include"string.h"

int main(){
FILE *fp, *out;
char imie[30], nazwisko[30];
char newImie[30], newNazwisko[30];
int zarobek;
int pensja;
int jest;
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

jest = 0;
written = 0;

    while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&pensja) == 3 && (!jest)) {
          written++;
        if ((strcmp(newImie,imie)==0) && (strcmp(newNazwisko,nazwisko)==0))
        jest++;
        }
        if (jest) {
        fclose(fp);
        fp=fopen("nowe-dane.txt","r");
        while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&pensja) == 3) {
              if (strcmp(newNazwisko,nazwisko)!=0)
              fprintf(out,"%s %s %d\n",imie,nazwisko,pensja);
        }}
        else
        printf("nie ma tego nazwiska na liscie");
    // jesli jest na liscie


    fclose(fp);
    remove("nowe-dane.txt");
    fclose(out);

    //system("pause");
    return 0;
}
