#include <bits/stdc++.h>
using namespace std;

int func4(int N)
{
    int res = 1;
    while (2 * res <= N)
        res *= 2;
    return res;
}

int func3(int N)
{
    for(int i = 1; i * i <= N; i++)
        if (i * i == N)
            return 1;
    return 0;
}

int func2(int *arr, int N)
{
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == 100)
                return 1;
        }
    }
    return 0;
}

int func1(int N)
{
    int res = 0;
    for(int i = 1; i <= N; i++){
        if (i % 3 == 0 || i % 5 == 0)
           res += i; 
    }
    return res; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    return 0;
}