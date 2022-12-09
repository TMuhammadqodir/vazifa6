#include <stdio.h>
#include <string.h>
int countt(char t){
    if(48<=t && t<=57){
        return 1;
    }
    return 0;
}
int main(){
    char text[30];
    int count=0;
    scanf("%[^\n]s",text);
    for(int i=0; i<strlen(text); i++){
        count+=countt(text[i]);
    }
    printf("count=%d\n",count);
    return 0;
}