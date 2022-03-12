//Calculating the final score for CSE115
#include<stdio.h>
int main()
{    

	int assignment=0,quiz=0,midterm=0,final=0,class_performance=0;
	printf("To show your final number please submit your assessment one by one.");
	

   start:
	printf("\n\nFirst enter the marks for assignment(Input range : 1-10): ");
	  scanf("%d",&assignment);     
      if(assignment>10){
         printf("Wrong Input.Input again.\n");  
         goto start;
     }
      
   
    start2:
   printf("\nEnter the marks for quizzes(Input Range 1-20): ");
	  scanf("%d",&quiz);
      if(quiz>20){
         printf("Wrong input.Input again.\n");
         goto start2;
      }
      
      start3:
    printf("\nEnter the number for Mid-Term(Input range 1-25) :  ");
	  scanf("%d",&midterm);
         if(midterm>25){
            printf("Wrong input.Input again.\n");
         
         goto start3;
      }

      start4:
	printf("\nEnter the number for Final Exam(Input range 1-35) : ");
	  scanf("%d",&final);
     if(final>35){
      printf("Wrong input.Input again.\n");
     
      goto start4;
   }



      start5:
	printf("\nEnter the number for Class Performance(Input range 1-10): ");
	  scanf("%d",&class_performance);
     if(class_performance>10){
      printf("Wrong input.Input again.\n\n");
     
      goto start5;
   }

	int  total = (assignment+quiz+midterm+final+class_performance);
       
          printf("The total score is : %d\n\n",total);


     if(total<60){
     	printf("CGPA is  F (0.0)\n");}
    else if(total>=60 && total<66){
       printf("CGPA is D (1.0) \n");}
    else if(total>=66 && total<69){
       printf("CGPA is D+ (1.3) \n");}
      else if(total>=70 && total<72){
       printf("CGPA is D (1.7) \n");}
    else if(total>=73 && total<76){
       printf("CGPA is C(Average) (2.0)\n");}
    else if(total>=77 && total<79){
       printf("CGPA is C+ (2.3) \n");}
    else if(total>=80 && total<82){
       printf("CGPA is B- (2.7) \n");}
     else if(total>=83 && total<86){
       printf("CGPA is B (Good) (3.0) \n");}
     else if(total>=87 && total<89){
       printf("CGPA is B+ (3.3) \n");}
     else if(total>=90 && total<92){
       printf("CGPA is A- (3.7) \n");}
     else if(total>=93 && total<=100){
     	printf("CGPA is A+ (Excellent) (4.0) \n");}
     


}