//Total N prime number using Sieve Technique

#include<iostream>
using namespace std;
int main() 
{
    long long int n;
    cout << "Enter how many prime numbers you want to print : ";
    cin >> n;

    long long int p[5000005]={0}; // 0 is not prime

    for(long long int i=3;i<=5000000;i+=2)
    {
        p[i] = 1;
    }
    //sieve algo
    for(long long int i=3;i<=5000000;i+=2)
    {
        if(p[i]==1)
        {
            for(long long int j=i*i;j<=5000000;j+=i)
            {
                p[j] = 0;
            }
        }
    }
    p[0] = p[1] = 0;
    p[2] = 1;

    //print
    long long int count=0;
    for(long long int i=0;i<=5000000;i++)
    {
        if(p[i]==1)
        {
            cout << i<<" ";
            count++;
        }
        if(count==n)
        {
            break;
        }
    }
    
}