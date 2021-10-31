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

int main() {

    return 0;
}
