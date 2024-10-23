//---------patern-1----------//

/*ROW=I
  COLUMN=J

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//---------patern-2----------//
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//---------patern-3----------//
/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
// }

//---------patern-4----------//

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

//---------patern-5----------//

/*

1
2  3
4  5  6
7  8  9  10
11 12 13 14 15

*/

// #include <stdio.h>
// int main()
// {
//     int val1 = 0;

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             val1++;
//             printf("%d ", val1);
//         }
//         printf("\n");
//     }
// }

//---------patern-6----------//

/*
   A
   B B
   C C C
   D D D D
   E E E E E
*/

// #include <stdio.h>
// int main()
// {
//     for (char i = 65; i <= 69; i++)
//     {
//         for (char j = 65; j <= i; j++)
//         {
//             printf("%c ", i);
//         }
//         printf("\n");
//     }
// }

//---------patern-7----------//

/*
  A
  A B
  A B C
  A B C D
  A B C D E
*/

// #include <stdio.h>
// int main()
// {
//     for (char i = 65; i <= 69; i++)
//     {
//         for (char j = 65; j <= i; j++)
//         {
//             printf("%c ", j);
//         }
//         printf("\n");
//     }
// }

//---------patern-8----------//

/*
  A
  B C
  D E F
  G H I J
  K L M N O
*/

// #include <stdio.h>
// int main()
// {
//   char alpha = 'A';
//   for (char i = 1; i <= 5; i++)
//   {
//     for (char j = 1; j <= i; j++)
//     {
//       printf("%c ", alpha);
//       alpha++;
//     }
//     printf("\n");
//   }
// }

//---------patern-9----------//

/*
  #
  $ %
  & ' (
  ) * + ,
  - . / 0 1
*/

// #include <stdio.h>
// int main()
// {
//   char alpha = '#';
//   for (char i = 1; i <= 5; i++)
//   {
//     for (char j = 1; j <= i; j++)
//     {
//       printf("%c ", alpha);
//       alpha++;
//     }
//     printf("\n");
//   }
// }

//---------patern-10----------//

/*
 45
 45 46
 45 46 47
 45 46 47 48
 45 46 47 48 49
 */

// #include <stdio.h>
// int main()
// {
//   for (int i = 45; i <= 49; i++)
//   {
//     for (int j = 45; j <= i; j++)
//     {
//       printf("%d ", j);
//     }
//     printf("\n");
//   }
// }

//---------patern-11----------//

/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */

// #include <stdio.h>
// int main()
// {
//   for (int i = 5; i >= 1; i--)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
// }

//---------patern-12----------//

/*
  5 5 5 5 5
  4 4 4 4
  3 3 3
  2 2
  1
*/

// #include <stdio.h>
// int main()
// {
//   for (int i = 5; i >= 1; i--)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("%d ", i);
//     }
//     printf("\n");
//   }
// }

//---------patern-13----------//

/*
  1 1 1 1 1
  2 2 2 2
  3 3 3
  4 4
  5
*/

// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 5; j >= i; j--)
//     {
//       printf("%d ", i);
//     }
//     printf("\n");
//   }
// }

//---------patern-14----------//

/*
  1  2  3  4  5
  6  7  8  9
  10 11 12
  13 14
  15
*/

// #include <stdio.h>
// int main()
// {
//   int val1 = 0;

//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 5; j >= i; j--)
//     {
//       val1++;
//       printf("%d ", val1);
//     }
//     printf("\n");
//   }
// }

//---------patern-15----------//

/*
 5 4 3 2 1
 5 4 3 2
 5 4 3
 5 4
 5
*/

// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 5; j >= i; j--)
//     {
//       printf("%d ", j);
//     }
//     printf("\n");
//   }
// }

//---------patern-16----------//

/*
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */

// #include <stdio.h>
// int main()
// {

//   int i, j;
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 5; j++)
//     {
//       if (i == 1 || j == 1 || i == 5 || j == 5)
//       {
//         printf(" *");
//       }
//       else
//       {
//         printf("  ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }

//---------patern-17----------//

/*
  0
  1 1
  0 0 0
  1 1 1 1
  0 0 0 0 0
*/

// #include <stdio.h>
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//       if (i % 2 == 0)
//       {
//         printf("1");
//       }
//       else
//       {
//         printf("0");
//       }
//     }
//     printf("\n");
//   }
// }

//---------patern-18----------//

/*
  1
  0 0
  1 1 1
  0 0 0 0
  1 1 1 1 1
*/

// #include <stdio.h>
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//       if (i % 2 == 0)
//       {
//         printf("0");
//       }
//       else
//       {
//         printf("1");
//       }
//     }
//     printf("\n");
//   }
// }

//---------patern-19----------//

/*
 0
 0 1
 0 1 0
 0 1 0 1
 0 1 0 1 0
*/

// #include <stdio.h>
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//       if (j % 2 == 0)
//       {
//         printf("1");
//       }
//       else
//       {
//         printf("0");
//       }
//     }
//     printf("\n");
//   }
// }

//---------patern-20----------//

/*
 0
 0 1
 0 1 0
 0 1 0 1
 0 1 0 1 0
*/

// #include <stdio.h>
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//       if (j % 2 == 0)
//       {
//         printf("0");
//       }
//       else
//       {
//         printf("1");
//       }
//     }
//     printf("\n");
//   }
// }

//---------patern-21----------//

/*
 1 2 3 4 5
   6 7 8 9
     1 2 3
       4 5
         6
*/

// #include <stdio.h>
// int main()
// {
//   int val1 = 0;

//   for (int i = 1; i <= 1; i++)
//   {
//     for (int k = 1; k >= 4; k++)
//     {
//       printf(" ");
//     }
//     for (int j = 1; j <= 5; j++)
//     {
//       if ()
//         val1++;
//       printf("%d", val1);
//     }
//   }
// }

//---------patern-22----------//

/*
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *

*/

// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int k = 4; k >= i; k--)
//     {
//       printf(" ");
//     }
//     for (int j = 1; j <= (i * 2) - 1; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
// }

//---------patern-23----------//

// /*        *
//         *   *
//       *       *
//     *           *
//   * * * * * * * * *
// */

// #include <stdio.h>
// int main()
// {
//   int i, j;
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 9; j++)
//     {
//       if (i + j == 6 || j - i == 4 || i == 5)
//       {
//         printf(" *");
//       }
//       else
//       {
//         printf("  ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }

//---------patern-24----------//

//          *
//        *   *
//      *   *   *
//    *   *   *   *
//  *   *   *   *   *
//  *   *   *   *   *
//    *   *   *   *
//      *   *   *
//        *   *
//          *

// #include <stdio.h>
// int main()
// {
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int k = 4; k >= i; k--)
//     {
//       printf(" ");
//     }
//     // for (int j = 1; j <= (i * 2) - 1; j++)
//     for (int j = 1; j <= i; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
// }

// Extra patern---------------------------

#include <stdio.h>
int main()
{
  int i, j;
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= 17; j++)
    {
      if (i == 1 && j == 1 || i == 1 && j == 9 || i == 1 && j == 17 ||
          i == 2 && j == 1 || i == 2 && j == 2 || i == 2 && j == 8 || i == 2 && j == 9 || i == 2 && j == 10 || i == 2 && j == 16 || i == 2 && j == 17 ||
          i == 3 && j == 1 || i == 3 && j == 2 || i == 3 && j == 3 || i == 3 && j == 7 || i == 3 && j == 8 || i == 3 && j == 9 || i == 3 && j == 10 || i == 3 && j == 11 || i == 3 && j == 15 || i == 3 && j == 16 || i == 3 && j == 17 ||
          i == 4 && j == 1 || i == 4 && j == 2 || i == 4 && j == 3 || i == 4 && j == 4 || i == 4 && j == 6 || i == 4 && j == 7 || i == 4 && j == 8 || i == 4 && j == 9 || i == 4 && j == 10 || i == 4 && j == 11 || i == 4 && j == 12 || i == 4 && j == 14 || i == 4 && j == 15 || i == 4 && j == 16 || i == 4 && j == 17 || i == 5 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 6 || i == 6 && j == 7 || i == 6 && j == 8 || i == 6 && j == 9 || i == 6 && j == 10 || i == 6 && j == 11 || i == 6 && j == 12 || i == 6 && j == 14 || i == 6 && j == 15 || i == 6 && j == 16 || i == 6 && j == 17 || i == 7 && j == 1 || i == 7 && j == 2 || i == 7 && j == 3 || i == 7 && j == 7 || i == 7 && j == 8 || i == 7 && j == 9 || i == 7 && j == 10 || i == 7 && j == 11 || i == 7 && j == 15 || i == 7 && j == 16 || i == 7 && j == 17 ||
          i == 8 && j == 1 || i == 8 && j == 2 || i == 8 && j == 8 || i == 8 && j == 9 || i == 8 && j == 10 || i == 8 && j == 16 || i == 8 && j == 17 ||
          i == 9 && j == 1 || i == 9 && j == 9 || i == 9 && j == 17)
      {
        printf(" *");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}