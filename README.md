# Longest Valid Parentheses

This repository contains my C++ solution for the **Longest Valid Parentheses** problem.

## Problem Statement

Given a string containing only `'('` and `')'`, find the length of the longest valid (well-formed) parentheses substring.

### Examples

**Input:**

```
(()
```

**Output:**

```
2
```

---

**Input:**

```
)()())
```

**Output:**

```
4
```

---

**Input:**

```

```

**Output:**

```
0
```

## Approach

I solved this problem using a **stack**.

- Store the indices of opening parentheses.
- Push `-1` initially to act as a base index.
- When a closing parenthesis is encountered:
  - Pop the top element.
  - If the stack becomes empty, push the current index.
  - Otherwise, calculate the length of the current valid substring and update the maximum length.

This approach scans the string only once and efficiently keeps track of valid substrings.

## Time Complexity

- **Time:** O(n)
- **Space:** O(n)

## Files

```
solution.cpp    // C++ implementation
README.md       // Problem explanation
```

## How to Run

Compile the program:

```bash
g++ solution.cpp -o solution
```

Run it:

```bash
./solution
```

## Author

Aditya Grover