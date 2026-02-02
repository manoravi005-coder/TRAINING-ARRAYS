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
	        int max = arr[0][i];
	        for(j =1; j<col; j++){
	            sum+=arr[j][i];
	            if(sum>max){
	                max = arr[j][i];
	            }
	    }printf("%d\n", max);
	
    }   
    return 0;
}    