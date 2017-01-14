/*
Zad 2. Napisz program, ktory zapisuje wszystkie osoby o pensji
wyzszej badz rownej od podanej z klawiatury do drugiego pliku o nazwie wysokie-zarobki.txt
*/
#include <stdio.h>

int main(){
FILE * fp, * out;
char imie[30], nazwisko[30];
int zarobek;


// sprawdzenie czy sie zapisalo:
fp = fopen("dane.txt","r");
out = fopen ("wysokie-zarobki.txt","w");

    while (fscanf(fp,"%s %s %d\n",imie,nazwisko,&zarobek) == 3)
        if (zarobek >= 3000)
           fprintf(out,"%s %s %d\n",imie,nazwisko,zarobek);

    fclose(fp);
    fclose(out);

    //system("pause");
    return 0;
}
