# Problem 46: Binary Search Implementation

## Problem Statement
Read N sorted integers and a target value, then use Binary Search to find the index of the target. Print -1 if not found.

## Input
First N, then N sorted integers, then the target value.

## Output
The index of the target, or -1 if not found.

## Example Input
```
6
1 3 5 7 9 11
7
```

## Example Output
```
3
```

## Explanation
Repeatedly divide the search range in half by comparing the target to the middle element, narrowing the range until found or exhausted.
