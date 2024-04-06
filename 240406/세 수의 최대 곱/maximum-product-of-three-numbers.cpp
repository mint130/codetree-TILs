#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int a, b, c=0;
int ans=0;
vector<int> v1; //음수
vector<int> v2; //양수
bool cmp(int a, int b){
    return a>b;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    if(n==3){
        cin>>a>>b>>c;
        cout<<a*b*c;
        return 0;
    }
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num<0) v1.push_back(num);
        else if(num>0) v2.push_back(num);
    }
    //제일 큰 음수 2개와 제일 큰 양수 곱하기
    //제일 큰 양수 3개 곱하기
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), cmp);
    int num1=v1[0]*v1[1]*v2[0];
    int num2=v2[0]*v2[1]*v2[2];   
    ans=max(num1, num2);
    cout<<ans;
    return 0;
}