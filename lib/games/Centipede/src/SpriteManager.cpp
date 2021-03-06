/*
** EPITECH PROJECT, 2021
** ${FOLDER_NAME}
** File description:
** SpriteManager.cpp.c file
*/

#include "../include/SpriteManager.hpp"

SpriteManager::SpriteManager(
    std::shared_ptr<arcade::displayer::IDisplay> &disp, int level
)
{
    this->_level = level;
    displayer = disp;
}

SpriteManager::~SpriteManager()
{
}

void SpriteManager::change_level(int level)
{
    (void)level;
}

std::unique_ptr<arcade::displayer::ISprite> SpriteManager::getCentipedeHead(
    orientation orientation
) const
{

    switch (orientation) {
    case RIGHT:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/head_right.jpg"), {"X"});
    case RIGHT_DOWN:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/head_right_down.jpg"), {"X"});
    case LEFT:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/head_right.jpg"), {"X"});
    case LEFT_DOWN:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/head_left_down.jpg"), {"X"});
    default:
        return nullptr;
    }
}

std::unique_ptr<arcade::displayer::ISprite> SpriteManager::getCentipedeBody(
    orientation orientation
) const
{
    switch (orientation) {
    case RIGHT:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/body_left.jpg"), {"x"});
    case RIGHT_DOWN:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/body_down_right.jpg"), {"x"});
    case LEFT:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/body_left.jpg"), {"x"});
    case LEFT_DOWN:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/body_down_left.jpg"), {"x"});
    default:
        return nullptr;
    }
}

std::unique_ptr<arcade::displayer::ISprite> SpriteManager::getObstacle(
    int health
) const
{
    // todo  change ascii _sprite
    switch (health) {
    case 4:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/obstacle_4.jpg"), {"O"});
    case 3:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/obstacle_3.jpg"), {"O"});
    case 2:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/obstacle_2.jpg"), {"O"});
    case 1:
        return this->displayer->createSprite(
            std::string("ressources/Centipede/obstacle_1.jpg"), {"O"});
    default:
        return nullptr;
    }
}

std::unique_ptr<arcade::displayer::ISprite> SpriteManager::getPlayer() const
{
    return this->displayer->createSprite(
        std::string("ressources/Centipede/player.jpg"), {"X"});
}

std::unique_ptr<arcade::displayer::ISprite> SpriteManager::getShot() const
{
    return this->displayer->createSprite(
        std::string("ressources/Centipede/shot.jpg"), {"|"});
}

std::unique_ptr<arcade::displayer::IText> SpriteManager::getText(
    std::string &text
) const
{
    auto tmp = this->displayer->createText();
    tmp->setFont("ressources/Centipede/8-BIT WONDER.TTF");
    // todo set color
    // todo set Char size
    tmp->setText(text);
    return tmp;
}


