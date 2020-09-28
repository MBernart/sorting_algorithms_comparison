void bubble_sort(int arr[], int n)
{
    int sorted_below = 0;
    bool is_sorted;
    for (int i = 0; i < n; i++)
    {
        is_sorted = true;
        for (int j = sorted_below; j < n - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                is_sorted = false;
            }
        if (is_sorted)
            sorted_below = i;
    }
}