//#include <stdio.h> ///ading marks 
//int main()
//{
//    int marks[5];
//    int i,sum=0 ;
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("enter your numbers\n");
//        scanf("%d", &marks[i]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d\n", marks[i]);
//    }
//    for (i = 0; i < 5; i++)
//    {
//        sum += marks[i];
//    }
//    printf("%d", sum);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    float temp[7];
//    int i;
//
//    for (i = 0; i < 7; i++)
//    {
//        printf("enter temprature days %d:",i+1);
//        scanf("%f", &temp[i]);
//    }
//    for (i = 6; i >=0; i--)
//    {
//        printf("%f\n ", temp[i]);
//    }
//    return 0;
//}

#include <stdio.h>
// int main()
// {
//     int atd[8];
//     int countpresents = 0;
//   int countabsents = 0;
//     int i;
//
//     for (i = 0; i < 8; i++)
//    {
//         printf("Enter attendance of student %d (1 = Present, 0 = Absent): ", i + 1);
//         scanf("%d", &atd[i]);
//     }
//
//    for (i = 0; i < 8; i++)
//         {
//         if (atd[i] == 1)
//                 countpresents++;
//         else
//               countabsents++;
//    }
// }
//    printf("Total present students: %d\n", countpresents);
//   printf("Total absent students: %d\n", countabsents);
//   return 0;
// }
// 
 
 
// #include <stdio.h>
//int main()
//{
//    int marks[10];
//    int average, countpass = 0, countfail = 0, i;  
//  int sum = 0;
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("enter the marks of students %d: ", i + 1);
//        scanf("%d", &marks[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d \n", marks[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//        if (marks[i] <= 50)
//            countpass++;
//        else
//            countfail++;
//            
//         sum += marks[i];
//    }
//  
//    average =(float) sum /10.0;
//    printf("Pass = %d \n fail = %d \n Average = %d\n", countpass, countfail, average);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int sale[7];
//    int max, min;
//    int maxday = 0;
//    int i;
//
//    for (i = 0; i < 7; i++)
//    {
//        printf("enter the sale of day %d: ", i + 1);
//        scanf("%d", &sale[i]);
//    }
//
//    max = sale[0];
//    min = sale[0];
//
//    for (i = 1; i < 7; i++)
//    {
//        if (sale[i] > max)
//        {
//            max = sale[i];
//            maxday = i;
//        }
//        if (sale[i] < min)
//        {
//            min = sale[i];
//        }
//    }
//
//    printf("Highest sale = %d\n", max);
//    printf("Lowest sale = %d\n", min);
//    printf("Highest sale occurred on day %d\n", maxday + 1);
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    int arr[3] = {1, 2,3};
//    int vi[3] = {};  
//    int i;
//
//    for (i = 0; i < 3; i++)
//        {
//            printf("%d \n",arr[i]);
//        }
//        
//        for (i = 0; i < 3; i++)
//        {
//            vi[i]=arr[i];
//            printf("%d\n", vi[i]);
//        }
//    return 0;
//}
//


