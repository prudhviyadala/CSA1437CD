int main()
{
    char a[100]; 
    printf("Enter a comment:"); 
    scanf("%[^\n]", a);

    int len = strlen(a);

    if (a[0] == '/')
    {
        if (a[1] == '/')
        {
            printf("It is a single comment line");
        }
        else if (a[1] == '*' && a[len - 2] == '*' && a[len - 1] == '/')
        {
            printf("It is a multi comment line");
        }
        else
        {
            printf("It is NOT a comment line");
        }
    }
    else
    {
        printf("It is NOT a comment line");
    }

    return 0;
}
