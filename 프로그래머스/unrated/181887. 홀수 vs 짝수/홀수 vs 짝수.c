#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) { //num_list_len = length
    int answer = 0;
    int odd_sum=0;
    int even_sum=0; //홀,짝 변수지정까진 생각 비슷.
    
    for(int i=0; i<num_list_len;i++)
    {//for문으로 숫자돌리기(배열보단 작아야하는거 생각못함 같거나 작다고하ㅐㅅ음 본인ㅇ느)
        if(i%2==0)//num_list[i]%2는 안됌
        {
            even_sum+=num_list[i]; //sum+=num_list[i]; 여긴 왜 생각이 비슷함.
        }
        else{
            odd_sum+=num_list[i];
        }
    }
    if(odd_sum>=even_sum){ //홀수 번째 원소들의 합, 짝수번째 원소들의 합 중 큰값 return.
        return odd_sum;
    }else{
        return even_sum;
    }  
    return answer;
}



//int solution(int num_list[], size_t num_list_len) {
  //  int answer = 0;
//int sum=0;
//    int plus=0;
//    for(int i=0;i<=num_list_len;i++)
//    {
//        if(num_list[i]%2==0)
//             num_list[i]++;
//        return sum+=num_list[i];
        
      
//    }
    
    
    
    
//    return answer;
//}