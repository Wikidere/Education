#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n],max=0,count=0;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) for (int j=i+1; j<n; j++) for (int k=j+1; k<n; k++) if (a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i]) {
        if (max<a[i]+a[j]+a[k]) max=a[i]+a[j]+a[k];
        count++;
    }
    cout << count << " " << max;
    system("pause");
}