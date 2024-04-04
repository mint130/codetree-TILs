#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a, b=0;
    int cnt=0;
    int state=0; //0이면 둘다, 1은 a, 2는 b
    int last=state; //직전 상태

    for(int i=0;i<n;i++){
        char c;
        int s;
        cin>>c>>s;
        if(c=='A') {
            a+=s;
        }
        else {
            b+=s;
        }
        if(a==b) state=0;
        else if(a>b) state=1;
        else state=2;
        
        if(last!=state) cnt++;
        last=state;
    }
    cout<<cnt;
    return 0;
}