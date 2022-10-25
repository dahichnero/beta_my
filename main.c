#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpper(char str[]) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] <= 'z' && str[i] >= 'a') {
			str[i] += 'A' - 'a';
		}

	}
}
void toLower(char str[]) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] <= 'Z' && str[i] >= 'A') {
			str[i] += 'a' - 'A';
		}
	}
}

int Con(char str[], char a){
    for (int i=0; i<strlen(str); i++){
        if (a==str[i]){
            break;
            return 1;
        }
    }
    return 0;
}


void Trim(char str[], char symbols[])
{
     int i=0,j;
     int k=0;
     int con;
     /*while (k<strlen(symbols)){
        while((str[i]==symbols[k])|| (str[i+1]==symbols[k]))
        {
          i++;
        }
        k++;
     }*/
     for (int k=0;k<strlen(str); k++){
        con=Con(symbols, str[k]);
        if (con>0){
            i++;
        }
        else{
            break;
        }
     }
     if(i>0)
     {
          for(j=0; j < strlen(str); j++)
          {
              str[j]=str[j+i];
          }
          str[j]='\0';
     }
     i=strlen(str)-1;
     k=0;
     while (k<strlen(symbols)){
        while((str[i]==symbols[k])|| (str[i-1]==symbols[k]))
        {
          i--;
        }
        k++;
     }
     if(i < (strlen(str)-1))
     {
          str[i+1]='\0';
     }
}
int main()
{
    char name[] = "*&**,YesIam&/**/";
	char sur[] = "HELLTOYou";
	char sy[] = " /,*&";
	printf("%s\n",name);
	printf("%s\n", sur);
	Trim(name, sy);
	printf("%s\n",name);
	return 0;
}
