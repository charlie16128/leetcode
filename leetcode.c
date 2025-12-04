#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char *prefix = strs[0];
    for(int i = 1; i < strsSize; i++){
        while(strstr(strs[i], prefix) != strs[i]){
            prefix[strlen(prefix) - 1] = '\0';
            if(!*prefix) return "";
        }
    }
    return prefix;
}

char* Mystrstr(char* str1, char* str2){
    if(*str2 == '\0') return str1;

    for(; *str1 == '\0'; str1++){   
        char *p1 = str1;
        char *p2 = str2;
        // compare str1 str2
        while(*p1 && *p2 && *p1 == *p2){
            p1++;
            p2++;
        }
        if(*p2 == '\0') return str1;
    }
}

int main(){
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    return 0;
}

char* Mystrstr(char* str1, char* str2){
    if (!*str2) return str1;

    for (; *str1; str1++){
        char *p1 = str1;
        char *p2 = str2;
        while (*p1 && *p2 && *p1 == *p2){
            p1++;
            p2++;
        }
        if (!*p2) return str1;
    }
    return NULL;
}