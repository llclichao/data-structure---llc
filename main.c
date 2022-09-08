#include <stdio.h>
#include<ctype.h>

int main() {
    /*int i ,j ;i=6;j= i += i;printf("%d %d\n",i,j);double i1 =7;double j1 = 6 + (i1 =2.5);printf("%f %f\n",i1,j1);
    double i2 = 2;double j2 = 8;j2 = (i2=6)+(j2=3);printf("%f %f\n",i2,j2);
    int i3 = 10;printf("%d\t",i3++ - 1);printf("%d\n",i3);int i4=10;int j4 = 5;printf("%d\t",i4++ - ++j4);printf("%d\t%d\n",i4,j4);
    int i5 = 5;int j5;j5 = ++i5 * 3 - 2;printf("%d\t%d\n", i5, j5);
    int a,b,c,d;a=b=c=d=2;int e=a/b%c/d;printf("%d\t",e);int f=-a-b+c - + d;printf("%d\n",f);int g = a*-b/c-d;printf("%d\n",g);
    int ll=-4;int bb=0;printf("%d\n",ll/bb);*/
    //int a,b,c;printf("Enter a two-dight number: ");scanf_s("%d",&a);b=a/10;c=a%10;printf("\n");printf("The sever is: ");printf("%d%d",c,b);
    //int i = 2;int j = 3;int k = i * j == 6;printf("%d",k);
    //int i = 5;int j=10;int k=1;printf("%d",i<j == j<k);
    //int i = 3;int j =4;int k = 5;printf("j==%d all==%d",i%j,i%j+i<k);
    //int i=3;int j=4;int k=5;printf("%d\t",i<j || ++j<k);printf("%d %d %d",i,j,k);
    //int i = 1;switch (i%3) {case 0:printf("zero");case 1:printf("one");case 2:printf("two");}
    //int i;printf("Input area_-code: ");scanf_s("%d",&i);switch (i) {case 229:printf("Albany");break;case 404:printf("Atlanta");break;case 470:printf("Atlanta");break;default:printf("Area code not recognized.");break;}
    /*int i,j,k;printf("Enter a 24-hour time : ");scanf_s("%d:%d",&i,&j);
    if(i==13)k=1;else if(i==14)k=2;else if(i==15)k=3;else if(i==16)k=4;else if(i==17)k=5;else if(i==18)k=6;
    else if(i==19)k=7;else if(i==20)k=8;else if(i==21)k=9;else if(i==22)k=10;else if(i==23)k=11;else if(i==24)k=12;else k=i;
    if(i>12){printf("Equivalent 12-hour time: %d:%d PM",k,j);}
    else i > 24 ? printf("Error input") : printf("Equivalent 12-hour time: %d:%d AM", k, j);*/
   /*int i,n;printf("This program prints a table of squares.\n");printf("Enter number of entries in table: ");
   scanf_s("%d",&n);i = 1;while(i<=n){printf("%10d%10d\n",i,i*i);i++;}*/
   /*int cmd;float balance=0.0f,credit,debit;printf("*** ACME checkbook-balancing program ***\n");
   printf("Commands: 0=clear, 1=credit , 2=debit, 3=balance, 4=exit\n\n ");
   for(;;){
       printf("Enter command: ");
       scanf_s("%d",&cmd);
       switch (cmd) {
           case 0:balance = 0.0f;break;
           case 1:printf("Enter amount of credit: ");scanf_s("%f",&credit);balance +=credit;break;
           case 2:printf("Enter amount of debit: ");scanf_s("%f",&debit);balance -= debit;break;
           case 3:printf("Current balance: $%.2f\n",balance);break;
           case 4:return 0;default:printf("Commands: 0=clear,i=credit,2=debit,3=balance,4=exit\n");
       }
   }*/
   /*for(int i=5,j=i-1;i>0,j>0;--i,j=i-1)
       printf("%d %d\n",i,j);*/
   /*for(int i = 10;i>=1;i/=2)
       printf("%d",i);*/
   /*int max_number=0;
   int number;
   for(;;)
   {
       printf("Enter a number");
       scanf_s("%d",&number);
       if(number>max_number)
       {
           max_number=number;
       }
       else if(number <=0)
           break;
   }
    printf("The largest number is %d",max_number);*/

//最大公约数算法
/*int n,m,r;
    printf("Enter two integers: ");
scanf_s("%d,%d",&n,&m);
    while (n!=0)
    {
        r=m%n;
        m=n;
        n=r;

    }
    printf("Greatest common divisor: %d",m);*/
   /* printf("Enter a fraction: ");
    int m,n,r;
    scanf_s("%d/%d",&m,&n);
    int mon_m=m,son_n=n;
    while (n!=0)
    {
        r=m%n;
        m=n;
        n=r;
    }

    printf("In lowest terms: %d/%d",mon_m/m,son_n/m);*/


   //逆序
   /* printf("Enter a number: ");
    int m,n;
    scanf_s("%d",&m);
    for(;;)
    {
        n=m%10;
        m/=10;
        printf("%d",n);
        if(m==0)
            break;
    }*/
  /* int i ,n,odd,square;
    odd = 3;
    scanf_s("%d",&n);
    for(i=1,square = 1;i<=n;odd+=2,++i)
    {
        printf("%10d%10d\n",i,square);
        square +=odd;
    }*/
  //  日历
  /*
  printf("Enter number of days in month");
    int day,first_day,week_seven;
    scanf("%d",&day);
    printf("Enter starting day of the week (1=Sum,7=Sat): ");
    scanf("%d",&first_day);
    int j = 0;
    printf("\n\n");
    if(j<first_day)
    {
        for(int i =1;i<first_day;i++)
        {printf("\t");
        week_seven++;}
    }
    for(int i=1;i<=day;i++)
        {
            printf("%d\t",i);
            week_seven++;
            if(week_seven==7)
            {
                printf("\n");
                week_seven=0;
            }
        } */
  /*int n,m;
  float e=0;
  scanf("%d",&n);
  for(int i=1,j=1;i<=n;i++)
  {
      e+=1.0f/(j*=i);
  }
    printf("%f",e);*/
  /*int len = 0;
  char ch;
    printf("Enter a message: ");
    while (getchar() !='\n') {
       ch = getchar();
        len++;
    }
    printf("Your message was %d character(s) long.\n",len);*/
    //char ch;
    //ch=getchar();
    //putchar('8');
    /*char c;
    int vowels = 0;
    printf("Enter a sentence: ");
    while((c=getchar()) != '\n'){
        switch (toupper(c)) {
        case 'A':
            case 'E':
                case 'I':
                    case 'O':
                        case 'u':
                            vowels++;
                            break;
                            default:
                                break;
        }
                }
    printf("Your %d",vowels);*/

    //计算器
    printf("Enter an expression: ");
    char ch;
    double num = 0.0,total = 0.0;
    while((ch= getchar()) != '\n'){
        switch (ch) {
            case '+':
                scanf("%lf",&num);
                total+=num;
                break;
            case '-':
                scanf("%lf",&num);
                total-=num;
                break;
            case '*':
                scanf("%lf",&num);
                total*=num;
                break;
            case '/':
                scanf("%ld",&num);
                total/=num;
                break;
        }
    }
    printf("Value of expression: %f\n",total);
  return 0;
}
