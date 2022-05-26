#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
char odabir[8];
int nestojeodabrano=1;
float sum=0;
int i;

while(nestojeodabrano){
system("cls");
printf("\t\t Meni:\n");
printf("\t\t 1 kava\n");
printf("\t\t 2 sladoled\n");
printf("\t\t 3 govno\n");
printf("\t\t 4 krofna\n");
printf("Za prestanak unosa unesite bilo sto drugo\n");

scanf("%s",odabir);


for( i=0; odabir[1]!='\0';i++)
    odabir[i]=tolower(odabir[i]);

if(!strcmp(odabir,"kava")|!strcmp(odabir,"1")) sum+=120;
else if(!strcmp(odabir,"sladole")|!strcmp(odabir,"2")) sum+=1.5;
else if(!strcmp(odabir,"govno")|!strcmp(odabir,"3")) sum+=25;
else if(!strcmp(odabir,"krofna")|!strcmp(odabir,"4")) sum+=1500;
else nestojeodabrano=0;

}

printf("ukupno promet danas iznosi %.2f",sum);
}
