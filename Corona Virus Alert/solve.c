#include <stdio.h>
#include <string.h>
//#include <love.h>

int main()
{
    char input[26];
    scanf("%s",input);
    for(int i;i <= strlen(input);i++){
        if (input[i] == 'c'){
            printf("Stay Home");
            goto end;
            }
    }
    printf("Safe");
    end:
        return 0;
    
}
