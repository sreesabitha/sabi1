 #include<stdio.h>
 int main()
 {
 char s[100];
    int i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if(i==0)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    if(s[i]==' ')
    {
    i++;
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]=s[i]-32;
    }
    }
    }
    printf("%ds",s);
 return 0;
 }
