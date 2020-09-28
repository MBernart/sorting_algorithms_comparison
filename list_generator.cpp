#include <cstdlib>

int *create_list_of_ints(int length)
{
    srand(time(NULL));

    int *tab = new int[length];
    for (int i = 0; i < length; i++)
    {
        // tab[i] = rand() % 200;
        tab[i] = rand() % __INT32_MAX__;
    }
    return tab;
}
