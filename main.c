#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 
int main()
{
	char message[100]; 
	char ch;
	int i = 0, key = 0;

	
	printf("Enter a message to encrypt: ");
	 /*fgets(message, 100, stdin);*/
	gets (message); 
	printf("Enter key: (hit enter twice afterwards)");
	getchar();
	scanf(" %i", &key);
	printf ("key entered = %d\n", key);

	
        for(i = 0; message[i] != '\0'; i++) {
		ch = message[i];
		
		if(ch >= ' ' && ch <= '~') {
			ch = ch + key;
			
			if(ch > '~') {
			    ch = ch - key;
			    
			//	ch = ch - '~' + ' ';
			}
			
			message[i] = ch;
		}
	
	}


	
	printf("Encrypted message: %s", message);
	
	return 0;
}