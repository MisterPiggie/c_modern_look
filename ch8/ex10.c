#include <stdio.h>

int main(void) {

    int i,
        user_time,
        hour,
        departure_hour,
        departure_minute,
        arrival_hour,
        arrival_minute,
        minute,
        dep[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
        arr[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    printf("Closest departure time is ");

    for (i = 0; i < 7; i++) {
        if (user_time <= dep[i] + 
            (dep[i + 1] - dep[i]) / 2) {

            departure_hour = dep[i] / 60 > 12 ? dep[i] / 60 - 12 : dep[i] / 60;
            departure_minute = dep[i] % 60;
            arrival_hour = arr[i] / 60 > 12 ? arr[i] / 60 - 12 : arr[i] / 60;
            arrival_minute = arr[i] % 60;

            printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", 
                   departure_hour, departure_minute, dep[i] / 60 > 11 ? 'p' : 'a',
                   arrival_hour, arrival_minute, arr[i] / 60 > 11 ? 'p' : 'a');
            return 0;
        }
    }

    departure_hour = dep[7] / 60 > 12 ? dep[7] / 60 - 12 : dep[7] / 60;
    departure_minute = dep[7] % 60;
    arrival_hour = arr[7] / 60 > 12 ? arr[7] / 60 - 12 : arr[7] / 60;
    arrival_minute = arr[7] % 60;
   
    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
           departure_hour, departure_minute, dep[7] / 60 > 11 ? 'p' : 'a',
           arrival_hour, arrival_minute, arr[7] / 60 > 11 ? 'p' : 'a');
   return 0;
}
