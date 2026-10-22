#include<stdio.h>
int main()
{
    int n;
    printf("enter a number 
    (1-2): ");
    scanf("%d", &n);
    swich(n)
    {
        case 1:
        printf("monday");
        break;

        case 2;
        printf("thusday");
        break;
        default:
        printf("invalid number");
    }
        return 0;
}