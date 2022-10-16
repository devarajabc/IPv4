#include<stdio.h>

int main () {
    int flag =0;
    int dot=3;
    int deci16=0;
    while(1)
    {
        int deci=0;
        int mychar=0;
        mychar =getchar();
        ////////////////////////////
        if(mychar>='a'&&mychar<='f')//a~f
        {
            deci =(mychar-87);

        }
        else if(mychar=='\n')
        {
            break;
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
        else
        {
            //16^0,and it's time to print it out
            printf("%d",deci+deci16);
            //printf("deci='%d\n",deci);
            //printf("deci6='%d\n",deci16);
            if(dot>0)
                printf(".");
            flag=0;
            deci=0;
            deci16=0;
            dot--;
        }

    }





    return 0;
}
