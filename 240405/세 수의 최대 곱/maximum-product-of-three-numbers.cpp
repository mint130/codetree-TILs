#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int a, b, c=0;
vector<int> v;
bool cmp(int a, int b){
    if(abs(a)!=abs(b)){
        return abs(a)>abs(b);
    }
    else{
        return a>b;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), cmp);
    
    a=v[0];
    b=v[1];
    if((a>0 && b>0) || (a<0 && b<0)){
        for(int i=2;i<v.size();i++){
            if(v[i]>0){
                c=v[i];
                break;
            }
        }
    }
    else {
        for(int i=2;i<v.size();i++){
            if(v[i]<0){
                c=v[i];
                break;
            }
        }
    }
    
    cout<<a*b*c;
    return 0;
}