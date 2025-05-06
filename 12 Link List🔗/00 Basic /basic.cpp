#include <iostream>
using namespace std;
//     🟩 h1 (head)
//      │
//      ▼
// ┌───────────────┐      ┌───────────────┐      ┌───────────────┐
// │ data = 10     │ ───► │ data = 20     │ ───► │ data = 30     │
// │ next = h2     │      │ next = h3     │      │ next = NULL   │
// └───────────────┘      └───────────────┘      └───────────────┘
class Node
{
public:
    int data;   // 👉 Data hold Value Frome Node
    Node *next; // 👉 Pointer to next node(dusre node ka address rakhta hai)
};

int main()
{
    Node *h1;        // 👈 h1 ek pointer hai jo Node ko point karega (head)
    h1 = new Node(); // 👈 new Node() heap memory me ek node create karta hai, jiska address h1 me store hota hai

    // 👇 Arrow operator (->) tab use hota hai jab pointer se member access karte ho
    h1->data = 10;   // 👈 h1 wale node ke data part me 10 store kiya
    h1->next = NULL; // 👈 h1 wale node ke next part me NULL (kyunki abhi aage koi node nahi)

    Node *h2 = new Node();
    h2->data = 20;
    h2->next = NULL;

    h1->next = h2;

    Node *h3 = new Node();
    h3->data = 30;
    h3->next = NULL;

    h2->next = h3; // next connecter  // Linking h1's next to h2's address

    // 👇 Output check karne ke liye
    cout << "H1 || Node data: " << h1->data << " Node next: " << h1->next << endl;
    cout << "H2 || Node data: " << h2->data << " Node next: " << h2->next << endl;
    cout << "H3 || Node data: " << h3->data << " Node next: " << h3->next << endl;

    return 0;
}
