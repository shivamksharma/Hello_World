#include <stdio.h>
#include <objpak.h>
int main(int argc,char **argv)
{
    id set = [Set new];
    argv++;while (--argc) [set add:[String str:*argv++]];
    [set do:{ :each | printf("hello, %s!\n",[each str]); }];
    return 0;
}
