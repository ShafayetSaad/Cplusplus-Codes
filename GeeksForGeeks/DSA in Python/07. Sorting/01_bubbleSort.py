"""
Bubble sort consists of n rounds. On each round, the algorithm iterates
through the elements of the array. Whenever two consecutive elements are found
that are not in correct order, the algorithm swaps them.
It is a stable sort algorithm.
"""

# Time complexity is big O(n^2)
def bubbleSort(l):
	n = len(l)
	for i in range(n-1):
		for j in range(n-1-i):
			if(l[j] > l[j+1]):
				l[j], l[j+1] = l[j+1], l[j]

# An Optimization
def _bubbleSort(l):
    n = len(l)
    for i in range(n-1):
        swapped = False
        for j in range(n-i-1):
            if l[j]>l[j+1]:
                l[j],l[j+1] = l[j+1],l[j]
                swapped = True
        if swapped == False:
            return



l = [10, 8, 20, 5]

bubbleSort(l)
print(*l) # prints list separated by space

_bubbleSort(l)
print(*l)