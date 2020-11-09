#include<stdio.h>

int main(){
    int i;
    
    
    printf("saisir un nombre \n");
    scanf("%d",&i);
    do
    {
        printf("afficher les autres nombres %d\n",i);
    } while (i<10,i--);

    return 0;
}