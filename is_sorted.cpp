bool is_sorted(int tab[], int length)
{
    for (int i = 0; i < length - 1; i++)
        if (tab[i] > tab[i + 1])
            return 0;
    return 1;
}