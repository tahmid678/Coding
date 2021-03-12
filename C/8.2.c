#include<stdio.h>

int b_search(int ara[],int low,int high,int key);

int main(){
    int ara[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int low=0;
    int high=19;
    int key=17;

    b_search(ara,low,high,key);

    return 0;
}

int b_search(int ara[],int low,int high,int key){
    int mid_indx;
    while(low<=high){
        mid_indx=(low+high)/2;

        if(key==ara[mid_indx])
            break;
        if(key>ara[mid_indx])
            low=mid_indx+1;
        else
            high=mid_indx-1;
    }

    if(low>high)
        printf("%d is not found in the array.\n",key);
    else{
        printf("%d is found in the array. It is the %d th element of the array.\n",ara[mid_indx],mid_indx);
    }

    return 0;
}
