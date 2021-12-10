#include<stdio.h>
#include<string.h>
 
#define OUT    0
#define IN    1
void white () {
    printf("\033[0;37m");
}
unsigned countWords(char *str)
{
    int state = OUT;
    unsigned wc = 0;  
 
    while (*str)
    {
        
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;
 
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
 
    
        ++str;
    }
 
    return wc;
}

void Enter( char str[100 ]) {
    printf("\nEnter String: \033[0;35m");
    gets(str);
    white();
}
int main(void)
{
    char str[100];
    Enter(str);
    printf("\n\t\t\tResult:");
    printf("\n\tNumber of words in given string are: \033[0;32m%u", countWords(str));
    white();

    int count = 0;  
      
    for(int i = 0; i < strlen(str); i++) {  
        if(str[i] != ' ')  
            count++;  
    }  
      
    printf("\n\tTotal number of characters in a string: \033[0;32m%d", count);
    white();


    return 0;
}