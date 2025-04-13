# ⚙️ Memory Structure in C++

### 🔸 Files
- `01-code-section.cpp` – 🧠 Demonstrates Code Section using simple functions
- `02-data-segment.cpp` – 🗃️ Shows Data Segment (Global/Static Variables)
- `03-stack-heap-layout.cpp` – 📦 Stack, Heap, Address Visualization

---

### 🔍 Memory Areas Overview

| Area           | Description                              | Example           |
|----------------|------------------------------------------|-------------------|
| 🧠 Code        | Read-only section for functions           | `main()`, `sayHello()` |
| 🗃️ Data Segment | Stores global/static variables           | `int global_var = 100;` |
| 📌 Stack       | Function-level variables (auto)           | `int local_var = 10;` |
| 📂 Heap        | Dynamically allocated memory              | `new int[3];`     |
| 🌀 Free Space  | Between Stack and Heap                    | OS managed        |

---

📘 *This folder helps you understand how C++ manages memory internally with real code and visuals.*
