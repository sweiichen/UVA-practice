#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;
       vector<int>v;
       int i;
       int x;
       for(i=0;i<n;++i){
           scanf("%d",&x);
           v.push_back(x);
       }  
       std::sort(v.begin(),v.end());
       int d;
       int max;
       int flag = 0;
       for(i=n-1;i>=0;--i){
           
           d = v[i];
           

           int abc, abc1, abc2;
           for(int j =0;j<n;j++){
               abc=0;
            //    if(j==i)continue;
               abc += v[j];
               abc1 = abc;
               for(int k=j+1; k<n;k++){
                   abc1 = abc;
                //    if(k==j|k==i)continue;
                   abc1 += v[k];
                   for(int q=k+1; q<n;q++){
                       abc2 = abc1;
                       if(i==j|i==k|q==i)continue;
                       abc2 +=v[q];
                       if(abc2==d){
                           max=abc2;
                           flag=1;
                           break;
             
                       }
                   }
                   if(flag==1)break;

               }
               if(flag==1)break;
               
           }
           if(flag==1)break;
       }
       if(flag==0) printf("no solution\n");
       else printf("%d\n",max);
       
    }
}