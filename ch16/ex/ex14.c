struct point { int x, y; };

struct shape {
    int shape_kind;            
    struct point center;      
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;


int compute_area(struct shape s)
{
    if (s.shape_kind == RECTANGLE)
    {
        return s.u.rectangle.height * s.u.rectangle.width;
    }
    return PI * s.u.circle.radius * s.u.circle.radius;
}

struct shape move_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    return s;
}

struct shape scale_up(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
        return s;
    }

    s.u.circle.radius *= c;
    return s;
}
