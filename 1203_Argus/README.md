# UVa 1203 – Argus

## Problem Description
Argus is a system that manages **periodic queries**.

Each query is defined by:
- A **query number** `qnum`
- A **period** `p`

Once registered, a query produces output every `p` units of time:
- At time `p`, `2p`, `3p`, …

Given several registered queries, you must output the **query numbers** of the first `n` queries that are executed, in chronological order.

If multiple queries are scheduled at the same time, the one with the **smaller query number** is executed first.

---

## Approach
This problem is solved using a **priority queue (min-heap)**.

### Key Idea:
- Always execute the query with the **earliest next execution time**.
- If execution times tie, prioritize the **smaller query number**.
- After executing a query, reschedule it by adding its period to its execution time.

---

## Data Structure
A priority queue storing elements of the form:

(next_execution_time, (query_number, period))

The queue is ordered by:
1. `next_execution_time`
2. `query_number`

---

## Algorithm
1. Read and register queries until the command `#` is encountered.
2. Insert each query into a priority queue with its initial execution time equal to its period.
3. Read integer `n`, the number of outputs required.
4. Repeat `n` times:
   - Extract the query with the earliest execution time.
   - Output its query number.
   - Update its execution time by adding the period.
   - Reinsert it into the priority queue.

---

## Complexity
- **Time Complexity:** `O(n log k)`
  - `k` = number of registered queries
- **Space Complexity:** `O(k)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example
**Input**

Register 2004 200
Register 2005 300


**Output**

2004
2005
2004
2004
2005


---

## Notes
- Uses a min-heap with a custom ordering via `std::greater`.
- Priority queue ensures efficient retrieval of the next query.
- Periodic rescheduling is handled by updating the execution time.

---

## Source
UVa Online Judge – Problem 1203
