#include<stdio.h>

int main(){
    int n,i;
    
    printf("saisir un nombre \n");
    scanf("%d",&n);
    for (i=n; i>0; i--)
    {
        printf("afficher les autres nombres %d\n",i);
    }
    
    return 0;
}