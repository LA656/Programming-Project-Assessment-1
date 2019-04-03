#include <stdio.h>

int main ()
{
    char message [100] = "quick brown fox jumps over lazy dog\0"; 
    int length = 100;
    int index = 35;
    int key = 4;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    
     char L ;

char new_l;
//    printf ("Enter encryption key: ");
   // scanf ("%d", &key);
    
    for (index = 0; index < length; ++index)
    {
        
 L = message[index]; 
    if (L == '\0')
        {
        break;
        }
    
 new_l = L+key;
    
    message[index] = new_l;

    }       
    printf("%c, %d %c, %d\n", L, L, new_l, new_l);
    
    printf("%s\n", message);
    
    return 0; 
}