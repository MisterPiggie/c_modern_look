#include <stdio.h>
#include <stdlib.h>

void find_closest (int desired_time, int *departure_time, int *arrival_time);

struct flight
{
    int departure;
    int arrival; 
};
 
struct flight f[] = { 
    {480, 616},
    {583, 712},
    {679, 811},
    {767, 900},
    {840, 968},
    {945, 1075},
    {1140, 1280},
    {1305, 1438}};

int main(void) {
    int user_time, hour, minute, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    find_closest(user_time, &departure_time, &arrival_time);
    printf("Closest departure time is %.2d:%.2d, arriving %.2d:%.2d",
            departure_time / 60, departure_time % 60,
            arrival_time / 60, arrival_time % 60);

    return 0;
}  



void find_closest (int desired_time, int *departure_time, int *arrival_time){
    int i, difference_i = 0, difference = abs(f[0].departure - desired_time);
    
    for (i = 1; i < ((int) (sizeof(f) / sizeof(f[0]))); i++)
    {
        if (difference > (abs(f[i].departure - desired_time)))
        {
           difference_i = i;
           difference = abs(f[i].departure - desired_time);
        }
    }
    *departure_time = f[difference_i].departure;
    *arrival_time = f[difference_i].arrival;
}

