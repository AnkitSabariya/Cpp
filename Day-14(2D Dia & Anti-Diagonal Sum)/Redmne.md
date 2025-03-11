# 2D Anti-Diagonal Sum

## Problem Statement
Given a 2D matrix, calculate the sum of its anti-diagonal elements. The anti-diagonal elements are those where the sum of the row index `i` and column index `j` equals `row - 1`.

## Example
For a user input of `4` (representing a 4x4 matrix):

|   | 0  | 1  | 2  | 3  |
|---|----|----|----|----|
| 0 | 1  | 2  | 3  | 4  |
| 1 | 5  | 6  | 7  | 8  |
| 2 | 1  | 2  | 3  | 4  |
| 3 | 5  | 6  | 7  | 8  |

### Anti-Diagonal Elements:
- (0,3) → 4
- (1,2) → 7
- (2,1) → 2
- (3,0) → 5

### Sum Calculation:
```
Sum = 4 + 7 + 2 + 5 = 18
```
### Formula:
To check if an element belongs to the anti-diagonal:
```cpp
if (i + j == row - 1) {
    sum += matrix[i][j];
}
```
For a `4x4` matrix:
```
i + j == 4 - 1  →  i + j == 3
```

## Explanation
- The program initializes a `4x4` matrix.
- It iterates through all elements to find those satisfying `i + j == row - 1`.
- The sum of these elements is computed and displayed.

## Output
```
Anti-Diagonal Sum: 18
```

This logic can be applied to any `NxN` matrix for computing the anti-diagonal sum.