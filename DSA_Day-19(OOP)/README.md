## 📱 Object-Oriented Programming (OOP) in C++

- **OOP** introduces the concept of **classes and objects** in C++.
- A **class** is a user-defined data type.
-  **class** is a **blueprint** for creating **objects**, defining **properties** (data members) and **behaviors (member functions)**.
- An **object** is an instance of a class that holds specific data.
- Objects interact with each other to perform tasks.
the four core principles of OOP: **Abstraction**, **Encapsulation**, **Inheritance**, and **Polymorphism**.


## 🌟 **Understanding Class & Object in OOP**

- **Class** is a **user-defined data type** that encapsulates data members and member functions.
- **Object** is an instance of a class that holds specific data and can access class methods.





---

## 📌 **Folder Structure with ppt-[10.1-10.7]**

```
📘 OOP in C++
│
├── 🟢 1. Data Abstraction
│   ├── 🛡️ 10.1 Access Modifiers (Public, Private, Protected)
│   ├── 🏗️ 10.7 Abstract Classes
│   └── 🔗 Interfaces
│
├── 🔵 2. Data Encapsulation-[10.2]
│   ├── 🛠️ 10.2 Setters and Getters
│   ├── 🏗️ 10.4 Constructors and Destructors
│   ├── 🧱 10.2 this Keyword(Array of Objects(Car))
│   └── 📌 10.3 Static Keyword
│
├── 🟠 3. Inheritance-[10.5]
│   ├── 🧬 10.5 Single Inheritance
│   ├── 🌐 10.5 Multilevel Inheritance
│   ├── 🔗 10.5 Multiple Inheritance
│   ├── 📤 10.5 Hierarchical Inheritance
│   ├── 🌀 10.5 Hybrid Inheritance
│   └── 🔎 10.3 Scope Resolution Operator
│
├── 🟣 4. Polymorphism-[10.6]
│   ├── 🔄 10.6 Method Overloading
│   ├── 🔁 10.6 Method Overriding
│   └── ➕ Operator Overloading
│
└── 🚀 Projects
    ├── 🏫 Mini Project 1 (Class Management System)
    └── 🏦 Mini Project 2 (Bank Management System)
```

---
## 🌟 **Variable Classification in OOP**

| **Variable Type**          | **Location**                             | **Scope**                             | **Lifetime**                      |
| -------------------------- | ---------------------------------------- | ------------------------------------- | --------------------------------- |
| **Local Variable**         | Function ke andar `{}`                   | Sirf function ke andar                | Function ya `{}` block ke end tak |
| **Parameter Variable**     | Function ke parameters `(int x)`         | Sirf function ke andar                | Jab tak function execute hota hai |
| **Static Variable**        | Function ke andar `static` ke saath      | Sirf function ke andar                | Program ke end tak                |
| **Global Variable**        | Function/class ke bahar declare          | Poore program me accessible           | Program ke end tak                |
| **Member Variable**        | Class ke andar declare (public/private)  | Sirf object ke through                | Jab tak object exist kare         |
| **Static Member Variable** | Class ke andar `static` keyword ke saath | Poore class ke objects ke liye common | Program ke end tak                |
| **Dynamic Variable**       | `new` keyword se allocate                | Jab tak manually `delete` na ho       | Jab tak `delete` nahi hota        |

---


**Happy Coding! 🚀**
