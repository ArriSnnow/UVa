# UVa 118 – Mutant Flatworld Explorers

## Problem Description
A group of robots explores a rectangular grid world defined by its upper-right corner `(maxX, maxY)`, with the lower-left corner at `(0, 0)`.

Each robot is given:
- An initial position `(x, y)`
- A facing direction (`N`, `E`, `S`, `W`)
- A sequence of instructions consisting of:
  - `L`: turn left
  - `R`: turn right
  - `F`: move forward one grid unit

If a robot moves off the grid, it is considered **LOST**.  
When a robot is lost, it leaves a **scent** at its last valid position. Future robots will ignore any `F` instruction that would cause them to fall off the grid from a scented position.

---

## Approach
This problem is solved using **simulation** with state tracking.

### Key Ideas:
- Simulate each robot step-by-step according to the instruction sequence.
- Detect when a robot would move off the grid.
- Use a `set` to store positions where robots were lost (scent positions).
- If a robot encounters a scented position and would fall off the grid, it ignores the move.

---

## Algorithm
1. Read the grid upper-right corner `(maxX, maxY)`.
2. Initialize an empty set to store scented positions.
3. For each robot:
   - Read its initial position, direction, and instruction string.
   - Process each instruction:
     - `L` and `R` update direction.
     - `F` attempts to move forward.
     - If the move causes the robot to leave the grid:
       - If no scent exists at the current position, mark the robot as LOST and record the scent.
       - Otherwise, ignore the instruction.
4. Output the final position and direction of the robot, appending `"LOST"` if applicable.

---

## Complexity
- **Time Complexity:** `O(k)` per robot, where `k` is the number of instructions
- **Space Complexity:** `O(s)`, where `s` is the number of scented positions

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

5 3
1 1 E RFRFRFRF
3 2 N FRRFLLFFRRFLL
0 3 W LLFFFLFLFL


**Output**

1 1 E
3 3 N LOST
2 3 S


---

## Notes
- The grid boundaries are inclusive.
- Scent positions prevent repeated losses at the same location.
- Output formatting must match exactly, including spacing and the word `LOST`.

---

## Source
UVa Online Judge – Problem 118
