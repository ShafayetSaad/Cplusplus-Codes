"""
List Introduction
- Dynamic Size
- Allows Items of Different Types
- Random Access
- Cache friendly
- Insertion, Deletion are slow
- Search is also slow for unsorted

It uses Arrays internally.

How does Dynamic size work?
- Preallocate some extra space
- If becomes full, do the following,
	- Allocate a new space of larger size(multiple by x)
	- Copy old space to new
	- Free old space

Time complexity for append is big O(1)
"""

l = [10, 20, 30, 40, 50]
print(l)
print(l[0])
print(l[3])
print(l[-1])
print(l[-2])
print(l[0:2])

print()

l.append(60)
print(l)

l.insert(1, 15)
print(l)

print(15 in l)

l.append(30)
print(l)
print(l.count(30))

print(l.index(30)) # causes error if item is not present
print(l.index(30, 4, 8)) # start is inclusive, end is exclusive

l.remove(20)
print(l)

print(l.pop()) # pops last element
print(l)

print(l.pop(1)) # pops in index 1
print(l)

del l[0]
print(l)

del l[2:4]
print(l)

l = [10, 40, 20, 50]
print(max(l))

print(min(l))

print(sum(l))

l.reverse()
print(l)

l.sort()
print(l)

l = ["efg", "abc", "gfg", "def"]
print(max(l))

print(min(l))

l.reverse()
print(l)

l.sort()
print(l)