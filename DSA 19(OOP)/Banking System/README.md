# 💰 Overdraft Logic Condition Explanation

## 🔒 Condition:
```cpp
if ((balance - overdraft) >= -overdraftlimit)
```

---

## 🧪 Dry Run (Hindi):

| 🔢 Balance | 💸 Overdraft | 🧮 Final (balance - overdraft) | 📉 Overdraft Limit | ✅ Condition Result |
|-----------:|-------------:|------------------------------:|--------------------:|:-------------------:|
| 100000     | 10000        | 90000                         | -50000              | ✅ TRUE              |
| 5000       | 52000        | -47000                        | -50000              | ✅ TRUE              |
| 0          | 40000        | -40000                        | -50000              | ✅ TRUE              |
| -30000     | 30000        | -60000                        | -50000              | ❌ FALSE             |
| 1000       | 60000        | -59000                        | -50000              | ❌ FALSE             |
| -10000     | 40000        | -50000                        | -50000              | ✅ TRUE              |
| -10000     | 41000        | -51000                        | -50000              | ❌ FALSE             |

---

## 📌 Samjho Seedhe Words Me (No Theory):

- "Balance - Overdraft" karo
- Uska result "-Overdraft Limit" se bada ya barabar hona chahiye
- Agar bada ya barabar hai ➝ ✅ allowed
- Agar chhota ho gaya ➝ ❌ not allowed

---

Bas bhai! Ye condition itna hi kahti hai 💯

