#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
    // Vector Syntax:
    // vector<int> vec;
    // vector<int> vec(5, 0);
    vector<int> vec = {1, 2, 3};
    
    //------------------------------------ //
    cout << "Using For Loop in Vector array to print: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    // 1. push_back() Add elements from the last:
    cout << endl << endl;
    cout << "1. push_back(): ";
    vec.push_back(40);
    vec.push_back(50);
    cout << endl;
    // Using range-based for loop to directly show elements without indexing
    cout << "-> Add elements from the last: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 2. pop_back() Remove element from the last:
    cout << "2. pop_back(): ";
    vec.pop_back(); // Call once to remove one element, can be used multiple times to remove more
    cout << endl;
    cout << "-> Remove elements from the last: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 3. insert() Insert an element at a specified position:
    cout << "3. insert(): ";
    vec.insert(vec.begin() + 1, 10);
    cout << endl;
    cout << "-> Insert element: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 4. erase() Delete an element at a specified position:
    cout << "4. erase(): ";
    vec.erase(vec.begin() + 3);
    cout << endl;
    cout << "-> Delete element: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 5. clear() Clear all elements from the vector:
    cout << "5. clear(): ";
    vec.clear();
    cout << endl;
    cout << "-> Clear all elements: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // Add elements again using push_back():
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(80);

    // 6. size() Get the size of the vector:
    cout << "6. size(): " << vec.size() << endl;
    cout << "-> Size of elements: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 7. empty() Check if the vector is empty (1 = empty, 0 = not empty):
    cout << "7. empty(): " << vec.empty() << endl;
    cout << "-> If empty, answer is 1, else 0: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 8. at() Access element at a specific index:
    cout << "8. at(2): " << vec.at(2) << endl;
    cout << "-> Element at index 2 is: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 9. front() Get the first element:
    cout << "9. front(): " << vec.front() << endl;
    cout << "-> First element is: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 10. back() Get the last element:
    cout << "10. back(): " << vec.back() << endl;
    cout << "-> Last element is: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 11. begin() Show element from the beginning:
    cout << "11. begin(): " << *(vec.begin() + 2) << endl; // if  0 to < vec.size()
    cout << "-> Show elements from the beginning: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;

    // 12. end() Show element from the end:
    cout << "12. end(): " << *(vec.end() - 1) << endl;// if  vec.size()  > 0 but -1 array when end then create singgle space sho  
    cout << "-> Show elements from the end: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl << endl;
}
