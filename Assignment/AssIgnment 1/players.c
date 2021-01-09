
// To get and display the players details
#include<stdio.h>
#include<stdlib.h>

struct players 
{
    int player_id;
    char *name; 
    struct score
    {
        int boundaries;
        int sixer;
    } score;
    int points;
    char *ratings;
};
typedef struct players players;
players num_of_players[11];
int size = sizeof(num_of_players)/sizeof(num_of_players[0]);

int comparator(const void* p, const void* q) 
{ 
    const players *p1 = p;
    const players *p2 = q;
    return p2->points - p1->points; 
} 

void score_board()
{
    qsort(num_of_players, size,sizeof(players),comparator);
}

void ratings(int i)
{
        num_of_players[i].ratings = (struct player *)malloc(sizeof(char)* 10 );
        if (num_of_players[i].points >= 100)
            num_of_players[i].ratings = "Excellent";
        else if(num_of_players[i].points >= 50 && num_of_players[i].points < 100 )
            num_of_players[i].ratings = "Good";
        else 
            num_of_players[i].ratings = "Fair";

        
    
}

void get(int number)
{
   
    
    for (int i = 0; i < number; i++)
    {
        num_of_players[i].name = (struct players *)malloc(sizeof(char)*15);
      
        printf("-------------------- for player %d --------------------\n",i+1);
        printf("\nPlayer_id\t");
        scanf("%d",&num_of_players[i].player_id);
        printf("\nName\t");
        scanf("%s",num_of_players[i].name);
        printf("\nNo of boundaries\t");
        scanf("%d",&num_of_players[i].score.boundaries);
        printf("\nNo of sixer\t");
        scanf("%d",&num_of_players[i].score.sixer);
        num_of_players[i].points = (num_of_players[i].score.boundaries * 4) + (num_of_players[i].score.sixer * 6);
        ratings(i);
    }
  
}

void display(int number)
{
    
    printf("------------------------------------------------------------------------------\n");
    printf("|%-5s||%-10s||%-15s||%-11s||%-6s||%-7s||%-10s|\n","S no","player id","Name","Boundaries","sixer","Points","Ratings");
    printf("------------------------------------------------------------------------------\n");
    for (int i = 0; i < number; i++)
    {
        printf("|%-5d|",i+ 1);
        printf("|%-10d|",num_of_players[i].player_id);
        printf("|%-15s|",num_of_players[i].name);
        printf("|%-11d|",num_of_players[i].score.boundaries);
        printf("|%-6d|",num_of_players[i].score.sixer); 
        printf("|%-7d|",num_of_players[i].points);
        printf("|%-10s|",num_of_players[i].ratings);
        printf("\n");
    }
    printf("------------------------------------------------------------------------------\n");

    
}

int main()
{
    int no_of_players;
    printf("How many players do you want to enter\n");
    scanf("%d",&no_of_players);
    get(no_of_players);
    score_board();
    display(no_of_players);
    return 0;

}