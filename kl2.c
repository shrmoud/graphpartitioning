#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv){
	if(argc == 2){
		FILE *input, *output; 
		char *line = NULL;
		size_t len = 0;
		ssize_t read;
		int line_n = 0;

		input = fopen(argv[1], "r");
		output = fopen("test3.txt","w");


		if (input == NULL){
		  exit(EXIT_FAILURE);
		}

		while ((read = getline(&line, &len, input)) != -1) {
			int num1, num2 ;
			char *saveptr ;
			char *str1 = strtok_r(line, " \t\v\f\r", &saveptr), *str2 = strtok_r(NULL, " \t\v\f\r", &saveptr)  ;
			if(str1 != NULL && str2 != NULL ){
				num1 = atoi( str1 );
				num2 = atoi( str2 );
			}
			else{
			  continue;
			}
			
			
			if(line_n != 0){
			  num1 +=1;
			  num2 +=1;
			}
			fprintf(output,"%d  %d",num1,num2);
			  fprintf(output,"\n");
			  line_n += 1 ;
		}
		
		free(line);
		fclose(input) ;
		fclose(output);
	}
}
