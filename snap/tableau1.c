#include<stdio.h>

void tableauDonner(int tableau[], int taille){

int i,j,k;
int tableauNegatif[taille];
int tableauPositif[taille];
int negatif= 0;
int positif= 0;
    printf("tableau saisi : \n");
    for (i=0; i<taille; i++)
    printf("tableau[%d]=%d\n",i, tableau[i]);
    printf("\n");
    for (i=0, j=taille-1 ; i<j ; i++,j--)
      
        {
         k = tableau[i];
         tableau[i] = tableau[j];
         tableau[j] = k;
        }
    
 
 
 for (i=0, j=0 ; i<taille ; i++)
     {
      tableau[j] = tableau[i];
      if (tableau[i]) j++;
     }
 
     taille = j;
 
    printf("tableau inversé :\n");
    for (i=0; i<taille; i++)
    printf("tableau[%d]=%d \n",i, tableau[i]);
    printf("\n");
    
    
    for (i = 0; i < taille; i++)
    {
        if (tableau[i]<0)
        {
             
            tableauNegatif[negatif]=tableau[i];
           negatif++;
        }
        else
        {
            tableauPositif[positif]=tableau[i];
            positif++;
        }
        
        
    }
    printf("tableau negatif:\n");
    for (i = 0; i <negatif ; i++)
    {
        printf("%d\t", tableauNegatif[i]);
    }
    printf("\n");
    printf("tableau positif:\n");
    for ( i = 0; i < positif; i++)
    {
        printf("%d\t",tableauPositif[i]);
    }
    printf("\n");
    printf("les valeurs divisible par 2 sont:\n");
    for ( i = 0; i < taille; i++)
    {
        if (tableau[i]%2==0)
        {
            printf("%d\t", tableau[i]);
        }
        
    }
    
    printf("\n");
    
   
   
}