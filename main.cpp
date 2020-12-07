#include <iostream>
#include <SFML/Graphics.hpp>
#include <time.h>

using namespace  sf;
int main() {

    srand(time(0));
    RenderWindow app(VideoMode(400,400),"Minesweeper!");

    int w=32;
    int grid[12][12];
    int sgrid[12][12];

    Texture t;
    t.loadFromFile("res/tiles.jpg");

    return 0;
}
