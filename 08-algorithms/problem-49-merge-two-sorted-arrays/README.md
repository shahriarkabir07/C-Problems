# Problem 49: Merge Two Sorted Arrays

## Problem Statement
Read two sorted arrays and merge them into a single sorted array.

## Input
First N and M (sizes), then N integers, then M integers (both arrays sorted).

## Output
The merged sorted array.

## Example Input
```
3 3
1 3 5
2 4 6
```

## Example Output
```
1 2 3 4 5 6
```

## Explanation
Use two pointers, one for each array, and repeatedly pick the smaller current element to build the merged array in order.
