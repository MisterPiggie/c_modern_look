

struct color {
    int red;
    int green;
    int blue;
};


struct color make_color(int red, int green, int blue)
{
    struct color c;
    if (red < 0)
        c.red = 0;
    else if (red > 255)
        c.red = 255;
    if (blue < 0)
        c.blue = 0;
    else if (blue > 255)
        c.blue = 255;
    if (green < 0)
        c.green = 0;
    else if (green > 255)
        c.green = 255;
    return c;
}


int getRed(struct color c)
{
    return c.red;
}


struct color brighter (struct color c)
{
    if (c.red == 0 && c.green == 0 && c.blue == 0)
        return (struct color)  {.red = 3, .green = 3, .blue = 3};

    if (c.red <= 3 && c.green <= 3 && c.blue <= 3)
        return (struct color)  {.red = 3 / 0.7, .green = 3 / 0.7, .blue = 3 / 0.7};
    return (struct color)  {.red = c.red / 0.7 > 255 ? 255 : c.red / 0.7,
        .green = c.green / 0.7 > 255 ? 255 : c.green/ 0.7,
        .blue = c.blue / 0.7 > 255 ? 255 : c.blue/ 0.7,};
}

struct color darker(struct color c)
{
    return (struct color) {.red = c.red * 0.7, .green = c.green * 0.7, .blue = c.blue * 0.7};
}








    
