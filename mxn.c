#include<stdio.h>
int main(){
int i,j,k,m,n,p,l;
printf("Enter mXn and pXl:");
scanf("%d %d %d %d",&m,&n,&p,&l);
if(n!=p){
	printf("err");
}
else if(m==0 || n==0 || p==0 || l==0){
	printf("err");
}
else{

p=n;
int arr1[m][n],arr2[n][l],ans[m][l];
printf("Enter %d elements:",m*n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	scanf("%d",&arr1[i][j]);
}
}
printf("Enter %d elements:",l*n);
for(i=0;i<n;i++){
	for(j=0;j<l;j++){
	scanf("%d",&arr2[i][j]);
}
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	ans[i][j]=0;
	for(k=0;k<l;k++){
	ans[i][j]+=arr1[i][k]*arr2[k][j];
}
}
}
printf("The multiplication of:\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	printf("%d ",arr1[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++){
	for(j=0;j<l;j++){
	printf("%d ",arr2[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++){
	for(j=0;j<l;j++){
	printf("%d ",ans[i][j]);
}
printf("\n");
}
}

return 0;
}
