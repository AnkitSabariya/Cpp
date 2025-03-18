## 1. Write a C++ program to create a function that takes two numbers as input and returns their sum.

### Example:
**Input:**  
Enter two numbers: `5 8`  
**Output:**  
Sum = `13`  

---

## 2. Write a C++ program to create a function that checks whether a given number is even or odd.

### Example:
**Input:**  
Enter a number: `7`  
**Output:**  
7 is an **odd** number.  

---

## 3. Write a C++ program with a function that takes a character as input and returns whether it is a vowel or consonant.

### Example:
**Input:**  
Enter a character: `a`  
**Output:**  
'a' is a **vowel**.  

---

## 4. Write a C++ program to implement a function that calculates the factorial of a given number using recursion.

### Example:
**Input:**  
Enter a number: `5`  
**Output:**  
Factorial of 5 is **120**.  

---

## 5. Write a C++ program with a function that swaps two numbers using call by reference.

### Example:
**Input:**  
Enter two numbers: `4 9`  
**Output:**  
Before swapping: a = 4, b = 9  
After swapping: a = 9, b = 4  

---

## 6. Write a C++ program to create a function that finds the largest element in an array.

### Example:
**Input:**  
Enter 5 elements: `12 45 23 89 56`  
**Output:**  
Largest element is **89**.  

---

## 7. Write a C++ program with a function that accepts a number and returns whether it is prime or not.

### Example:
**Input:**  
Enter a number: `11`  
**Output:**  
11 is a **prime** number.  

---

## 8. Write a C++ program to create a function that takes three numbers and returns the maximum among them.

### Example:
**Input:**  
Enter three numbers: `34 78 56`  
**Output:**  
Maximum number is **78**.  

---

## 9. Write a C++ program to create a function that reverses a given string without using the built-in reverse function.

### Example:
**Input:**  
Enter a string: `hello`  
**Output:**  
Reversed string: `olleh`  

---

## 10. Write a C++ program to create a function that calculates the power of a number using recursion.

### Example:
**Input:**  
Enter base: `2`  
Enter exponent: `3`  
**Output:**  
2^3 = **8**
# 8.cpp - Find Maximum of Three Numbers

## 🔹 Description:
This program takes three numbers as input and determines the maximum among them.

## 🔹 Logic Explanation:
The function `findMax(int d, int e, int f)` follows two possible approaches:


### **🔹 Alternative Logic:**
```cpp
int max = d;  // Assume the first number is the largest

if (e > max)
    max = e;  // Update max if e is greater

if (f > max)
    max = f;  // Update max if f is greater

return max;   // Return the maximum value

