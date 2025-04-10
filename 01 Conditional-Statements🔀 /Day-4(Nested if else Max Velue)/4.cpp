#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;

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
    cout << "Enter Sixth Value : ";
    cin >> f;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    if (a > f)
                    {
                        cout << "First Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "Fourth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                    {
                        cout << "Third Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "Fourth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    if (b > f)
                    {
                        cout << "Second Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "Fourth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                    {
                        cout << "Third Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "Fourth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "Fifth Value is Maximum";
                    }
                    else
                    {
                        cout << "Sixth Value is Maximum";
                    }
                }
            }
        }
    }
}
