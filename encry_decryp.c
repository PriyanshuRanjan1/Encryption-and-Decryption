#include<stdio.h>
#include<stdlib.h>

char userstring[100],encryptedstring[100],decryptedstring[100];
void encrypt();

void decrypt();

void encrypt()
{
    int i=0;
    char ch;
    printf("Enter string to Encrypt :\n");
    fflush(stdin);
    gets(userstring); // gets is capable for read space 
    while (userstring[i]!='\0')
    {
        ch=userstring[i];
        switch (ch)
        {
        case ' ':
            encryptedstring[i]=';';
            break;
        case '.':
            encryptedstring[i]='?';
            break;    
        case 'a':
            encryptedstring[i]='!';
            break; 

        case 'b':
            encryptedstring[i]='@';
            break;    
        case 'c':
            encryptedstring[i]='#';
            break;    
        
        case 'd':
            encryptedstring[i]='$';
            break;    
        case 'e':
            encryptedstring[i]='%';
            break;    
        case 'f':
            encryptedstring[i]='^';
            break;    
        case 'g':
            encryptedstring[i]='&';
            break;    
        case 'h':
            encryptedstring[i]='*';
            break;    
        case 'i':
            encryptedstring[i]='(';
            break;    
        case 'j':
            encryptedstring[i]=')';
            break;    
        case 'k':
            encryptedstring[i]='~';
            break;    
        case 'l':
            encryptedstring[i]='-';
            break;    
        case 'm':
            encryptedstring[i]='+';
            break;    
        case 'n':
            encryptedstring[i]='=';
            break;    
        case 'o':
            encryptedstring[i]='l';
            break;    
        case 'p':
            encryptedstring[i]='0';
            break;    
        case 'q':
            encryptedstring[i]='[';
            break;    
        case 'r':
            encryptedstring[i]='{';
            break;    
        case 's':
            encryptedstring[i]=']';
            break;    
        case 't':
            encryptedstring[i]='}';
            break;
        case 'u':
            encryptedstring[i]='b';
            break;    
        case 'v':
            encryptedstring[i]='z';
            break;    
        case 'w':
            encryptedstring[i]='r';
            break;    
        case 'x':
            encryptedstring[i]='y';
            break;    
        case 'y':
            encryptedstring[i]='/';
            break;    
        
        case 'z':
            encryptedstring[i]='e';
            break;    
               
        
        default:printf("Invalid string\n");
            break;

        }
        i++;
    }
    printf("Strings are Encrypted Successfully\n%s",encryptedstring);
    
}

void decrypt()
{
    int i= 0;
    char ch ;
    printf("Enter Encrypted string to decrypt \n");
    fflush(stdin);
    gets(userstring);
    while(userstring[i]!='\0')
    {
        ch=userstring[i];

         switch (ch)
        {
        case ';':
            decryptedstring[i]=' ';
            break;
        case '?':
            decryptedstring[i]='.';
            break;
        case '!':
            decryptedstring[i]='a';
            break; 
        case '@':
            decryptedstring[i]='b';
            break;    
        case '#':
            decryptedstring[i]='c';
            break;    
        
        case '$':
            decryptedstring[i]='d';
            break;    
        case '%':
            decryptedstring[i]='e';
            break;    
        case '^':
            decryptedstring[i]='f';
            break;    
        case '&':
            decryptedstring[i]='g';
            break;    
        case '*':
            decryptedstring[i]='h';
            break;    
        case '(':
            decryptedstring[i]='i';
            break;    
        case ')':
            decryptedstring[i]='j';
            break;    
        case '~':
            decryptedstring[i]='k';
            break;    
        case '-':
            decryptedstring[i]='l';
            break;    
        case '+':
            decryptedstring[i]='m';
            break;    
        case '=':
            decryptedstring[i]='n';
            break;    
        case 'l':
            decryptedstring[i]='o';
            break;    
        case '0':
            decryptedstring[i]='p';
            break;    
        case '[':
            decryptedstring[i]='q';
            break;    
        case '{':
            decryptedstring[i]='r';
            break;    
        case ']':
            decryptedstring[i]='s';
            break;    
        case '}':
            decryptedstring[i]='t';
            break;
        case 'b':
            decryptedstring[i]='u'; 
            break;   
        case 'z':
            decryptedstring[i]='v';
            break;    
        case 'r':
            decryptedstring[i]='w';
            break;    
        case 'y':
            decryptedstring[i]='x';
            break;    
        case '/':
            decryptedstring[i]='y';
            break;    
        
        case 'e':
            decryptedstring[i]='z';
            break;    
               
        
        default:printf("Invalid string\n");
            break;
        } 

        i++;   


    }

    printf("Strings are decrypted Successfully\n%s",decryptedstring);
}

void main()
{
    int choose=0;
    while(choose!=3)
    {
        printf("\n#### Main Menu ####\n");
        printf("Enter 1 for encrpt string\n");
        printf("Enter 2 for decrpt strins\n");
        printf("Enter 3 for end atring\n");
        again:

        scanf("%d",&choose);
        switch(choose)
        {
            case 1: 
                 encrypt();
                 break;
            case 2: 
                 decrypt();
                 break;
            case 3: 
                 exit(0);
                 break;
            default:
            printf("Enter valid number try again\n");     
            goto again;

        }
    
    }
  


}



