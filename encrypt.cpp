#include<stdio.h>
#include<string.h>


#define buffer 256

void encrypt(char *data)
{
    int len = strlen(data);
    for(int i = 0; i <= len; i++)
    {
        if(i%2==0)
        {
            data[i] = data[i]+data[i+1];
            data[i+1] = data[i+1]-5;
        }
    }
}
void decrypt(char *data)
{
    int len = strlen(data);
    for(int i = 0; i <= len; i++)
    {
        if(i%2==0)
        {
            data[i+1] = data[i+1]+5;
            data[i] = data[i]-data[i+1];
        }
    }
}

int main()
{
    
    char data[buffer] = {"Hello World!!"} ;

    encrypt(data);
    printf("encrypted data : %s\n", data);
    decrypt(data);
    printf("decrypted data : %s\n", data);

    return 0;
}



