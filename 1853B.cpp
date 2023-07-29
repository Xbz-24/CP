#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, int> memo;

int countFibonnaciLikeSequence(long long n, int k)
{
    if(k == 3)
    {
        // For k = 3, there is only one sequence [0, 0, n] if n > 0
        return (n > 0) ? 1 : 0;
    }
    // Check if the result for the current n and k is already memoized
    if(memo.find(n) != memo.end() && memo[n] >= k)
    {
        return memo[n];
    }
    
    long long a = 0, b = 0, count = 0;

    // Iterate through the sequence and count the number of valid sequences
    for(int i = 2; i < k; ++i)
    {
        long long temp = a + b;
        a = b;
        b = temp;
        if(b > n)
        {
            break;
        }
        else if(b == n && i == k - 2 )
        {
            // If b reaches n and we are at the (k-2)-nth element, we found a valid sequence
            count++;
        }
    }
    // Memoize the result for the current n and k
    memo[n] = count;
    return count;
}
int main()
{
    int t;
    cin >> t;
    // Process each test case
    while(t--)
    {
        long long n;
        int k;
        cin >> n >> k;
        int result = countFibonnaciLikeSequence(n, k);
        cout << result << endl;
    }
    return 0;
}