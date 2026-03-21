enum {NORTH, SOUTH, EAST, WEST} direction;

int x = 0;
int y = 0;

void change_coords(void)
{
    switch (direction) {
        case SOUTH: y++; break;
        case NORTH: y--; break;
        case EAST: x++; break;
        case WEST: x--; break;
        default: break;
    }
}
