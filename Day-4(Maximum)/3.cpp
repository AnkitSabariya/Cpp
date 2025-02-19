#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;
    cout << "Enter Third Value : ";
    cin >> c;
    cout << "Enter Fourth Value : ";
    cin >> d;
    cout << "Enter Fifth Value : ";
    cin >> e;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    cout << "First Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            } else {
                if (d > e) {
                    cout << "Fourth Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    cout << "Third Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            } else {
                if (d > e) {
                    cout << "Fourth Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    cout << "Second Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            } else {
                if (d > e) {
                    cout << "Fourth Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    cout << "Third Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            } else {
                if (d > e) {
                    cout << "Fourth Value is Maximum";
                } else {
                    cout << "Fifth Value is Maximum";
                }
            }
        }
    }
}
