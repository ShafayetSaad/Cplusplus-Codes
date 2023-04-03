"""
Merge sort is a divide and conquer algorithm.
It is a stable sort algorithm.
Time complexity is big O(nlog(n)) and auxiliary space is O(n).
Well suited for linked lists. Works in O(1) aux. space.
Used in external sorting.
In general for arrays, quicksort outperforms megresort.
"""

def merge(arr, low, mid, high):
    left = arr[low : mid+1]
    right = arr[mid+1 : high+1]

    i = j = 0
    k = low

    while i<len(left) and j<len(right):
        if left[i] < right[j]:
            arr[k] = left[i]
            k += 1
            i += 1
        else:
            arr[k] = right[j]
            k += 1
            j += 1

    while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1

    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1


def mergeSort(arr, l, r):
    if r > l:
        m = (r + l) // 2
        mergeSort(arr, l, m)
        mergeSort(arr, m + 1, r)
        merge(arr, l, m, r)


arr = [10, 5, 30, 15, 7]

mergeSort(arr, 0, 4)
print(*arr)
