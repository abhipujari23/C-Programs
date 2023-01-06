#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "BJP"
#define CANDIDATE2 "SHIVSENA"
#define CANDIDATE3 "MNS"
#define CANDIDATE4 "CONGRESS"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

class voter{
    bool hasvoted = false;

    void castVote(){
        int choice;

        printf("\t\t ### Please choose your Party for Vote ####\t\t");
        printf("\n 1. %s", CANDIDATE1);
        printf("\n 2. %s", CANDIDATE2);
        printf("\n 3. %s", CANDIDATE3);
        printf("\n 4. %s", CANDIDATE4);
        printf("\n 5. %s", "None of These");

        printf("\n\n Input your choice (1 - 4): ");
        scanf("%d",&choice);

        switch(choice){
            case 1: votesCount1++; break;
            case 2: votesCount2++; break;
            case 3: votesCount3++; break;
            case 4: votesCount4++; break;
            case 5: spoiledtvotes++; break;
            default: printf("\n Error: Wrong Choice !! Please retry");
            
        getchar();
    }

    printf("\n-----------------------------------------\n");

    printf("\n Thanks for the vote !!");
    printf("\n-----------------------------------------\n");
}
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

void getLeadingCandidate(){

    printf("\t\t  ~ Wining Party ~\t\n");
   printf("\n--------");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");   
   
   
   
}

int main()
{
int i, id;
int choice;

voter1 = new voter();
voter2 = new voter();
voter3 = new voter();
voter4 = new voter();

do{
printf("\t\t\t***** Welcome to Election/Voting 2022 ****");
printf("\t         \n");
printf("\n\n 1.Select to Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find Voting Results");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: 
        printf("Enter your id: ");
        scanf("%d", &id);
        if(id = 1){
            if(voter1.hasvoted != true){
                voter1.hasvoted = true;
                voter1.castvote();
            }
            else{
                printf("You have already voted.")
            }
        }
        else if(id = 2){
            if(voter2.hasvoted != true){
                voter2.hasvoted = true;
                voter2.castvote();
            }
            else{
                printf("You have already voted.")
            }
        }
        else if(id = 3){
            if(voter3.hasvoted != true){
                voter3.hasvoted = true;
                voter3.castvote();
            }
            else{
                printf("You have already voted.")
            }
        }
        else if(id = 4){
            if(voter4.hasvoted != true){
                voter4.hasvoted = true;
                voter4.castvote();
            }
            else{
                printf("You have already voted.")
            }
        }
        break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid option");
}
}while(choice!=0);

getchar();

return 0;
}
