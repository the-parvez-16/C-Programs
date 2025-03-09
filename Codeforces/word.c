#include <stdio.h>

_Bool isUpper(char a){
    for(char i=65;i<=90;i++)
        if(!(a^i))
            return 1;
    return 0;
}
_Bool isLower(char a){
    for(char i=97;i<=122;i++)
        if(!(a^i))
            return 1;
    return 0;
}

char lw(char a){
    for(int i=65;i<=90;i++)
        if(!(a^i)) return a+32;
    return a;
}

char up(char a){
    for(int i=97;i<=122;i++)
        if(!(a^i)) return a-32;
    return a;
}

int main() {
    char s[101];
    fgets(s, sizeof(s), stdin);
    char uc=0,lc=0; 
    for (int i=0; s[i]; i++) {
        if (isUpper(s[i])) uc++;
        else if(isLower(s[i])) lc++;
    }
    if(uc>lc)
        for(int i=0; s[i];i++)
            s[i]=up(s[i]);
    else
        for(int i = 0; s[i]; i++)
            s[i] = lw(s[i]);
    printf("%s",s);
    return 0;
}
