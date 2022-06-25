#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ara[n],k,i,one=0,two=0;
    double three=0,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(k==4){
            count++;}
        if(k==3){
            if(three>0){
                count++;
                three--;}
            else{
                one++;}}
        if(k==2){
            two=two+2;}
        if(k==1){
            if(one>0){
                count++;
                one--;}
            else{
                three++;}}
        if(two==4){
            count++;
            two=0;}
    }
    if(one>0){
        count=count+one;}
    if(two>0){
        three=three+two;}
    if(three>0){
        count=count+ceil(three/4);
    }

    printf("%0.0lf",count);
    return 0;
}
