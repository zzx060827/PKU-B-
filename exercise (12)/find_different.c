#include <stdio.h>
#include <string.h>

int main() 
{
    char a[21], b[21];
    scanf("%s", a);scanf("%s", b);
    int alpha_a[26] = {0}, alpha_b[26] = {0};
    for (int i = 0; i < strlen(a); i++) {
        alpha_a[a[i] - 'a']++;
    }
    for (int i = 0; i < strlen(b); i++) {
        alpha_b[b[i] - 'a']++;
    }
    int different = 0;
    for(int i = 0; i < 26; i++){
        if(alpha_b[i]>alpha_a[i]){printf("%c", i + 'a');return 0;}
    }
}