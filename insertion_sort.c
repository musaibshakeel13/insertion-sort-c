#include <stdio.h>
void display(int arr[],int size){
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
}
void inserion_sort(int arr[],int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
     while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=key;
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
            inserion_sort(arr,size); //Function to sort the array
            printf("After Sorting \n");
            display(arr,size);//printing the array After Sorting
    return 0;
}
