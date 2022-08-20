// https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=1

int solve(int *arr, int start, int end, int key)
{

    // base condition(element not found)
    if (start > end) // while loop condition
    {
        return -1;
    }

    int mid = start + ((end - start) / 2);

    // 2nd base case(element found)
    if (arr[mid] == key)
    {
        return mid;
    }

    else if (arr[mid] > key)
    {
        solve(arr, start, mid - 1, key);
    }
    else
    {
        solve(arr, mid + 1, end, key);
    }
}

int binarySearch(int *input, int n, int val)
{
    return solve(input, 0, n - 1, val);
}