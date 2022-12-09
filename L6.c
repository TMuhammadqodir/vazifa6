#include <stdio.h>
#include <string.h>
int summ(int ch){
    if('!'<=ch && ch<='/' || ':'<=ch && ch<='@' || '['<=ch && ch<='`' || 123<=ch && ch<=126)
        return 1;
    return 0;     
}
int main(){
    char ch[20];
    int sum=0;
    scanf("%[^\n]s",ch);
    for(int i=0; ch[i]!='\0' ; i++){
        sum+=summ(ch[i]);
    }
    printf("sum=%d\n",sum);

    return 0;
}