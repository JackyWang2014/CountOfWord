//
//  main.c
//  CountOfWord
//
//  Created by WangQitai on 16/5/21.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[100] = "I am a boy. who?   are you? haha ! i am good!";;
    //        gets(a);
    //        scanf("%s",a);
    int cnt = 0;
    int word = 0;
    
    char c;
    //            printf("%s",a);
    //            printf("%d",strlen(a));
    for (int i = 0; (c = a[i] )!= '\0'; i++) {
        if (c == ' ' || c=='!' || c=='?' || c=='?') {
            word = 0;
        } else if(word == 0){
            word = 1;
            cnt++;
        }
    }    
    printf("%d\n",cnt);
    return 0;
}
