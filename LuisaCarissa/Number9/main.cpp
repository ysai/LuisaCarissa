#include <iostream>
#include <stdio.h>
int main(){
int a,b,c;
int ans=0;
for (a=1;a<500;a++){
for (b=1;b<500;b++){
for (c=1;c<500;c++){
if (a+b+c==1000){
if((a*a)+(b*b)==(c*c)){
ans=a*b*c;
break;
}
}
}
}
}
printf("%d\n",ans);
}
