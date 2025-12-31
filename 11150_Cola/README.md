# UVa 11150 – Cola

## Problem Description
You start with `N` full bottles of cola.

Rules:
- You can exchange **3 empty bottles** for **1 full bottle**.
- After drinking a bottle, it becomes empty.
- If you end up with **2 empty bottles**, you are allowed to **borrow one bottle** to make a final exchange.

Your task is to determine the **maximum number of colas you can drink**.

Input continues until EOF.

---

## Approach
This problem is solved using **simulation of bottle exchanges**.

### Key Ideas:
- Track:
  - Total bottles drunk
  - Current number of empty bottles
- While at least 3 empty bottles exist:
  - Exchange them for new bottles
- Handle the special case where exactly 2 empty bottles remain

---

## Algorithm
1. While input `N` is available:
   - Initialize `total = N`
   - Initialize `empties = N`
2. While `empties >= 3`:
   - `exchange = empties / 3`
   - `total += exchange`
   - `empties = exchange + (empties % 3)`
3. If `empties == 2`, add one extra bottle.
4. Output `total`.

---

## Complexity
- **Time Complexity:** `O(N)` per test case
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

10
81
0


**Output**

15
121
0


---

## Notes
- Borrowing one bottle is allowed only once.
- Uses simple integer arithmetic.
- Handles multiple test cases until EOF.

---

## Source
UVa Online Judge – Problem 11150
