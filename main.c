#include <stdio.h>

enum PrintProduct {
    book, journal, newspaper, copybook, comic_book, manga, ranabe, leaflet
};
struct Circle {
    float radius;
    float x_Coordinates;
    float y_coordinates;
};

float GetArea(struct Circle *c) {
    return 3.14 * c->radius * c->radius;
}

struct All_numbs {
    unsigned int als: 3;
};
union keyboard {
    struct All_numbs alls;
    struct {
        unsigned int play: 1;
        unsigned int pause: 1;
        unsigned int record: 1;
    } tmp;
};

int main() {
    char status[2][4] = {"Off", "On"};
    enum PrintProduct product = newspaper;
    printf("newspaper-%d\n", product);
    struct Circle c1 = {10, 0, 0};
    float area = GetArea(c1);
    printf("%f\n", area);
    int num;
    scanf("%x", &num);
    struct All_numbs mp = {num};
    union keyboard keyboard;
    keyboard.alls = mp;
    printf("NumLock-%s\nCapsLock-%s\nScrollLock-%s\n", status[keyboard.tmp.play],status[keyboard.tmp.pause],status[keyboard.tmp.record]);
    return 0;
}
