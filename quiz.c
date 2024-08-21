#include<stdio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5;
    int point01,point02,point03,point04,point05;
    
    printf("    This game was created by Vyanjan Kumar.\n\n");
    printf("    Welcome to the Game\n\n");
    
    printf("> Press 1 to start the game\n");
    printf("> Press 0 to quit the game\n");
    
    scanf("%d", &i);
    
    if(i==1)
    {
         printf("The game has started\n\n");
    }
    else if(i==0)
    {
         printf("The game has ended\n\n");
    }
    else
    {
         printf("invalid\n\n");
    }
    
    if(i==1)
    {
         printf("1)Who is the father of computer??\n\n");
         printf("1)Charles Babbage\n");
         printf("2)Douglas Engelbart\n");
         printf("3)Karl Ferdinand Braun\n");
         printf("4)Christopher Latham Sholes\n");
         
         printf("Enter Your Answer : ");
         scanf("%d", &ans1);
         
         if(ans1==1)
         {
              printf("Correct Answer\n");
              point1 = 1;
              printf("You have scored %d point\n\n", point1);
         }
         else
         {
              printf("Wrong Answer\n");
              point01 = 0;
              printf("You have scored %d point\n\n", point01);
         }
         
         printf("2)Who is the inventor of computer keyboard ??\n\n");
         printf("1)Charles Babbage\n");
         printf("2)Douglas Engelbart\n");
         printf("3)Karl Ferdinand Braun\n");
         printf("4)Christopher Latham Sholes\n");
         
         printf("Enter Your Answer : ");
         scanf("%d", &ans2);
         
         if(ans2==4)
         {
              printf("Correct Answer\n");
              point2 = 1;
              printf("You have scored %d point\n\n", point2);
         }
         else
         {
              printf("Wrong Answer\n");
              point02 = 0;
              printf("You have scored %d point\n\n", point02);
         }
         
         printf("3) Who is the inventor of computer monitor?\n\n");
         printf("1)Charles Babbage\n");
         printf("2)Douglas Engelbart\n");
         printf("3)Karl Ferdinand Braun\n");
         printf("4)Christopher Latham Sholes\n");
         
         printf("Enter Your Answer : ");
         scanf("%d", &ans3);
         
         if(ans3==3)
         {
              printf("Correct Answer\n");
              point3 = 1;
              printf("You have scored %d point\n\n", point3);
         }
         else
         {
              printf("Wrong Answer\n");
              point03 = 0;
              printf("You have scored %d point\n\n", point03);
         }
         
         printf("4)One Terabyte (1 TB) is equal to\n\n");
         printf("1)1024 bytes\n");
         printf("2)1024 bits\n");
         printf("3)1024 MB\n");
         printf("4)1024 GB\n");
         
         printf("Enter Your Answer : ");
         scanf("%d", &ans4);
         
         if(ans4==4)
         {
              printf("Correct Answer\n");
              point4 = 1;
              printf("You have scored %d point\n\n", point4);
         }
         else
         {
              printf("Wrong Answer\n");
              point04 = 0;
              printf("You have scored %d point\n\n", point04);
         }
         
         printf("5)Who is the founder of microsoft windows?\n\n");
         printf("1)Steve Jobs\n");
         printf("2)Tim Paterson\n");
         printf("3)Bill Gates\n");
         printf("4)Linus Torvalds\n");
         
         printf("Enter Your Answer : ");
         scanf("%d", &ans5);
         
         if(ans5==3)
         {
              printf("Correct Answer\n");
              point5 = 1;
              printf("You have scored %d point\n\n", point5);
         }
         else
         {
              printf("Wrong Answer\n");
              point05 = 0;
              printf("You have scored %d point\n\n", point05);
         }
    }
    
     return 0;
}



