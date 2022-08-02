#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texture)
{
    SDL_Surface* tempSurface = IMG_Load(texture);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    return tex;
};

void TextureManager::Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest, SDL_RendererFlip flip)
{
    //to manage multiple animations we are using sdl_rendercopyex instead of sdl_rendercopy for extra features like rotation
    SDL_RenderCopyEx(Game::renderer, tex, &src, &dest, 0.0, NULL, flip);
}