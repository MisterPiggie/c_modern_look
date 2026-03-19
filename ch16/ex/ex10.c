#include <stdbool.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upper_left;
    struct point lower_right;
};


int area_of_rectangle(struct rectangle r)
{
    return ((r.upper_left.y - r.lower_right.y) * (r.lower_right.x - r.upper_left.x));
}

struct point center_of_rectangle(struct rectangle r)
{
    return (struct point) {.x = (r.lower_right.x - r.upper_left.x)/2, .y = (r.upper_left.y - r.lower_right.y)/2};
}

struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    return (struct rectangle) { .lower_right.x = r.lower_right.x + x, .lower_right.y = r.lower_right.y + y,
                                .upper_left.x = r.upper_left.x + x, .upper_left.y = r.upper_left.y + y};
}

bool is_point_within_recntagle(struct rectangle r, struct point p)
{
    if (p.x >= r.upper_left.x && p.x <= r.lower_right.x && p.y <= r.upper_left.y && p.y >= r.lower_right.y)
        return true;
    return false;
}
