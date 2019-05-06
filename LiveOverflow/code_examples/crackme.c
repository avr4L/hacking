#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc==2){
        printf("Checking the LicenseKey: %s\n", argv[1]);
        if(strcmp(argv[1], "licence-key-1337")==0){
            printf("Well done");
        }
        else{
            printf("Zonk!!! \n");
        }  
    }
    else{
        printf("Usage: <key> \n");
    }

}
