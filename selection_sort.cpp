int min_index(int tab[], int start, int length)
{
    int min_value{tab[start]};
    int min_index{start};
    for (int i = start + 1; i < length; i++)
    {
        if (tab[i] < min_value)
        {
            min_index = i;
            min_value = tab[i];
        }
    }
    return min_index;
}

void selection_sort(int tab[], int length)
{
    for (int i = 0; i < length; i++)
    {
        swap(tab[i], tab[min_index(tab, i, length)]);
    }
}