#include "Pole.h"



void initPoles(std::vector<sf::RectangleShape>& poles, int width, int height  ); 
int main()
{
    unsigned width = 1000, height = 500; 
    sf::RenderWindow window(sf::VideoMode(width ,height ), "Tower Of Hanoi"); 
    std::vector<sf::RectangleShape> poles; 
    initPoles(poles , width, height ); 
    sf::Event event; 
    bool running = true;
   
    



    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                std::cout << "App closed" << std::endl;
                window.close();
            }

        }

        // updates 

        //draw
        window.clear(sf::Color::Black); 
        
        for (RectangleShape pole : poles)
        {
            window.draw(pole); 
        }
        window.draw(Disk(200,20).disk); 
        window.display(); 
    }
    

    return 0;
}
void initPoles(std::vector<sf::RectangleShape>& poles, int width, int height )
{
    for (int i = 1; i <=3; i++)
    {
        sf::RectangleShape pole(Vector2f(15,250));
        pole.setFillColor(Color(210, 180, 140)); 
        pole.setPosition(( i* width / 4), height - pole.getSize().y); 
        poles.push_back(pole); 
        
    }
}

