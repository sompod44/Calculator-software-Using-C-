//Bismillahir Rahmanir Rahim
/*My first project calculator using c programing */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,value1,someva;
    double a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,value2,value3,value4;
    here:

    printf("\t\t:::::::::::::WELCOME:::::::::::::\n");

    printf("\n\t\t<<<This Is Calculator Software.>>>\n");
    printf("\n\t\t\t\t\t\tCreate By SOMPOD. Date:18/03/2017\n\n");
    printf("[N.B:This calculator software at a same time can use maximum 10 Integer/Float numbers.  \n\n");
    printf("\n\n\t\tType 1 if you Want calculate ADD/PLUS.  ");
    printf("\n\n\t\tType 2 if you Want calculate MINUS.     ");
    printf("\n\n\t\tType 3 if you Want calculate MALTIPLY.  ");
    printf("\n\n\t\tType 4 if you Want calculate DIVIDE.    ");
    printf("\t\n\nEnter your choice here : ");
    scanf("%d",&value1);

    switch(value1) //use switch condition for ADD number
    {
    case 1:

        printf("\n\tType 2  if you want to ADD 'Two  ' numbers.");
        printf("\n\tType 3  if you want to ADD 'Three' numbers.");
        printf("\n\tType 4  if you want to ADD 'Four ' numbers.");
        printf("\n\tType 5  if you want to ADD 'Five ' numbers.");
        printf("\n\tType 6  if you want to ADD 'Six  ' numbers.");
        printf("\n\tType 7  if you want to ADD 'Seven' numbers.");
        printf("\n\tType 8  if you want to ADD 'Eight' numbers.");
        printf("\n\tType 9  if you want to ADD 'Nine ' numbers.");
        printf("\n\tType 10 if you want to ADD 'Ten  ' numbers.");
        printf("\n\n\nEnter here : ");

        scanf("%d",&i);

        switch(i)
        {
        case 2:

            printf("\nEnter Two integer numbers :");
            scanf("%lf %lf", &a1,&b1);
            c1 = a1+b1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", c1);
            break;

        case 3:

            printf("\nEnter THREE integer numbers :");
            scanf("%lf %lf %lf", &a1,&b1,&c1);
            d1 = a1+b1+c1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", d1);
            break;

        case 4:

            printf("\nEnter FOUR integer numbers :");
            scanf("%lf %lf %lf %lf", &a1,&b1,&c1,&d1);
            e1 = a1+b1+c1+d1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", e1);
            break;

        case 5:

            printf("\nEnter FIVE integer numbers :");
            scanf("%lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1);
            f1 = a1+b1+c1+d1+e1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", f1);
            break;

        case 6:

            printf("\nEnter SIX integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1);
            g1 = a1+b1+c1+d1+e1+f1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", g1);
            break;


        case 7:

            printf("\nEnter SEVEN integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1);
            h1 = a1+b1+c1+d1+e1+f1+g1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", h1);
            break;

        case 8:

            printf("\nEnter EIGHT integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1,&h1);
            i1 = a1+b1+c1+d1+e1+f1+g1+h1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", i1);
            break;

        case 9:

            printf("\nEnter NINE integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1,&h1,&i1);
            j1 = a1+b1+c1+d1+e1+f1+g1+h1+i1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", j1);
            break;


        case 10:
            printf("\nEnter TEN integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1,&h1,&i1,&j1);
            k1 = a1+b1+c1+d1+e1+f1+g1+h1+i1+j1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", k1);
            break;

        }
        break;
    case 2:
        printf("\nYou can type Two type integer numbers for MINUS :");
        scanf("%lf %lf",&value2,&value3);
        value4 = value2 - value3;
        printf("\n\nSee your answer = %0.2lf", value4);
        break;
    case 3:
        printf("\n\tType 2  if you want to MALTIPLY 'Two  ' numbers.");
        printf("\n\tType 3  if you want to MALTIPLY 'Three' numbers.");
        printf("\n\tType 4  if you want to MALTIPLY 'Four ' numbers.");
        printf("\n\tType 5  if you want to MALTIPLY 'Five ' numbers.");
        printf("\n\tType 6  if you want to MALTIPLY 'Six  ' numbers.");
        printf("\n\tType 7  if you want to MALTIPLY 'Seven' numbers.");
        printf("\n\tType 8  if you want to MALTIPLY 'Eight' numbers.");
        printf("\n\tType 9  if you want to MALTIPLY 'Nine ' numbers.");
        printf("\n\tType 10 if you want to MALTIPLY 'Ten  ' numbers.");
        printf("\n\n\nEnter here : ");

        scanf("%d",&j);

        switch(j)//use switch condition for MALTIPLY numbers
        {
        case 2:

            printf("\nEnter Two integer numbers :");
            scanf("%lf %lf", &a1,&b1);
            c1 = a1*b1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", c1);
            break;

        case 3:

            printf("\nEnter THREE integer numbers :");
            scanf("%lf %lf %lf", &a1,&b1,&c1);
            d1 = a1*b1*c1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", d1);
            break;

        case 4:

            printf("\nEnter FOUR integer numbers :");
            scanf("%lf %lf %lf %lf", &a1,&b1,&c1,&d1);
            e1 = a1*b1*c1*d1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", e1);
            break;

        case 5:

            printf("\nEnter FIVE integer numbers :");
            scanf("%lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1);
            f1 = a1*b1*c1*d1*e1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", f1);
            break;

        case 6:

            printf("\nEnter SIX integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1);
            g1 = a1*b1*c1*d1*e1*f1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", g1);
            break;


        case 7:

            printf("\nEnter SEVEN integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1);
            h1 = a1*b1*c1*d1*e1*f1*g1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", h1);
            break;

        case 8:

            printf("\nEnter EIGHT integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1,&h1);
            i1 = a1*b1*c1*d1*e1*f1*g1*h1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", i1);
            break;

        case 9:

            printf("\nEnter NINE integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1,&h1,&i1);
            j1 = a1*b1*c1*d1*e1*f1*g1*h1*i1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", j1);
            break;


        case 10:
            printf("\nEnter TEN integer numbers :");
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &a1,&b1,&c1,&d1,&e1,&f1,&g1,&h1,&i1,&j1);
            k1 = a1*b1*c1*d1*e1*f1*g1*h1*i1*j1;
            printf("\n\nSEE YOUR ANSWER = %0.2lf", k1);
            break;
        }
        break;
    case 4:
        printf("\nYou can type Two type integer numbers for DIVIDE :");
        scanf("%lf %lf",&value2,&value3);

        value4 = value2 / value3;
        printf("\n\nSee your answer = %0.2lf", value4);

        break;
    default:
        printf("\n\tOpps!!!......You Input wrong");


    }


    printf("\n\n\n\t\t::.....THANK YOU USER FOR USING MY SOFTWARE.....::");

    printf("\n\t\nPress \(1\) For again Run this software.");
    printf("\n\n\t\tOR");
    printf("\n\t\npress \(2\) For Exit software.............!!!!!\n");
    scanf("%d" , &someva);

    if(someva==1)
    {
        system("cls");
        goto here;
    }



    getch();




}
