#include <stdio.h>

int main() {
	int row,col,i,j;
	scanf("%d%d", &row, &col);
	int a[row][col], b[row][col];
	for(i=0;i<row;i++){
	    for(j=0;j<col;j++){
	        scanf("%d",&a[i][j]);
	        if(i==j){
	            if(a[i][j]==1){
	                
	                continue;
	            }
	            else printf("not");
	            return 0;
	        }
	    }
	}printf("identity matrix");
	
	return 0;
}

