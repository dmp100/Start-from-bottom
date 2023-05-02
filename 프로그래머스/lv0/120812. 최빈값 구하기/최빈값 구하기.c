#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int count[1001]={ 0, };

int solution(int array[], size_t array_len) {
    int i,max=-1,answer,b=0;
    
    for(i=0;i<array_len; i++)
    {
        if(max<++count[array[i]])
        {
            max=count[answer=array[i]];
        }
    }
    
    for(i=1;i<1e3; i++)
    {
        if(count[i] !=0 && count[i]==max)
        {
            if(b !=0)
                return -1;
            b=1;
        }
    }
    
    
    return answer;
}