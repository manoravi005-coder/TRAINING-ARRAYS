#include <stdio.h>

int main() {
	int row,col,i,j,sum;
	scanf("%d%d", &row, &col);
	int arr[row][col];
	for(i = 0; i< row; i++){
	    for(j = 0; j< col; j++){
	        scanf("%d", &arr[i][j]);
	    }
	}
	
	for(i = 0; i<row; i++){
	        int min = arr[i][0];
	        for(j =1; j<col; j++){
	            sum+=arr[i][j];
	            if(sum<main){
	                max = arr[i][j];
	            }
	    }printf("%d\n", min);
	
    }   
    return 0;
}    