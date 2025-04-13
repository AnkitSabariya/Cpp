// ✅ Simple & Easy C++ Memory Structure (Real Memory Layout)
// ------------------------------------------------------------
// 🧠 Memory Areas in Simple Words:
// ➤ Code Section   : Functions like main(), sayHello()
// ➤ Data Segment   : Global/static variables
// ➤ Stack          : Variables declared inside functions
// ➤ Heap           : Memory created using 'new'
// ➤ Free Space     : खाली जगह Stack और Heap के बीच

#include <iostream>
using namespace std;

// 🔸 Global Variable (Data Segment)
int global_var = 100;

// 🔹 Function (Code Section)
void sayHello() {
    cout << "Hello from Code Section!" << endl;
}

int main() {
    // 🔸 Stack Variable
    int local_var = 10;

    // 🔸 Heap Memory (created using new)
    int* heap_array = new int[3];
    heap_array[0] = 11;
    heap_array[1] = 22;
    heap_array[2] = 33;

    // 🔹 Function call from Code Section
    sayHello();

    // 🔍 MEMORY STRUCTURE: Visual Representation
    cout << "\n📦 MEMORY STRUCTURE REPRESENTATION (Real & Easy View):\n";
    cout << "\n⬇️ लोअर मेमोरी एड्रेस" << endl;
    cout << "┌────────────────────────┐" << endl;
    cout << "│   Code Section (.text) │  ← main(), sayHello() जैसे functions" << endl;
    cout << "├────────────────────────┤" << endl;
    cout << "│ Data Segment (.data)   │  ← global_var जैसी global/static variables" << endl;
    cout << "├────────────────────────┤" << endl;
    cout << "│ Stack                  │  ← local_var जैसे function variables" << endl;
    cout << "├────────────────────────┤" << endl;
    cout << "│ Heap                   │  ← heap_array (new से allocate)" << endl;
    cout << "├────────────────────────┤" << endl;
    cout << "│ Free Space             │  ← Stack और Heap के बीच खाली memory" << endl;
    cout << "└────────────────────────┘" << endl;
    cout << "⬆️ हाई मेमोरी एड्रेस\n";


    // ✅ MEMORY LAYOUT SUMMARY (Values + Addresses)
    cout << "\n📦 --- MEMORY LAYOUT ---\n";
    cout << "🗃️  Global Variable   : " << global_var 
         << " (Data Segment)\t\tAddress: " << &global_var << endl;

    cout << "📌 Local Variable     : " << local_var 
         << " (Stack)\t\tAddress: " << &local_var << endl;

    cout << "📂 Heap Array         : [" << heap_array[0] << ", " 
         << heap_array[1] << ", " << heap_array[2] << "] (Heap)" << endl;

    cout << "   └▶ Addresses       : [" << &heap_array[0] << ", "
         << &heap_array[1] << ", " << &heap_array[2] << "]" << endl;

    // 🧹 Free the heap memory
    delete[] heap_array;
    heap_array = nullptr;

    return 0;
}

/*
📘 Extra Notes:
- Code Section: सिर्फ instructions होती हैं (read-only memory)
- Data Segment: हर बार program चलेगा, values same होंगी
- Stack: हर बार function call में नई memory बनती है
- Heap: हम खुद control करते हैं new/delete से
*/
