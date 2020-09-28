void insertion_sort(int tab[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int temp = tab[i];
        int j = i - 1;
        while (j > 0 & tab[j] > temp)
        {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j] = temp;
    }
}