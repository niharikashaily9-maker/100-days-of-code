//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>
int main()
{
    int ch;
    FILE *source,*destination;
    char sourcefile[100],destinationfile[100];
    printf("Enter source: ");
    scanf("%99s",sourcefile);
    printf("Enter destination: ");
    scanf("%99s",destination);
    source=fopen(sourcefile,"r");
    if(source==NULL){
        printf("Source file couldn't be open");
        return 1;
    }
    destination=fopen(destinationfile,"w");
    if(destination==NULL){
        printf("Destination file couldn't be open");
        fclose(source);
        return 1;
    }
    while((ch=fgetc(source))!=EOF){
        fputc(ch,destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully to %s\n ",destinationfile);
    return 0;

}
