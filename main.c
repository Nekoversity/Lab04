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

int alph_seed()
{
    char line[100] = "Terminal problems", sym = 'r';
    int count = 0, line_len = strlen(line);
    double probability;

    char* pl;

    for (pl = line; *pl; ++pl)
    {
        if (tolower(*pl) == sym) ++count;
    }

    probability = (100 * count) / line_len;
    printf("\nProbability of `%c` is %.3f%%\n", sym, probability);
    return 0;
}

int sentence_count()
{
    char line[100] = "My name is Sanchez. And I`m time traveler!";
    int count = 0;

    char* pl;

    for (pl = line; *pl; ++pl)
    {
        if (*pl == '!' || *pl == '.' || *pl == '?') ++count;
    }

    printf("\nThere is %d sentences in the text\n", count);
    return 0;
}

int bracket_check()
{
    char exp_line[100] = "(a + b) + z - a)";
    int br = 0;

    char* pe;

    for (pe = exp_line; *pe; ++pe)
    {
        if (*pe == '(') ++br;
        else if (*pe == ')') --br;
    }

    if (br == 0)
        printf("\nThere is no brackets error\n");
    else
        printf("\nThere is brackets error\n");

    return 0;
}

int main() {

    return 0;
}
