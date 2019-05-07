#include<stdio.h>
int main()
{
    char arr[20];
    double h=0,m=0,s=0,H,M,S,Speed = 0,speed,km=0;
    while(gets(arr) != NULL)
    {
        if(arr[8]) sscanf(arr,"%lf:%lf:%lf %lf",&H,&M,&S,&speed);
        else sscanf(arr,"%lf:%lf:%lf",&H,&M,&S);
        if(!arr[8])
        {
            km += (H-h)*speed + (M-m)*speed/60+(S-s)*speed/3600;
            printf("%s %.2lf km\n",arr,km);
        }
        else
        {
            km += (H-h)*speed + (M-m)*speed/60+(S-s)*speed/3600;
        }
    h=H;
    m=M;
    s=S;
    Speed = speed;
    }
    return  0;
}
