#include<stdio.h>
#include<string.h>
#include<ctype.h>
   int main()

{
    char c;
    do
    {    
    printf("Entrer un caractère: \n");
    scanf(" %c", &c);
        } while  (isalpha(c) == 0);

       if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')  {
    printf("%c est une voyelle.\n", c);
  }
    else {
      printf("%c est une consonne.\n", c);
  }
    return 0;
}


