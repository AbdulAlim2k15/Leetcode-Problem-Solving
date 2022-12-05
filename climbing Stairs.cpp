// dynamic Programming approach

#include<iostream>
#include <stdio.h>
#include<vector>
using namespace std;

int climbStairs(int n){
    if(n==1)
        return 1;
    
    vector<int> step(n+1);
    step[0] = 0;
    step[1] = 1;
    step[2] = 2;
    for(int i=3; i<=n; i++){
        step[i] = step[i-1]+ step[i-2];
    }
    return step[n];
    

}
int main()
{
    int n;
    scanf("%d", &n);
    int NoOfSteps = climbStairs(n);
    printf("%d",NoOfSteps);
    return 0;
}


//recursive Approach

 #include <stdio.h>

int climbStairs(int n){
    if(n<=0)
        return 0;
    else if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else{
        return climbStairs(n-1)+climbStairs(n-2);
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    int NoOfSteps = climbStairs(n);
    printf("%d",NoOfSteps);
    return 0;
}
