# UVa 1368 – DNA Consensus String

## Problem Description
You are given several DNA sequences of equal length, composed only of the characters:

- `A`
- `C`
- `G`
- `T`

For each test case, your task is to:
1. Construct the **consensus string**:
   - For each position, choose the nucleotide that appears **most frequently**.
   - If there is a tie, choose the **lexicographically smallest** nucleotide (`A < C < G < T`).
2. Compute the **consensus error**, defined as the total number of characters across all sequences that differ from the consensus string.

---

## Approach
This problem is solved using **column-wise frequency counting**.

### Key Ideas:
- Process the DNA sequences **column by column**.
- Count the frequency of each nucleotide (`A`, `C`, `G`, `T`) at each position.
- Select the nucleotide with the highest frequency (tie-breaking lexicographically).
- The number of mismatches at a position is `m - max_frequency`.

---

## Algorithm
1. Read the number of test cases `T`.
2. For each test case:
   - Read integers `m` (number of sequences) and `n` (length of each sequence).
   - Read the `m` DNA sequences.
3. For each position `i` from `0` to `n-1`:
   - Count occurrences of `A`, `C`, `G`, and `T`.
   - Select the consensus nucleotide.
   - Add `(m - max_frequency)` to the error count.
4. Output:
   - The consensus string
   - The consensus error

---

## Complexity
- **Time Complexity:** `O(T × m × n)`
- **Space Complexity:** `O(1)` (only fixed-size nucleotide counts)

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1
5 8
TATGATAC
TAAGCTAC
AAAGATCC
TGAGATAC
TAAGATGT


**Output**

TAAGATAC
7


---

## Notes
- Tie-breaking is handled lexicographically.
- Uses maps for clarity in counting nucleotides.
- Clean separation of logic using a helper function.
- Output format must match exactly.

---

## Source
UVa Online Judge – Problem 1368
