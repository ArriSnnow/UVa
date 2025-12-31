# UVa 10415 – Eb Alto Saxophone Player

## Problem Description
An Eb alto saxophone uses **10 keys (fingers)**.  
Each musical note requires a specific combination of keys to be pressed.

Given a sequence of musical notes (a song), your task is to determine **how many times each finger is pressed** while playing the song.

Important details:
- Fingers are numbered from **1 to 10**.
- A finger press is counted **only when a finger transitions from released to pressed**.
- Releasing a finger does not increase the count.
- Each test case is processed independently.

---

## Finger Mapping
Each note corresponds to a fixed 10-bit finger pattern (`1 = pressed`, `0 = released`).

Example:
- `'c'` → `0 1 1 1 0 0 1 1 1 1`
- `'D'` → `1 1 1 1 0 0 1 1 1 0`

Both lowercase and uppercase notes are supported.

---

## Approach
This problem is solved using **state simulation**.

### Key Idea:
- Maintain the **current finger state** (pressed/released).
- For each note:
  - Compare the required finger state with the current state.
  - Count a press **only when a finger changes from 0 → 1**.
  - Update the current state accordingly.

---

## Algorithm
1. Read the number of test cases `t`.
2. For each test case:
   - Read the song string.
   - Initialize:
     - `currentState[10]` → all zeros
     - `fingerCount[10]` → all zeros
   - For each note in the song:
     - Retrieve its finger pattern.
     - For each finger:
       - If required = `1` and current = `0`, increment count.
       - Update the current state.
3. Output the press count for each finger.

---

## Complexity
- **Time Complexity:** `O(L × 10)` per test case, where `L` is the song length
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

1
cdefgabC


**Output**

0 1 1 1 0 0 1 1 1 1


---

## Notes
- Finger counts reset for each test case.
- Only transitions from released → pressed are counted.
- Uses a map for clean note-to-finger mapping.
- Output format must match exactly (space-separated counts).

---

## Source
UVa Online Judge – Problem 10415
