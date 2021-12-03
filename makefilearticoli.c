#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

char riga[31];
char file; 
int count=0;
 

    if(argc<2)
    {
        printf("inserire nome file\n");
        exit(-1);
    }


    if(argc<3)
    {
        printf("inserire il numero massimo di caratteri per riga\n");
        exit(-2);
    }


    file=fopen(argv[1],"r");
    if(file==NULL)
    {
        printf("il file %s non esiste\n",argv[1]);  //controlla se il file non esiste
        exit(-3);
    }

    while(fgets(riga,sizeof(riga),file)!=NULL)
    {
        printf("%s\n",riga);
        count=++1;
    }
    fclose(file);
    return count;
}
