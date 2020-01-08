/* lcm of two numbers using formula 
-> lcm * gcd = a * b
-> lcm = ((a * b) / gcd)  */ 
#include<iostream>
using namespace std;
int gcd(int a,int b);
int main() {
	int a,b;
    cin >> a >> b;
    int gcd = gcd(a,b);
    int lcm;
    lcm = ((a * b) / gcd);
    cout << lcm << endl;
}
int gcd(int a,int b)
{
    return b==0 ? a : gcd(b,a%b);
}