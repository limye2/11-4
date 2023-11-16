//
//  main.c
//  11-4
//
//  Created by MacBook Air on 2023/11/16.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int grade[5];
    int average=0;
    
    for(i=0;i<5;i++)
    {
        printf("input value [%i]= ",i);
        scanf("%d", &grade[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("grade[%i]=%i\n",i, *(grade+i));
        average = average + *(grade+i);
        
    }
    printf("average = %i\n", average/5);

    return 0;
}
