#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_SAMPLES 1064
#define MAX_NAMES 256
#define MAX_LINES 256
//Initialize a struct to store our samples
typedef struct {
  int sample_number;
  char value[MAX_NAMES];
} Sample;

int main(){
    Sample samples[MAX_SAMPLES];
    char input[MAX_LINES];
    char result[MAX_LINES];
    int num_inputs = 0;
    char *meme[MAX_SAMPLES];
    int i = 0;
    while (fgets(input, sizeof(input), stdin) != NULL) {
        char *token = strtok(input,",");
        while (token != NULL) {
         
            strcpy(result,token);
            meme[num_inputs] = token;
            num_inputs++;
            token = strtok(NULL, ","); // Move to the next token
            
        }
    }
    int is_new_name = 0;
    char *name = strtok(meme[i],"=");
    char *value = strtok(NULL, "="); // Get the value after "="
    strcpy(result,name);
    strcat(result,"=");
    strcat(result,value);
    printf("%s\n",result);
    memset(result,'\0',sizeof(result));
    i++;
    // while(i < num_inputs){
    //     char *current_name = strtok(meme[i],"=");
    //     char *current_value = strtok(NULL, "="); // Get the value after "="
    //     while(strcmp(name,current_name) != 0){
    //         char *current_name_1 = strtok(meme[i],"=");
    //         char *current_value_1 = strtok(NULL, "="); // Get the value after "="
    //         current_name = current_name_1;
            
            
    //     }
    //     i++;
        
      
    // }
    return 0;
}