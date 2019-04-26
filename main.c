
#include <stdio.h>  // stdin & stdout macros library
#include <string.h> //library for string length function
#include <stdlib.h>

//ceaser cipher function definition: (data type, name, argument etc)
//storing input message in char data type and the key shift in a single int.
void ceaserCipher(char* message, int key);

// now main function

int main (void)
{
    int key = 1; //declaring key shift as just 1
    char message [101]; //storing input message in array max 101 characters
    
//asking the user for a message to encrpt:
printf ("enter encryption message");

//store the user's message in the 'message' variable in the cipher function
fgets (message, sizeof(message), stdin);

//showing ciphered message
printf("ciphered message is:");

ceaserCipher(message, key);

    system("pause"); 
}
//close main function and begin cypher function
//calling cypher function
void ceaserCipher (char* message, int key)
    {
    int i = 0;    //variable referencing character position in string 
    int cypherValue;
    char cypher; //cipher variable (storedin a char data type)
   
  //while loop for function body, referencing position'i' withinarray [] 
  
  /*strlen -> string length function in the header and increment -1
  gives 1 extra character in the string for terminating character until
  each character in the message has been switched for cipher.
  */
    while (message[i] != '\0' && strlen(message)-1 > i)
    {
        {
  /*ascii character 'a' is 97 not 0 hence -97 to compensate for each 
  ascii character/alphabetical letter. Add 97 for remainder 0 -> 26
  for cipher values*/
        cypherValue = ((int)message[i] - 97 + key) % 26 + 97;
        cypher = (char)(cypherValue);
        printf ("%c", cypher);
        i++;
        }        
 printf('\n');
}