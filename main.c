#include <stdio.h>
char add[1024];
int index = 0;

int isMingan(char x)
{

    int count = 0;

    for (int i = 0; i < index; i++)
    {
        if (x == add[i])
        {
            count++;
        }
    }
        if (count == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    
}

int main()
{
    while (1)
    {
        printf("1---增加一个敏感字符\n");
        printf("2---删除最后一个敏感字符\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换敏感字符\n");
        printf("5---退出\n");

        printf("请输入你要选择的功能\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入要添加的敏感字符\n");
            int a;
            scanf("%c", &a);
            scanf("%c", &a);

            add[index] = a;
            index++;

            int x;
            printf("添加成功，点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

            if (index > 0)
            {
                index--;

                printf("删除成功，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("删除失败，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            for (int i = 0; i < index; i++)

            {
                printf("第%d个敏感字符为%c\n", i + 1, add[i]);
            }
            printf("查看成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("请输入一段字符\n");
            char neirong[1024];
            scanf("%s", neirong);

            for (int i = 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                
                if (isMingan(neirong[i]) == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);

            }
            printf("替换完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            break;
        }
    }
    return 0;
}