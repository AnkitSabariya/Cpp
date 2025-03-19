


### **🔹 8.cpp Alternative Logic:**
```cpp
int max = d;  // Assume the first number is the largest

if (e > max)
    max = e;  // Update max if e is greater

if (f > max)
    max = f;  // Update max if f is greater

return max;   // Return the maximum value
```
### 🔹 10.cpp Recursion 

### Condition Formula
```
base^exponent = base * base^(exponent - 1)
```

### Dry Run Example

### **Input:**
```
Base = 3
Exponent = 4
```

### **Function Calls Breakdown:**

| Step | Call      | Returns      | Stored in                   |
| ---- | --------- | ------------ | --------------------------- |
| 1    | fact(3,0) | 1            | Base case                   |
| 2    | fact(3,1) | 3 \* 1 = 3   | Returned to fact(3,2)       |
| 3    | fact(3,2) | 3 \* 3 = 9   | Returned to fact(3,3)       |
| 4    | fact(3,3) | 3 \* 9 = 27  | Returned to fact(3,4)       |
| 5    | fact(3,4) | 3 \* 27 = 81 | Stored in `ans` in `main()` |

### **Output:**
```
Result: 81
```





