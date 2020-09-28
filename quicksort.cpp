int divide(int tab[], int lowest, int highest)
{
    int last_value = tab[highest];
    int i = lowest;
    for (int j = lowest; j < highest; j++)
        if (tab[j] < last_value)
            swap(tab[i++], tab[j]);
    swap(tab[i], tab[highest]);
    return i;
}

void quicksort(int tab[], int lowest, int highest)
{
    if (lowest < highest)
    {
        int middle = divide(tab, lowest, highest);
        quicksort(tab, lowest, middle - 1);
        quicksort(tab, middle + 1, highest);
    }
}
