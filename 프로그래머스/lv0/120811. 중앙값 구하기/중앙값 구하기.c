#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int i,j,temp=0;
    //버블 정렬 사용-배열내에 인접한 두개를 비교하여 차고가곡 쌓는것
    for(i=0; i<array_len;i++)
    {
        for(j=0;j<(array_len-1)-i;j++)
        {
            if(array[j]>array[j+1])
            {//배열 중앙값 출력
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    return answer=array[array_len/2];
}




  //  int answer = 0;
 //qsort(array, array_len, sizeof(int), compare);
   // answer = array[array_len/2];
    
    
  //  for(int i=0;i<array_len;i++)
  //      array_len+=(array_len/2);
    
    