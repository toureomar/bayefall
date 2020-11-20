#include <stdio.h>
#include "tableau1.h"
int main(){
 
 int tab[50]; 
 int n;    /*dimensio du tableau*/ 
 int i,j;   
 int k,element;  
int c,vrai;

    printf("Dimension du tableau (max.50) : ");
do
{
    vrai=scanf("%d", &n);
if((n >= 2 && n <=50) && vrai == 1){ 

    for (i=0; i<n;i++)
    {
    do{
      printf("Entrer l'elément %d : ", i);

     }while (scanf("%d", &element) !=1 && (c=getchar() != '\n' && c != EOF));
      tab[i] = element;
   }
   tableauDonner(tab, n);
 
}else
{
printf("Saisissez une valeur entiere et comprise entre 2 et 50 \n");
}

} while ((c=getchar() != '\n' && c != EOF) || (n<2 || n >50));
 return 0;
}