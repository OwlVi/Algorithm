#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[1000000];
    scanf("%s", str);

    int i = 0, j = 1;
    int a = 1, b= 1;
    while (str[i] != '\0')
    {
        if(str[i] == 'A' || str[i] == 'T' || str[i] == 'G' || str[i] == 'C'){
            if(str[i] == str[j]){
                a++;
                j++;
            }
            else{
                i = j;
                j++;
                if(a>b){
                    b = a;
                }
                a = 1;
            }
        }
    }
    if(a>b){
        b = a;
    }printf("%d", b);
    
    return 0;
}