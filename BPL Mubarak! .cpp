#include<iostream>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
     #endif

int n;
cin>>n;

while(n){
    string str;
    cin>>str;

    int len=str.length(), count=0,i,t,r;

    for(i=0;i<len;i++){
        if(str[i] == 'N' || str[i] == 'W' || str[i] == 'D'){
            count++;
        }
    }

    int balls = len-count;

    if(balls >= 6)
    {
         t = balls/6;
         r = balls%6;
         if(t>1 && r>1){
            cout<< t << " OVERS " << r << " BALLS"<<endl;
         }
         else if(t>1 && r==1){
            cout<< t << " OVERS " << r << " BALL"<<endl;
         }
         else if(t==1 && r>1){
            cout<< t << " OVER " << r << " BALLS"<<endl;
         }
         else if(t==1 && r==1){
            cout<< t << " OVER " << r << " BALL"<<endl;
         }
         else if(t>1 && r==0){
            cout<< t << " OVERS " <<endl;
         }
         else{
            cout<< t << " OVER " <<endl;
         }
    }else{
        if(balls>1){
            cout<<balls << " BALLS"<<endl;
        }else{
            cout<<balls << " BALL"<<endl;
        }


    }

    n--;
}
return 0;
}
