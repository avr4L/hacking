    #include <string.h>
    #include <stdio.h>

    int main(int argc, char *argv[]){
        if(argc==2){
            printf("Checking the LicenseKey: %s\n", argv[1]);
            int sum = 0;
            for(int i=0; i < strlen(argv[1]); i++){
                sum += (int)argv[1][i];
            }

            if(sum==1348){
                printf("Well done \n");
            }
            else{
                printf("Zonk!!! \n");
            }  
        }
        else{
            printf("Usage: <key> \n");
        }

    }
