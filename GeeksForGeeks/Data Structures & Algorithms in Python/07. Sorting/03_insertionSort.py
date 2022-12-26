"""
Insertion sort is a sorting algorithm that places an unsorted element 
at its suitable place in each iteration.
Insertion sort works similarly as we sort cards in our hand in a card game.
We assume that the first card is already sorted then, we select an 
unsorted card. If the unsorted card is greater than the card in hand,
it is placed on the right otherwise, to the left. In the same way, 
other unsorted cards are taken and put in their right place.

Insertion sort is most popular for small sized arrays.
It is a stable sort algorithm.
It is an in-place algorithm.
Time complexity is big O(n^2) in worst case and big O(n) in best case(when 
array is sorted already).
In general it is big O(n^2).
"""

def insertionSort(l):
    for i in range(1,len(l)):
        x = l[i]
        j = i-1

        while j>=0 and x<l[j]:
            l[j+1] = l[j]
            j = j-1
        l[j+1] = x


l = [20, 5, 40, 60, 10, 30]

insertionSort(l)
print(*l)
