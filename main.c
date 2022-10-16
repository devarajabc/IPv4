#include<stdio.h>

int main () {
    int flag =0;
    int n=4;
    int deci16=0;
    while(n>0)//如果是大於一，n就不能是1了
    {
        int deci=0;
        int mychar=0;
        mychar =getchar();
        ////////////////////////////
        if(mychar>='a'&&mychar<='f')//a~f
        {
            deci = (mychar - 87);

        }
        else //0~9
        {
            deci=(mychar-'0');
        }
        ////////////////////////////

        if(flag==0)//first one
        {
            deci16=deci*16;
            flag++;
        }
        else//second one
        {
            //16^0,and it's time to print it out
            printf("%d",deci+deci16);
            //printf("deci='%d\n",deci);
            //printf("deci6='%d\n",deci16);
            if(n>1)
                printf(".");
            flag=0;
            deci=0;
            deci16=0;
            n--;
        }

    }





    return 0;
}
