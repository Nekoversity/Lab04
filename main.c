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

int less_of_all()
{
    char text[100] = "Text for checking the shortest word and count for itself";
    char shortest[20];
    int shortest_len = 0, shortest_count = 0;
    char* token = strtok(text, " ");

    do {
        if (strlen(token) < shortest_len || shortest_len == 0)
        {
            strcpy(shortest, token);
            shortest_len = strlen(token);
            shortest_count = 1;
        }
        else if (strcmp(token, shortest) == 0)
        {
            ++shortest_count;
        }

        token = strtok(NULL, " ");
    } while (token);

    printf("\nShortest: %s, length: %d, count: %d\n", shortest, shortest_len, shortest_count);
    return 0;
}

int reverse_string()
{
    char text[100] = "saitama";
    char* copied_text;
    int real_len = strlen(text);

    strcpy(copied_text, text);

    for (int i = 0; i < (real_len / 2); ++i)
    {
        char tmp = text[i];
        text[i] = text[(real_len - 1) - i];
        text[(real_len - 1) - i] = tmp;
    }

    printf("\nReverse for [%s] is [%s]\n",copied_text, text);

    return 0;
}

int main() {
    return 0;
}
