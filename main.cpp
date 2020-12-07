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
    t.loadFromFile("../res/tiles.jpeg");
    Sprite s(t);

    for (int i = 1; i <= 10; i++)
        for (int j=1;j<=10;j++){
            sgrid[i][j]=10;
        }

    while (app.isOpen()){
        Event e;
        while (app.pollEvent(e)){
            if (e.type==Event::Closed)
                app.close();
        }
        app.clear(Color::White);
        for (int i = 1; i <=10; i++)
            for (int j=1;j<=10;j++){
                s.setTextureRect(IntRect(sgrid[i][j]*w,0,w,w));
                s.setPosition(i*w,j*w);
                app.draw(s);
            }
        app.display();
    }

    return 0;
}
