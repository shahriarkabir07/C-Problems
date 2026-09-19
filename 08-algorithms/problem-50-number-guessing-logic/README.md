# Problem 50: Simple Number Guessing Logic (Binary Search Concept)

## Problem Statement
Given a hidden number between 1 and N (provided as input for testing) and N itself, simulate a binary search guessing process and print the total number of guesses needed to find the number.

## Input
Two integers: N and the hidden number.

## Output
The number of guesses taken to find the hidden number using binary search logic.

## Example Input
```
100 42
```

## Example Output
```
7
```

## Explanation
Simulate binary search on the range 1 to N, narrowing the range based on comparisons with the hidden number, and count how many guesses it takes.
