# SEARCH ALGORITHMS
Search algorithms work to retrieve information stored within a data structure. The algorithms can be classified in:
* Linear
* Binary

![image](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/animation.gif)

## Files

File | Description
--- | ---
[0-linear.c](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/0-linear.c) | Searches for a value in an array of integers using the Linear search algorithm
[1-binary.c](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/1-binary.c) | Searches for a value in a sorted array of integers using the Binary search algorithm
[2-O](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/2-O) | Time complexity (worst case) of a linear search in an array of size n
[3-O](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/3-O) | Space complexity (worst case) of an iterative linear search algorithm in an array of size n
[4-O](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/4-O) | Time complexity (worst case) of a binary search in an array of size n
[5-O](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/5-O) | Space complexity (worst case) of a binary search in an array of size n

The file [6-O](https://github.com/Mcfreestyle/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/6-O) has the space complexity of this function:
```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Author
Michael Chambilla
