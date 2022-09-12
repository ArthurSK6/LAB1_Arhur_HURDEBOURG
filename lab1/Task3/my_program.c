#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {

   char *doc = "fuzz17.txt";
   FILE *fp = fopen(doc, "r");

    char str[6];
    char verify[]="YYSNN";
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isdigit(ch))
	{
		strcat(str,"Y");
	}
	else if (isspace(ch))
	{
		strcat(str,"S");
	}
	else 
	{
		strcat(str,"N");
	}
    }
    
    // close the file
    fclose(fp);
    
    if (strcmp(str,verify) == 0)
    {
    	printf("1");
    	return 1;
    }
    else
    {
    	printf("0");
    	return 0;
    }
  
}
