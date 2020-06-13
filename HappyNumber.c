#include <stdbool.h>
#include <stdio.h>

/*
    编写一个算法来判断一个数 n 是不是快乐数。
    「快乐数」定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，
    然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。如果 可以变为 1，
    那么这个数就是快乐数。
    如果 n 是快乐数就返回 True ；不是，则返回 False 。
*/

bool cointas(int *history, int size, int n);
int next_n(int n);

bool isHappy(int n)
{
    int history[100000];
    int size = 0;
    while(!cointas(history, size, n))
    {
        history[size] = n;  //注意：这里是一个栈的应用
        
        size++;

        n = next_n(n);
    }
    return n == 1;
}

bool cointas(int* history, int size, int n)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if(history[i] == n)
            return true;
    }
    return false;
}

int next_n(int n)
{
    int r = 0;
    int d;
    while (n!=0)
    {
        d = n % 10;
        n /= 10;
        r += d * d;
    }
    return r;
}