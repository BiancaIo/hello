#include<stdio.h>
// abc
int main(int argc, char∗argv[])
{
if (argc !=2)  
{
printf("USAGE:%sname\n", argv [0]);
return−1;
}
printf("Hello,%s!\n", argv [1]);
return 0;
}
