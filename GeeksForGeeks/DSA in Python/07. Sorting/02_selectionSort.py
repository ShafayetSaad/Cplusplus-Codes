"""
Selection sort finds the minimum or maximum element in the array and swap that 
with the first or last element.
Selection sort does less memory writes compared to quicksort, mergesort,
insertionsort etc. But Cycle sort is optimal in terms of memory writes.
It is the basic idea for Heap Sort.
It is not a stable sort algorithm.
It is an in-place algorithm.
Time complexity is big O(n^2).
"""
def selectSort(l):
    n = len(l)
    for i in range(n - 1):
        min_ind = i
        for j in range(i+1, n):
            if l[j] < l[min_ind]:
                min_ind = j

        l[min_ind], l[i] = l[i], l[min_ind]


l = [10, 5, 8, 20, 2, 18]
selectSort(l)
print(*l)
