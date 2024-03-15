# Daily-Challange

## Description
The code provides three functions:

- `swap(int a[], int i)`: Swaps two elements in an array.
- `bubblesort(int a[], int n)`: Sorts an array in ascending order using the bubble sort algorithm.
- `is_sorted(int a[], int b[], int k, int n)`: Checks if a subarray in a starting from index k is sorted the same way as the corresponding subarray in the pre-sorted array b.

The main function demonstrates how to use these functions to check if a subarray in an array is sorted relative to another sorted array.

## Usage
1. Compile the code using a C compiler (e.g., gcc).
2. Run the compiled executable.
3. The program will prompt you to enter the size of the array (n).
4. Enter the elements of the array one by one when prompted.
5. Enter the starting index (k) of the subarray to be checked.
6. The program will then output "YES" if the subarray is sorted the same as the corresponding subarray in the sorted version of the input array, and "NO" otherwise.

## Example Input
    5         // Size of the array (n)
    1 3 2 5 4 // Elements of the array (a)
    2         // Starting index of the subarray (k)


## Example Output
    NO        // Subarray (1, 3, 2) is not sorted the same as the corresponding subarray in the sorted array


## Additional Notes
- This code provides a basic implementation of bubble sort and subarray comparison. More efficient sorting algorithms exist, and the time complexity of bubble sort is not ideal for large datasets.
- The code assumes the input is valid and doesn't perform error checking.
