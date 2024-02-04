#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>  // universal std
#include<fcntl.h>    // file control
#include<string.h>   // to use strlen function

int main()
{
    char filename[30];
    char arr[100] = {'\0'};
    int fd = 0;
    int iret = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",filename);

    fd = open(filename,O_RDWR | O_APPEND);          // to avoid data overwrite (  | : Bitwise OR )  Doghancha binary nighel or hoil aani mg data append hoil

    if(fd == -1)
    {
        printf("unable to open %s file\n",filename);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",filename,fd);

        printf("Enter the data that you want to write into the file : \n");
        scanf(" %[^'\n']s",arr);     //special scanf to scan the string with white spaces also
            // space dili
        iret = write(fd,arr,strlen(arr));           // to count no. of letters in the string
                            // kiti bytes lihaychya ya array madhlya
        printf("%d bytes gets successfully written into the file\n",iret);

        close(fd);
    }

    return 0;
}

// proper code


