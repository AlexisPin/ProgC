#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main(){


char *JSON = "{\"code\" : \"message\", \"valeurs\" : [ \"bonjour\"]}";
int j = 1;

for(int i = 0; i<strlen(JSON); i++)
{

	if(JSON[i] == '\"' )
	{
		j = 1;
		while(JSON[j+i] != '\"' && JSON[j+i] != '}' )
		{
			printf("%c ", JSON[j+i]);
			++j;
		}
	
	}
}

}




