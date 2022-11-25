#include <cstring>
#include <stdio.h>

struct airline_ticket {
  char name[50];
  int id;
  int group;
  char airline[50];
  int gate;
  char dest[50];
};

void makeTickets(numTickets, tickets){
    for ( int i = 0 ; i< numTickets ; i++){
        airline_ticket tempTicket; 
        scanf(" %s %d %d %s %d %s",
        tempTicket.name, &tempTicket.id, &tempTicket.group, tempTicket.airline, &tempTicket.gate, tempTicket.dest
        );
        tickets[i] = tempTicket;

    }
}
int main(){
    int numTickets;
    printf("How many tickets are there? ");
    scanf("%d", &numTickets);
    airline_ticket tickets[numTickets];




}

void makeTickets(int n, ){

}
