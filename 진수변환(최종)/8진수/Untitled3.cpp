

#include <stdio.h> 
 int main() 

  {     int i,j,result[20]={0},number;   
  
    printf("10진수를 입력하세요.(2413 이명회) : "  );    
	 scanf("%d",&number);    
	  for(i=0;number>0;i++) {      
	    result[i]=number%8;      
		  number=number/8;  
		     }   
		     
			 
			   printf("8진수로 변환한 값은 "); 
			       for(j=i-1;j>=0;j--) printf("%d",result[j]);  
				      printf("\n");  
				       
				       
				       
					     return 0; 
						}



