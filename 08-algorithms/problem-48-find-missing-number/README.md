# Problem 48: Find Missing Number in Array (1 to N)

## Problem Statement
An array contains N-1 distinct integers taken from the range 1 to N, with one number missing. Find the missing number.

## Input
First N, then N-1 integers.

## Output
The missing number.

## Example Input
```
5
1 2 4 5
```

## Example Output
```
3
```

## Explanation
Calculate the expected sum of numbers from 1 to N using the formula N*(N+1)/2, then subtract the actual sum of the given array to find the missing number.
