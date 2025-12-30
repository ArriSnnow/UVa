# UVa 10107 – Median

## Problem Description
You are given a sequence of integers, one per line.  
After reading each number, output the **median** of all numbers read so far.

- If the number of elements is odd, the median is the middle element.
- If the number of elements is even, the median is the average of the two middle elements.

Input continues until EOF.

---

## Approach
This solution maintains a list of all previously read numbers.

### Key Idea:
- Insert each new number into a vector.
- Sort the vector after each insertion.
- Compute the median based on the current size of the vector.

This straightforward approach works within the problem’s constraints.

---

## Algorithm
1. Initialize an empty vector.
2. While input is available:
   - Read an integer.
   - Append it to the vector.
   - Sort the vector.
   - If the size is odd, output the middle element.
   - If the size is even, output the average of the two middle elements.

---

## Complexity
- **Time Complexity:**  
  `O(n log n)` per insertion (due to sorting)
- **Space Complexity:**  
  `O(n)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1
3
2


**Output**

1
2
2


---

## Notes
- Simple and readable implementation.
- Uses integer division for even-sized medians, matching UVa’s expected output.
- Suitable for small to moderate input sizes.

---

## Source
UVa Online Judge – Problem 10107
