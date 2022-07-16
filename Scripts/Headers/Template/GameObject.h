#ifndef INC_2D_GAMEOBJECT_H
#define INC_2D_GAMEOBJECT_H

class SDL_Renderer;
class SDL_Texture;
class SDL_Rect;

class GameObject{

public:
    GameObject(const char* TextureSheet, SDL_Renderer* Renderer);
    ~GameObject();

    void Update(float DeltaTime);
    void Render(float DeltaTime);

private:
    int XPos;
    int YPos;

    SDL_Texture* Texture;
    SDL_Rect* SourceRect, *DestRect;
    SDL_Renderer* Renderer;
};

#endif //INC_2D_GAMEOBJECT_H