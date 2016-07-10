include<stdio.h>
void tofh(int ndisc,char source,char temp,char dest);
int main()
{
char source='A',temp='B',dest='C';
int ndisc;
printf("no of disc");
scanf("%d",&ndisc);
printf("sequence is");
tofh(ndisc,source,temp,dest);
return 0;
}
void tofh(int ndisc,char source,char temp,char dest)
{
if(ndisc==1)
{
printf("move disc %d from %c-->%c\n",ndisc,source,dest);
return 0;
}
tofh(ndisc-1,source,dest,temp);
printf("move disc %d from %c-->%c\n",ndisc,source,dest);
tofh(ndisc-1,temp,source,dest);
}
