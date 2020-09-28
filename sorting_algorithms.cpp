#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

#include "swap.cpp"
#include "is_sorted.cpp"
#include "list_generator.cpp"
#include "bubble_sort.cpp"
#include "insertion_sort.cpp"
#include "copy_array.cpp"
#include "selection_sort.cpp"
#include "quicksort.cpp"

int main()
{
     clock_t start, stop;
     int size;
     cout << "Size of an array to sort: ";
     cin >> size;

     int *array_pattern = new int[size];
     int *array = new int[size];

     system("clear");
     array_pattern = create_list_of_ints(size);
     copy_array(array_pattern, array, size);

     cout << "SORTING ALGORITHMS:\n"
          << "------------------------------------------------\n";

     // BUBBLE SORT
     start = clock();
     bubble_sort(array, size);
     stop = clock();
     cout << "Bubble sort:\n";

     cout << "\tSorted properly: " << (is_sorted(array, size) ? "true" : "false")
          << "\n\tTime taken by bubble sort is: " << fixed << setprecision(6)
          << double(stop - start) / double(CLOCKS_PER_SEC) << " s\n\n";

     copy_array(array_pattern, array, size);

     // INSERTION SORT
     start = clock();
     insertion_sort(array, size);
     stop = clock();
     cout << "Insertion sort:\n";

     cout << "\tSorted properly: " << (is_sorted(array, size) ? "true" : "false")
          << "\n\tTime taken by insertion sort is: " << fixed << setprecision(6)
          << double(stop - start) / double(CLOCKS_PER_SEC) << " s\n\n";

     copy_array(array_pattern, array, size);

     // SELECTION SORT
     start = clock();
     selection_sort(array, size);
     stop = clock();
     cout << "Selection sort:\n";

     cout << "\tSorted properly: " << (is_sorted(array, size) ? "true" : "false")
          << "\n\tTime taken by selection sort is: " << fixed << setprecision(6)
          << double(stop - start) / double(CLOCKS_PER_SEC) << " s\n\n";

     copy_array(array_pattern, array, size);

     // QUICKSORT
     start = clock();
     quicksort(array, 0, size);
     stop = clock();
     cout << "Quicksort:\n";

     cout << "\tSorted properly: " << (is_sorted(array, size) ? "true" : "false")
          << "\n\tTime taken by quicksort is: " << fixed << setprecision(6)
          << double(stop - start) / double(CLOCKS_PER_SEC) << " s\n\n";

     copy_array(array_pattern, array, size);
     return 0;
}