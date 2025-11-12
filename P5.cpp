#include<iostream>
using namespace std;

int DecToBinary(int DecNum){
int ans=0,pow=1;

while(DecNum>0){

int rem=DecNum%2;
DecNum=DecNum/2;

ans+=(rem*pow);
pow*=10;

}

return ans;

}
int main(){
cout<<"Binary of the Given Number is:"<<DecToBinary(10);
cout<<"\n";
    return 0;
}