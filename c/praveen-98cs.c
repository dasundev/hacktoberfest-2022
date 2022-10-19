// This is my Hacktoberfest 2022 contribution

//Duplicate character
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "Great responsibility";  
    int count;  
      
    printf("Duplicate characters in a given string: \n");  
    //Counts each character present in the string  
    for(int i = 0; i < strlen(string); i++) {  
        count = 1;  
        for(int j = i+1; j < strlen(string); j++) {  
            if(string[i] == string[j] && string[i] != ' ') {  
                count++;  
                //Set string[j] to 0 to avoid printing visited character  
                string[j] = '0';  
            }  
        }  
        //A character is considered as duplicate if count is greater than 1  
        if(count > 1 && string[i] != '0')  
            printf("%c\n", string[i]);  
    }  
   
    return 0;  
}  



//How many Vowels

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}