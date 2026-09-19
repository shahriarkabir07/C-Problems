# Problem 17: Sum of Digits

## Problem Statement
Read an integer and calculate the sum of its digits.

## Input
A single integer.

## Output
The sum of its digits.

## Example Input
```
1234
```

## Example Output
```
10
```

## Explanation
Repeatedly extract the last digit using modulus 10, add it to a sum, then remove it using division by 10.
