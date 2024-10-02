#include <stdio.h>

int main()
{
    char frase, vocal;

    do
    {
        printf("Ingrese una vocal: ");
        scanf("%c", &vocal);
    } while (vocal != 'a' && vocal != 'e' && vocal != 'i' && vocal != 'o' && vocal != 'u');
    
        printf("Ingrese una frase: ");
        scanf("%c", &frase);

        while (frase != '.')
        {
            if (frase == 'a' || frase == 'e' || frase == 'i' || frase == 'o' || frase == 'u')
            {
                frase = vocal;
            }
            
            printf("%c", frase);
            scanf("%c", &frase);
        }
    
    return 0;
}
