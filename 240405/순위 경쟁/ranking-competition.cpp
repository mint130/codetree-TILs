#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int state=0; //0~6까지 
    int last=state;
    int cnt=0;
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<n;i++){
        char ch;
        int s;
        cin>>ch>>s;
        if(ch=='A'){
            a+=s;
        }
        else if(ch=='B'){
            b+=s;
        }
        else {
            c+=s;
        }
    
        int m=max({a, b, c});
        if(a==m){
            if(b==m){
                if(c==m){
                    state=0;
                }
                else {
                    //a, b만
                    state=6;
                }
            }
            else {
                //a==m, b!=m
                if(c==m){
                    //a, c만
                    state=5;
                }
                else {
                    //a==m, b!=m, c!=m
                    //a만
                    state=4;

                }

            }
        }
        else if(b==m){
            //a!=m, b==m
            if(c==m){
                //b, c만
                state=3;
            }
            else{
                //a!=m, b==m, c!=m
                state=2;
            }
        }
        else {
            //a!=m, b!=m, c==m
            state=1;

        }
        if(state!=last){
            cnt++;
        }
        last=state;
    }
    cout<<cnt;
    return 0;
}