#include <stdio.h>
int main()
{
    float x,y,i,j, height, weight, bmi;
    printf("\n\t\t\t\tBMI Calculator\n\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\tWELCOME TO OUR BMI CALCULATING SYSTEM\t\4\t\t\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");


    printf("\nEnter your height Foot, inch\n");
    scanf("%f %f", &x,&y);

    i=(x/3.281);
    j=(y/39.37);
    height=(i+j);

    printf("Enter your weight in kg\n");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("\nYour Body Mass Index(BMI) is %.1f\n", bmi);


    if(bmi < 15)
    {
        printf("\nYour BMI category is: \n\nYou should take more protine to gain your weight\n");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("\nYour BMI category is: \n\nYou should take more protine to gain your weight\n");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("\nYour BMI category is: Underweight\n\nYou should take more protine to gain your weight\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("\nYour BMI category is: Ideal\n");
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("\nYour BMI category is: Overweight\n\nYou should control Your food and have to exercise every day.\n");
    }
    else if(bmi >= 30 && bmi <= 34.9)
    {
        printf("\nYour BMI category is: Obese Class I\n\nYou should control Your food and have to exercise every day.\n");
    }
    else if(bmi >= 35 && bmi <= 39.9)
    {
        printf("\nYour BMI category is: Obese Class II\n\nYou should control Your food and have to exercise every day.\n");
    }
    else if(bmi >= 40)
    {
        printf("\nYour BMI category is: Obese Class III\n\nYou should control Your food and have to exercise every day.\n");
    }

    if (bmi < 18.6)
    {
       float x1=(18.6*height*height)-weight;
       printf("\nYou have to gain %.2f kg for ideal BMI\n",x1);
    }
    else if(bmi > 24.9)
    {
      float y1=weight-(24.9*height*height);
       printf("\nYou have to loss %.2f kg for ideal BMI\n",y1);
    }


    return 0;
}
