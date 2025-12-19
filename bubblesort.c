#include <stdio.h>
void display(int arr[],int size){
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
}
void bubblesord(int arr[],int size){
            int temp;
            for(int i=0;i<size-1;i++){ // for number of pass
                for(int j=0;j<size-i-1;j++){ // for number of comparisons
                    if(arr[j]>arr[j+1]){
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
}

int main (){
    int arr[100];
    int size;
        printf("Enter The array size: ");
        scanf("%d",&size);
            printf("Enter The Array Elements: ");
            for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
            }
            printf("Before Sorting\n");
            display(arr,size); //printing the array before Sorting
            bubblesord(arr,size); //Function to sort the array
            printf("After Sorting \n");
            display(arr,size);//printing the array After Sorting

    return 0;
}