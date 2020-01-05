#include<iostream>
using namespace std;
int main () {
	int x,y,max=0;
    cin >> x >> y;
    for(int i=x;i<y;i++)
    {
        for(int j=x+1;j<=y;j++)
        {
            if((i^j) > max)
            {
                max = (i ^ j);
            } 
        }
    }
    cout << max;
}