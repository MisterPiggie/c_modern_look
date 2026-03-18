struct time {
    int seconds;
    int hours;
    int minutes;
};

struct time split_time(long total_sec)
{
    struct time t;
    t.seconds = total_sec % 60;
    total_sec /= 60;
    t.minutes = total_sec % 60;
    total_sec /= 60;
    t.hours = total_sec % 24;
    return t;
}
