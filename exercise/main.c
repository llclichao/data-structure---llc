//数组
/*#include <stdio.h>
#include <stdbool.h>
int main() {
   bool digit_seen[10] = {false};
    int digit;
    long n;
    printf("Enter number: ");
    scanf_s("%ld",&n);
    while (n>0)
    {
        digit =n%10;
        if(digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n/=10;
    }
    if(n>0)
        printf("Repeated digit");
    else
        printf("No repeated digit");*/
    /*int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b= sizeof(a)/sizeof (a[0]);
    printf("size: %d\n",sizeof(a));
    printf("size_a[0]: %d\n",sizeof(a[0]));
    printf("long: %d\n",b);
    return 0;
}*/

    //发牌器
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define NUM_SUITS 4
#define NUM_RANKS 13
    int main(void){
        bool in_hands[NUM_SUITS][NUM_RANKS] = {false};
        int num_cards,suit,rank;
        const char rank_code[NUM_RANKS]={'2','3','4','5','6','7','8','9','j','q','k','a'};
        const char suit_code[NUM_SUITS]={'c','d','h','s'};
        srand((unsigned ) time(NULL));
        printf("Enter number of cards in hand: ");
        scanf_s("%d",&num_cards);
        printf("Your hand:");
        while(num_cards>0)
        {
            suit = rand() % NUM_SUITS;
            rank = rand() % NUM_RANKS;
            if(!in_hands[suit][rank]){
                in_hands[suit][rank] = true;
                num_cards--;
                printf("  %c%c",rank_code[rank],suit_code[suit]);
            }
        }
        printf("\n");
        return 0;
    }*/
/*#include <stdio.h>
#define FIB_NUMBER 40
int main(void){
    int fib_number[FIB_NUMBER]={[0]=0,[1]=1};
    int k=0;
    for(int i=2;i<40;i++)
    {
        fib_number[i]=fib_number[i-1]+fib_number[i-2];
        k++;
        printf("%d\n",fib_number[i]);
    }
    printf("%d",k);
}*/
/*#include <stdio.h>
#define DAYS 30
#define HOURS 24

int main(void){
    int i,j;
    double average=0,temperature_readings[DAYS][HOURS];
    for(i=0;i<DAYS;i++)
    {
        for(j=0;j<HOURS;j++){
            average+= temperature_readings[i][j];
        }
    }
    average/=(HOURS*HOURS);

}*/
/*#include <stdio.h>
#define LINE 8
#define COLUMN 8
int main() {
    char checker_board[LINE][COLUMN];
    int i, j;
    for (i = 0; i < LINE; i++) {
        if (i % 2 != 0) {
            for (j = 0; j < COLUMN; j++) {
                if (j % 2 == 0)
                    checker_board[i][j] = 'R';
                else
                    checker_board[i][j] = 'B';
            }
        } else {
            for (j = 0; j < COLUMN; j++) {
                if (j % 2 != 0)
                    checker_board[i][j] = 'R';
                else
                    checker_board[i][j] = 'B';
            }
        }

    }
    for(i=0;i<LINE;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf(" %c",checker_board[i][j]);
        }
        printf("\n");
    }
}*/

//查重

/*#include<stdio.h>
#include <stdbool.h>
#define DIGIT 100
int main(void){
    printf("Enter a number: ");
    int digit;
    int n;
    bool digit_seen[DIGIT]={false};
    int number[DIGIT];
    for (int i = 0; i < 10; i++)
        number[i] = 0;
    scanf_s("%d", &digit);
    while(digit>=0) {
        while (digit > 0) {
            n = digit % 10;
            if (!digit_seen[n]) {
                digit_seen[n] = true;
                number[n]++;
            } else if (digit_seen[n]) {
                number[n]++;
            }
            digit /= 10;
        }
        printf("Digit: \t\t");
        for (int i = 0; i < 10; i++) {
            printf(" %d", i);
        }
        printf("\n");
        printf("Occurrences:\t ");
        for (int i = 0; i < 10; i++) {
            printf(" %d", number[i]);
        }
        printf("\n");
        printf("Enter a number: ");
        scanf_s("%d",&digit);
    }
}*/
        //大写字母
/*#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100
int main(){
    char c,message[MAX_SIZE];
    int i = 0;
    printf("Enter message: ");
    while((c=getchar())!='\n' && i<MAX_SIZE){
        message[i++]=c;
    }
    printf("In B1FF-speak: ");
    for(i = 0;i<MAX_SIZE;i++){
        switch (c= toupper(message[i])) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'o':
                putchar('0');
                break;
            case 's':
                putchar('5');
                break;
            default:
                putchar(c);
                break;

        }
    }
    printf("!!!!!!!\n");
    return 0;
}*/
/*#include <stdio.h>
#define ROW 10
#define COLUMN 10
int main(){
    int number[ROW][COLUMN];
    int sum_row=0,sum_column=0;
    for(int i=0;i<5;i++){
        printf("Enter roe %d: ",i+1);
        for (int j = 0; j < 5; j++) {
            scanf_s(" %d",&number[i][j]);
        }

    }
    printf("Row totals: ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum_row+=number[i][j];
        }
        printf(" %d",sum_row);
        sum_row=0;
    }
    printf("\n");
    printf("Column totals: ");
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            sum_column+=number[i][j];
        }
        printf(" %d",sum_column);
        sum_column=0;
    }
}*/

//#include <stdio.h>
//#include <stdlib.h> /* srand(), rand() */
//#include <time.h> /* time() */

/*int main(void) {

    char letter = 'A',
            grid[10][10] = {0};
    int i = 0,
            j = 0,
            up = 0,   /* directions are essentially bools, written as ints to */
//down = 0, /* conform with C89 standard.                           */
/*left = 0,
        right = 0,
        move = 0;

srand((unsigned) time(NULL));

grid[i][j] = letter++;

while (letter <= 'Z') {
    up = down = left = right = move = 0;

    if (j + 1 < 10 && grid[i][j + 1] == 0)
        up = 1;
    if (j - 1 >= 0 && grid[i][j - 1] == 0)
        down = 1;
    if (i + 1 < 10 && grid[i + 1][j] == 0)
        right = 1;
    if (i - 1 >= 0 && grid[i - 1][j] == 0)
        left = 1;

    if (up + down + left + right == 0)
        break;

    move = rand() % 4;


    /* Intentional fallthrough if direction fails */
/* switch(move) {
     case 0:
         if (up) {
             grid[i][++j] = letter++;
             break;
         }
     case 1:
         if (down) {
             grid[i][--j] = letter++;
             break;
         }
     case 2:
         if (right) {
             grid[++i][j] = letter++;
             break;
         }
     case 3:
         if (left) {
             grid[--i][j] = letter++;
             break;
         }
     default:
         break;
 }
}

for (i = 0; i < 10; i++) {
 for (j = 0; j < 10; j++) {
     if (grid[i][j] == 0)
         grid[i][j] = '.';
     printf("%c ", grid[i][j]);
 }
 printf("\n");
}

return 0;
}*/
// 随机数
/*#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#define RUW 10
#define Column 10
int main()
{
    char list[RUW][Column];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            list[i][j]='.';
            printf(" %c",list[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    srand((unsigned )time(NULL));
    bool list_exist[RUW][Column] = {false};
    char letter[26];
    for(int i=0;i<=25;i++){
        letter[i]='A'+i;
        printf("%c",letter[i]);
    }
    int n=0,m=0;
    list[n][m]=letter[0];
    int i=0;
    list_exist[n][m]=true;
    while (i<=25)
    {
        int direction = (rand())%4;
        if(direction==0 && (n-1)>=0 && !list_exist[n-1][m])
        {
            ++i;
            list[n-1][m]=letter[i];
            list_exist[n-1][m]=true;
            n-=1;
        }

        else if(direction==1 && (n+1)<10 && !list_exist[n+1][m])
        {
            ++i;
            list[n+1][m]=letter[i];
            list_exist[n+1][m]=true;
            n+=1;
        }
        else if(direction == 2 && (m-1)>=0 && !list_exist[n][m-1])
        {
            ++i;
            list[n][m-1]=letter[i];
            list_exist[n][m-1]=true;
            m-=1;
        }
        else if(direction == 3 && (m+1)<=9 && !list_exist[n][m+1])
        {
            ++i;
            list[n][m+1]=letter[i];
            list_exist[n][m+1]=true;
            m+=1;
        }
    }
    printf("\n\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf(" %c",list[i][j]);
        }
        printf("\n");
    }
}*/
/*#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n)
{
    int divisor;
    if(n<=1)
        return false;
    for(divisor=2;divisor*divisor<=n;divisor++){
        if(n%divisor==0)
            return false;
        return true;
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf_s("%d",&n);
    if(is_prime(n))
        printf("prime\n");
    else
        printf("No prime\n");
    return 0;
}*/
//快速排序
/*#include <stdio.h>
#define N 7
void quicksort(int a[],int low,int high);
int split(int a[],int low,int high);
int main(void){
    int a[N];
    printf("Enter %d numbers to be sort: ",N);
    for ( int i = 0; i < N; i++)
        scanf_s("%d",&a[i]);
    quicksort(a,0,N-1);
    printf("In sort order: ");
    for (int i = 0; i < N;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void quicksort(int a[],int low,int high)
{
    int middle;
    if(low>=high)return;
    middle= split(a,low,high);
    quicksort(a,low,middle-1);
    quicksort(a,middle+1,high);
}
int split(int a[],int low,int high){
    int part_element = a[low];
    for(;;){
        while (low<high && part_element<=a[high])
            high--;
        if(low>=high)break;
            a[low++]=a[high];

        while(low<high && a[low]<=part_element)
            low++;
        if(low>=high)break;
            a[high--]=a[low];
    }
    a[high]=part_element;
    return high;
}*/
/*#include <stdio.h>
int check(int x,int y,int n);
int main(){
    int x,y,n;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&n);
   int q= check(x,y,n);
    printf("%d",q);
}
int check(int x,int y,int n){
    if(x>=0 && y>=0 && x<=(n-1) && y<=(n-1) )
        return 1;
    else
        return 0;
}*/
/*#include <stdio.h>
int gcd(int m,int n);
int main(void){
    int n,m;
    scanf("%d %d",&m,&n);
    int q=gcd(m,n);
    printf("%d",q);
}
int gcd(int m,int n){
    int r;
   while(n>0)
        r=m%n
        m=n;
        n=r;
    }

}*/
//#include<stdio.h>
//int num_digits(int n);
  //int digit(int z,int x);
//int main(void){
    /*int n;
    scanf("%d",&n);
    int m=num_digits(n);
    printf("%d\n",m);*/
   //// int z,x;
    //scanf("%d %d",&z,&x);
    //int o=digit(z,x);
    //printf("%d",o);

//}
/*int num_digits(int n){
    int i=0;
    while(n>0)
    {
        i++;
        n/=10;
    }
    return i;
}*/
/*int digit(int z,int x){

    while(x-- >1){
        if((z /= 10) <= 0)
            return 0;
    }
    return z % 10;

}*/
#include <ctype.h>
#include <stdio.h>
int max_number(int a[],int n);
int average(int a[],int n);
int computer(char grades[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("max_number : %d\n",max_number(a,n));
    printf("Average :%d\n",average(a,n));
}
int max_number(int a[],int n){
    int max=a[0];
    int i=0;
    while (i++<n){
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int average(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}
int compute_GPA(char grades[],int n){
    float total = 0.0f;
    int i;
    for(i=0;i<n;i++){
        switch (toupper(grades[i])) {
            case 'A':
                total+=4.0f;
                break;
            case 'B':
                total+=3.0f;
                break;
            case 'C':
                total+=2.0f;
                break;
            case 'D':
                total+=1.0f;
                break;
            case 'f':
            default:
                break;

        }
    }
    return total/n;
}




