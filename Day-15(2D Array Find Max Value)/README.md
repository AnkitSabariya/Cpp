# Matrix Maximum Finder



## Dry Run Table
| Step | i | j | box[i][j] | max (Before) | Condition (box[i][j] > max) | max (After) |
|------|---|---|-----------|-------------|-----------------------------|-------------|
| 1    | 0 | 0 | 1         | 1           | No (1 is not > 1)          | 1           |
| 2    | 0 | 1 | 5         | 1           | Yes (5 > 1)                | 5           |
| 3    | 0 | 2 | 9         | 5           | Yes (9 > 5)                | 9           |
| 4    | 1 | 0 | 3         | 9           | No (3 is not > 9)          | 9           |
| 5    | 1 | 1 | 7         | 9           | No (7 is not > 9)          | 9           |
| 6    | 1 | 2 | 2         | 9           | No (2 is not > 9)          | 9           |
| 7    | 2 | 0 | 8         | 9           | No (8 is not > 9)          | 9           |
| 8    | 2 | 1 | 4         | 9           | No (4 is not > 9)          | 9           |
| 9    | 2 | 2 | 6         | 9           | No (6 is not > 9)          | 9           |



