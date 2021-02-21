#include<stdio.h>

int main()
{
    int return_value;
    char *fileName = "ana3.jpg";

    return_value = remove(fileName);
    if(return_value!=0)
    {
        perror("File remove Failed");
        return 1;
    }
    printf("%s removed sucessfully\n",fileName);

    //now try to remove again.

    return_value = remove(fileName);
    if(return_value!=0)
    {
        perror("\nFile remove Failed");
        return 1;
    }
    printf("%s removed sucessfully\n",fileName);

    return 0;
}
