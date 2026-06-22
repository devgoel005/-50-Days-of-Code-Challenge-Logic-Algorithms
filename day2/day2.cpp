#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Step 1: XOR all → get XOR of two unique numbers
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = ans ^ arr[i];

    // Step 2: Find rightmost set bit position
    int pos = 0;
    int temp = ans;
    while(temp > 0){
        if((temp & 1) == 1)  // ✅ parentheses fix
            break;
        pos++;
        temp = temp >> 1;
    }

    int x = (1 << pos);

    // Step 3: XOR numbers where that bit is 0
    int ans1 = 0;
    for(int i = 0; i < n; i++){
        if((arr[i] & x) == 0)  // ✅ parentheses fix
            ans1 = ans1 ^ arr[i];
    }

    // Step 4: Get second unique number
    int ans2 = ans ^ ans1;

    // Output smaller first
    cout << min(ans1, ans2) << " " << max(ans1, ans2);

    return 0;
}