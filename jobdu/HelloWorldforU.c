#include <stdio.h>
/*
 * 字符串计数函数
 */
int strCount(char* str)
{
    int count = 0;
    while(str[count])
    {
        count++;
    }
    return count++;
}

// 计算n1,n2,n3
int* calcN(int count)
{
    int result[2];
    if(count%3 == 0)
    {
        result[0] = count/3;
        result[1] = count/3;
    }else if(count%3 == 1)
    {
        result[0] = count/3;
        result[1] = count/3 + 1;
    }else
    {
        result[0] = count/3;
        result[1] = count/3 + 2;
    }
    return result;
}


int main(int argc, char*[] argv)
{
    char[80] str;
    int countStr = 0, n1, n2, n3;
    int result[2];
    while(true)
    {
        scanf("%s", str);
        countStr = strCount(str);
        if(countStr < 5)
        {
            printf("输入的字符大于等于5.");
        }
        result = calcN(countStr);
        n1 = n3 = result[0];
        n2 = result[1];
        printStr(str, n1, n2, n3);
    }
    return 0;
}

