#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
   int sum = 0;

    if (n % 2 == 1) {
        // n이 홀수인 경우
        for (int i = 1; i <= n; i += 2) {
            sum += i;
        }
    } else {
        // n이 짝수인 경우
        for (int i = 2; i <= n; i += 2) {
            sum += i * i;
        }
    }

    return sum; 
    
    
}
    
    

   // if(n%2==1)
  //  {
  //      for(int i=1;i<=n; i+=2)
 //       {
    //        answer +=i;
   //     }
   // }
    //else{
    //for(int i=2; i<n; i+=n){
    //    answer += i*i;
   // }
   // }
    
    //return answer;
//}










//   int sum,odd;
//    sum=0;
//    odd=0;
    
//for(int i=0;i<=n;i++)
//{
//    if(n%2==0)
//    return sum=sum+(n*n);
//    else
//    n++;
//    return odd+=n;

//}