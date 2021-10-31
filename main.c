#include "stdafx.h"

int sym_counter()
{
    char word[10] = "console", sym = 'o';
    int count = 0;

    char* pw;

    for (pw = word; *pw; ++pw)
    {
        if (*pw == sym) ++count;
    }

    printf("\nThere is %d symbols `%c` in word `%s`\n", count, sym, word);
    return 0;
}

int is_word()
{
    char word[20] = "osmanthus";
    int all_is_letter = 1;

    char* pw;

    for (pw = word; *pw && all_is_letter; ++pw)
    {
        if (!(isalpha(*pw))) all_is_letter = 0;
    }

    if (all_is_letter)
        printf("\nGiven string is word\n");
    else
        printf("\nGiven string isn`t word\n");

    return 0;
}

int main() {

    return 0;
}
