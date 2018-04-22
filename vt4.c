// C - ohjelma sanajärjestyksen kääntämiseksi - RR
#include <stdio.h>
#include <string.h>

/*
* str      = työstettävä string
* pit    = str.length
*/

void kaanna(char str[])
{
    int pit = strlen(str);
    int i;

    for (i = pit - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[i] = '\0';                  // (' ' = NULL) - arvo tilalle.
            printf("%s ", &(str[i]) + 1);
    }}

    printf("%s", str);
}

int main()
{
    char a[] = "Javascriptillä tämä oli todella pöhköä";
    char b[] = "Happee otti kuonoon Salibandyssa";
    char c[] = "algoritmien opiskelu on kivaa";
    kaanna(a);
    printf("\n");
    kaanna(b);
    printf("\n");
    kaanna(c);
}