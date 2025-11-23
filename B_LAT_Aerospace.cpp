#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,n) for(int i=0;i<n;i++)
#define scan(x) cin>>x;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    scan(N);

    vector<ll> A(N), B(N);
    loop(i,N) scan(A[i]);
    loop(i,N) scan(B[i]);

    // Duplicate A and B for circular behaviour
    vector<ll> AA(2*N), BB(2*N);
    loop(i,2*N){
        AA[i] = A[i % N];
        BB[i] = B[i % N];
    }

    // Prefix sum of B
    vector<ll> pref(2*N + 1, 0);
    for(int i=1; i<=2*N; i++){
        pref[i] = pref[i-1] + BB[i-1];
    }

    // Compute V[i] = A[i] - prefixB[i-1]
    vector<ll> V(2*N);
    for(int i=0; i<2*N; i++){
        V[i] = AA[i] - pref[i];
    }

    // for(int elem:V) cout<<elem<<" ";
    // cout<<endl;
    // for(int elem:pref) cout<<elem<<" ";
    // cout<<endl;
    // Sliding window max of size N
    deque<int> dq;
    vector<ll> windowMax(N);

    // Process first window
    for(int i=0; i<N; i++){
        while(!dq.empty() && V[dq.back()] <= V[i]) dq.pop_back();
        dq.push_back(i);
    }

    // For each starting position j = 1..N
    ll ans = LLONG_MAX;

    for(int j=0; j<N; j++){
        // Maximum in V[j..j+N-1]
        ll M = V[dq.front()];

        // Required X_j = pref[j] + M
        ll Xj = pref[j] + M;
        ans = min(ans, Xj);

        // Slide window: remove old j
        if(dq.front() == j) dq.pop_front();

        // Add new element (j+N)
        int nxt = j + N;
        if(nxt < 2*N){
            while(!dq.empty() && V[dq.back()] <= V[nxt]) dq.pop_back();
            dq.push_back(nxt);
        }
    }

    // Initial energy cannot be negative
    ans = max(0LL, ans);

    cout << ans << "\n";
    return 0;
}
