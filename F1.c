#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
        char *first=argv[1];
        char *second=argv[2];

        char str[50];
        int lengthofstr=strlen(str);
        char naya[lengthofstr];

        int alnum1=0;
        int alnum2=0;
        int n=strlen(first);
        if (argc!=3)
        {
                printf("BAD INPUT\n");
                exit (0);
        }
        if (strlen(argv[1])!=strlen(argv[2]))
        {
                printf("BAD INPUT\n");
                exit (0);
        }
        for (int i=0; i<strlen(argv[1]); i++)
        {
                alnum1 += isalnum(first[i]);
                alnum2 += isalnum(second[i]);
        }
        if (alnum1 != strlen(argv[1])*8)
        {
                printf("BAD INPUT\n");
                exit (0);
        }
        if (alnum2 != strlen(argv[1])*8)
        {
                printf("BAD INPUT\n");
                exit (0);
        }

        while (fgets(str,200,stdin))
        {
                for (int x=0; x<strlen(str); x++)
                {
                        naya[x]=str[x];
                        for (int y=0; y<strlen(first); y++)
                        {
                                if (first[y]==str[x])
                                {
                                        naya[x]=second[y];
                                }
                        }
                }
                printf("%s",naya);
        }


        return 0;

}
