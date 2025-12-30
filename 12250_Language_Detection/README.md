# UVa 12250 – Language Detection

## Problem Description
Given a word representing a greeting in a certain language, determine which language it belongs to.

The program reads multiple lines of input. Each line contains a single word:
- If the word is `#`, input ends.
- Otherwise, output the detected language or `UNKNOWN` if it does not match any known greeting.

Each output must be labeled with a case number.

---

## Known Greetings
| Greeting       | Language  |
|----------------|-----------|
| HELLO          | ENGLISH   |
| HOLA           | SPANISH   |
| HALLO          | GERMAN    |
| BONJOUR        | FRENCH    |
| CIAO           | ITALIAN   |
| ZDRAVSTVUJTE   | RUSSIAN   |

---

## Approach
This is a straightforward **string comparison** problem.

### Steps:
1. Read input line by line using `getline`.
2. Stop processing when the input is `#`.
3. Compare the input string against known greetings.
4. Output the corresponding language or `UNKNOWN`.
5. Prefix each result with a case number.

---

## Algorithm
1. Initialize a case counter.
2. While reading input:
   - If input is `#`, terminate.
   - Match the string against known greetings.
   - Print the result in the required format.

---

## Complexity
- **Time Complexity:** `O(N)` where `N` is the number of input lines
- **Space Complexity:** `O(1)`

---

## Language & Tools
- **Language:** C++
- **Standard:** C++11 or later
- **Compiler Tested:** Clang / GCC

---

## Example

**Input**

HELLO
HOLA
CIAO


**Output**

Case 1: ENGLISH
Case 2: SPANISH
Case 3: ITALIAN

---

## Source
UVa Online Judge – Problem 12250
