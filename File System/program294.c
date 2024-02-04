#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control

int main()
{
    char filename[30];
    
    printf("Enter the name of file that you want to delete from current directory\n");
    scanf("%s",filename);       // special scanf nahi use kel karan file name madhye space naste

    unlink(filename);
    printf("%s File Gets Deleted Successfully...",filename);

    return 0;
}

// proper code


