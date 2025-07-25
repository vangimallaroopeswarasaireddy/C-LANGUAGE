
#include <stdio.h>
int main() {
   int n,i,p;
   printf("Enter size:");
   scanf("%d",&n);
   int arr[n];
  for(i=0;i<n;i++){
      printf("Enter %d elemnt:",i+1);
      scanf("%d",&arr[i]);
  }
  printf("\n The original array:");
  for(i=0;i<n;i++){
      printf("%d ",arr[i]);
  }
  printf("\n Enter the searched num:");
  scanf("%d",&p);
  for(i=0;i<n;i++){
      if(arr[i]==p){
          printf("%d",arr[i]);
          break;
      }
      }
        if(i==n){
          printf("No");
        break;
    }
    return 0;
}
