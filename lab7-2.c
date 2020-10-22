#include <stdio.h>
main()
{
	char s[] = "Co giao Dang Kim Thi";    
	int i = 0;
	int nguyenAm = 0;                 
      
	while(s[i++] != '\0') 
	{
    	if(s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i' )
        nguyenAm++;
	}
   
   printf("Chuoi '%s' co chua: %d nguyen am\n", s, nguyenAm);
   return 0;
}

