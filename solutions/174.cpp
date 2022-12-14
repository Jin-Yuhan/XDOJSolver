#include<stdio.h>
#include<stdlib.h>

int dp[201][20001]={};  //用一维数组不利于理解（准确的说是连我自己都晕了，手动滑稽*5）
int main()
{
    int n;
    int w[201]={};
    int sum=0;  //物品的总价值
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",w+i);
        sum+=w[i];
    }
    int bagv=sum/2; //将所有物品总价值的二分之一作为背包容量
    int j=0;
    for(i=1;i<=n;++i)
    {
        if(w[i]>bagv)   //如果发现有物品的价值大于背包容量
        {
            int dif=w[i]-(sum-w[i]);    //最佳分配方案就是把这个物品分配给一个人，其他物品分配给另一个人
            if(dif<0)dif=-dif;
            printf("%d",dif);
            return 0;
        }
        for(j=1;j<=bagv;++j)    //标准的0-1背包算法，遍历背包容量从1到bagv的情况，目的是为后来遍历做准备
        {
            if(j<w[i])  //如果装不下
            {
                dp[i][j]=dp[i-1][j];    /*这个物品经过审核，i-1变为i，
                     但没有被装入背包，用大小为j的容量装之前审核过的所有物品*/
            }
            else
            {
                dp[i][j]=(dp[i-1][j]>dp[i-1][j-w[i]]+w[i])?dp[i-1][j]:dp[i-1][j-w[i]]+w[i];
                //就这么一条语句，我曾在此献上我的膝盖
                /*比较
                不把这个物品装入背包并用大小为j的容量装之前审核过的物品
                (而装之前审核过的物品所能获得的最大价值在前面已经得出)
                与
                把这个物品装入背包后再用大小为j-w[i]的容量装之前审核过的物品
                (而装之前审核过的物品所能获得的最大价值在前面已经得出)
                哪一个的总价值更大
                然后把较大者赋值给dp[i][j]
                */
            }
//            printf("J:%d dp[%d][%d]:%d\n",j,i,j,dp[i][j]); //把这一行的注释解除可以得到下文图中的结果
        }
    }
    int dif=dp[n][bagv]-(sum-dp[n][bagv]); /*只有当审核的物品数为n，且所取的背包容量为bagv时
              才能100%保证所挑选出的物品的总价值最大*/
    if(dif<0)dif=-dif;  //题目要求输出绝对值
    printf("%d",dif);
    return 0;
}
