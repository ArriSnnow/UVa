# UVa 10978 – Let’s Play Magic

## Problem Description
A magician performs a card trick using a circular arrangement of cards.

You are given:
- An integer `n`, the number of cards.
- `n` pairs of strings:
  - A **card name**
  - A **magic word**

The trick works as follows:
1. Cards are placed one by one into a circular array of size `n`.
2. Starting from the current position, move forward by the length of the magic word.
3. Only **empty positions** are counted while moving.
4. The card is placed in the final position reached.
5. The process repeats for all cards.

Your task is to output the final order of the cards.

Input ends when `n = 0`.

---

## Approach
This problem is solved using **circular simulation with counting empty slots**.

### Key Ideas:
- Use an array of size `n` to represent card positions.
- Maintain a current index that moves circularly.
- For each card:
  - Count forward by the length of the magic word.
  - Only empty positions decrement the counter.
- Place the card at the final position reached.

---

## Algorithm
1. While reading `n`:
   - If `n == 0`, terminate.
2. Initialize an array of `n` empty strings.
3. Set the current index to `0`.
4. For each card:
   - Read the card name and magic word.
   - Let `len = length(magic word)`.
   - While `len > 0`:
     - If the current position is empty, decrement `len`.
     - Move the index forward (circularly).
   - Place the card at the last valid position.
5. Output the array contents in order.

---

## Complexity
- **Time Complexity:** `O(n²)` in the worst case  
  (due to circular scanning for empty slots)
- **Space Complexity:** `O(n)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

4
A ab
B cde
C f
D gh
0


**Output**

A C D B


---

## Notes
- Circular indexing is handled using modulo arithmetic.
- Empty slots are tracked using empty strings.
- Output format requires space-separated card names.

---

## Source
UVa Online Judge – Problem 10978
