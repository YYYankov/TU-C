#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//int main()
////// char shape;
////    // printf("Enter char: ");
////    // scanf("%s", &shape);
//{
    // // 1
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d ", i);
    // }
//}
//2
/*int main() {
   int i, j,l,h;
   printf("Redowe: ");
   scanf("%d", &n);
   for (i = 1; i <= n; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
*/


//3
//    int main() {
//    int l , n , i, j;
//    printf("Dyljina & shirina\n");
//    scanf("%d%d", &l, &n);
//
//    for (i = 1; i <= l; i++) {
//        for (j = 1; j <= n; j++) {
//            if (i == 1 || i == l || j == 1 || j == n)
//                printf("- ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i, j;
//    char x;
//    printf(" simvol:  ", x);
//    scanf("%c", &x);
//    for(i=1; i<=5; i++)
//    {
//        for(j=i; j<5; j++)
//        {
//            printf(" ");
//        }
//
//        for(j=1; j<=(2*i-1); j++)
//        {
//
//            if(i==5 || j==1 || j==(2*i-1))
//            {
//                printf("%c", x);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//обърната

//int main()
// {
//   int rows=5, i, j, space;
//   char symbol;
//   printf("Enter symbol: ", symbol);
//   scanf("%c", &symbol);
//   for (i = rows; i >= 1; --i)
//   {
//      for (space = 0; space < rows - i; ++space)
//         printf("  ");
//      for (j = i; j <= 2 * i - 1; ++j)
//         printf("%c ", symbol);
//      for (j = 0; j < i - 1; ++j)
//         printf("%c ", symbol);
//      printf("\n");
//   }
//
//   return 0;
//}

int main(){
    // // 5
    // double inch;
    // printf("Enter inches: ");
    // scanf("%lf", &inch);
    // printf("enter 1 for mm\n");
    // printf("enter 2 for cm\n");
    // printf("enter 3 for dm\n");
    // printf("enter 4 for m\n");
    // printf("enter 0 for stop\n");

    // char cmd;
    // while (1)
    // {
    //     scanf("%s", &cmd);
    //     if (cmd == '0')
    //     {
    //         break;
    //     }
    //     else if (cmd == '1')
    //     {
    //         printf("%lf inch = %lf mm\n", inch, inch * 25.4);
    //     }
    //     else if (cmd == '2')
    //     {
    //         printf("%lf inch = %lf cm\n", inch, inch * 2.54);
    //     }
    //     else if (cmd == '3')
    //     {
    //         printf("%lf inch = %lf dm\n", inch, inch * 0.254);
    //     }
    //     else if (cmd == '4')
    //     {
    //         printf("%lf inch = %lf mm\n", inch, inch * 0.0254);
    //     }
    //     else
    //     {
    //         printf("wrong input command\n");
    //     }
    //     printf("Enter inches: ");
    //     scanf("%lf", &inch);
    // }

    // // 6
    // float fahr;
    // float cel;

    // printf("enter celsius:");
    // scanf("%f", &cel);
    // printf("C\tF\n");

    // fahr = cel * 9. / 5 + 32;
    // printf("%d\t%.2f\n", cel, fahr);

    // // 7
    // float deg, rad;
    // printf("Enter angle in Degrees\n");
    // scanf("%f", &deg);
    // rad = deg * (M_PI / 180.0);

    // printf("%.2fdeg = %.4frad\n", deg, rad);

    // // 8
    // float lev;
    // printf("Enter bgn: ");
    // scanf("%f", &lev);

    // printf("%.2f bgn = %.2f usd\n", lev, lev * 0.58);
    // printf("%.2f bgn = %.2f euro\n", lev, lev * 0.51);
    // printf("%.2f bgn = %.2f gbp\n", lev, lev * 0.43);

    // // 9
    // float a, b, h;
    // printf("side a: ");
    // scanf("%f", &a);
    // printf("side b: ");
    // scanf("%f", &b);
    // printf("hight h: ");
    // scanf("%f", &h);
    // printf("Area is: %.2f", (a + b) * h / 2);

    // // 10
    // float deg, rad;
    // printf("Enter angle in Degrees\n");
    // scanf("%f", &deg);
    // rad = deg * (M_PI / 180.0);

    // printf("sin(%.2f) = %.2f\n", deg, sin(rad));

    // // 11
    // int ax, ay, bx, by;
    // printf("Enter coordinates\n");
    // scanf("%d %d %d %d", &ax, &ay, &bx, &by);
    // int l = abs(ax - bx), w = abs(ay - by);
    // printf("Area of this rectangle is: %d\n", l * w);

    // // 12
    // int ax, ay, bx, by, cx, cy;
    // printf("Enter coordinates\n");
    // scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);

    // float ab = sqrt(pow((ax - bx), 2) + pow((ay - by), 2));
    // float ac = sqrt(pow((ax - cx), 2) + pow((ay - cy), 2));
    // float bc = sqrt(pow((cx - bx), 2) + pow((cy - by), 2));
    // float p = ab + ac + bc;
    // float area = sqrt(p / 2 * (p / 2 - ab) * (p / 2 - ac) * (p / 2 - bc));
    // printf("Area: %.2f\n", area);

   // 13
    float w, h;
    scanf("%f %f", &w, &h);
    srand(time(NULL));
    int c = ((rand() % 1) + 1) * w;
    float area_obj = 0.84;
   float t_dest = 2 * area_obj;
   float area_room = w * h;
   float area_free = area_room - t_dest - c - area_obj;

    float worckplaces = area_free / area_obj;

   printf("%.0f\n", worckplaces);
}
