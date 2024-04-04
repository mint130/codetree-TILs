#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int num[102];
int cnt[102];
vector<int> v;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        num[i+1]=k;
        v.push_back(k);
        cnt[k]++;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int ans=0;
    if(v.size()<=1){
        cout<<-1;
        return 0;
    }
    else {
        ans=v[1];
        if(cnt[ans]!=1){
            cout<<-1;
            return 0;
        }    
        for(int i=1;i<=n;i++){
            if(num[i]==ans){
                cout<<i;
                return 0;
            }
        }
    }
    
   
    return 0;
}