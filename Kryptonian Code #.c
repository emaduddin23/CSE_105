#include<stdio.h>
#include<strings.h>
int main()
{
    char a[100], s[100], d[100];
    int i, n, q, len;
    for(i=0;; i++)
    {
        printf("Enter any key :");
        scanf("%d",&n);
        if(n==0)
            return 0;
        getchar();
        printf("Enter your message :");
        gets(a);
        len = strlen(a);
        printf("Kryptonian Code :");
        for(i=0; i<len; i++)
        {
            if(a[i]==' ' || a[i]=='    ')
            {
                printf(" ");
                continue;
            }
            if(a[i]>='a' && a[i]<='z')
            {
                if(((a[i]-'a'+1)+n)==26)
                {
                    s[i]=((a[i]-'a'+1)+n)+'a'-1;
                }
                else
                {
                    s[i]=(((a[i]-'a'+1)+n)%26)+'a'-1;
                }
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                if(((a[i]-'A'+1)+n)==26)
                {
                    s[i]=((a[i]-'A'+1)+n)+'A'-1;
                }
                else
                {
                    s[i]=(((a[i]-'A'+1)+n)%26)+'A'-1;
                }
            }
            printf("%c",s[i]);
        }
        printf("\n");
        printf("Original message :");
        for(i=0; i<len; i++)
        {
            if(a[i]==' ' || a[i]=='    ')
            {
                printf(" ");
                continue;
            }
            if(s[i]>='a' && s[i]<='z')
            {
                q = ((s[i]-'a'+1)-n)%26;
                if(q<=0)
                {
                    q = q + 26;
                }
                d[i] = q + 'a' - 1;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                q = ((s[i]-'A'+1)-n)%26;
                if(q<=0)
                {
                    q = q + 26;
                }
                d[i] = q + 'A' - 1;
            }
            printf("%c",d[i]);
        }
        printf("\n");
    }
    return 0;
}
