#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<char> fir, sec;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

void exc(int *a, int *b)
{
    int x = gcd(abs(*a), abs(*b));
    *a /= x;
    *b /= x;
    if (*a * *b >= 0)
        *a = abs(*a), *b = abs(*b);
    else
        *a = -1 * abs(*a), *b = abs(*b);
}

void plus(int a1, int b1, int a2, int b2)
{
    printf("%s + %s = ", fir, sec);
}

void minus(int a1, int b1, int a2, int b2)
{
    printf("%s - %s = ", fir, sec);
}

int main()
{
    int a1, b1, a2, b2;
    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);

    exc(&a1, &b1);
    exc(&a2, &b2);

    plus(a1, b1, a2, b2);
    minus(a1, b1, a2, b2);
}