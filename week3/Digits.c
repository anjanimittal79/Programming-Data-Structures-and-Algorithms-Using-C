#include <stdio.h>
#include <string.h>
 
 
int main(void) {
    
    int i;
    
    
        char n[100000];
        int count =0,k=1;
        char c,f;
        scanf("%s",n);
        c=n[0];
        f=n[k];
        while (f!='\0'){
            if (f!=c)
                count++ ;
            k++;
            f=n[k];
            
        }
        if ((count==1)||(count == strlen(n)-1)) 
            printf("YES");
        else
            printf("NO");
        
        
        
    
    
    
    
	// your code goes here
	return 0;
}
 
