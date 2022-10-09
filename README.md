## Making SFML even Simpler

***table of contents***
- [Introduction](#introduction)
- [Credits](#credits)
    - [Tutorial](#tutorial)
    - [Window](#window)
        - [Changing Resolution](#changing-resolution)
    - [Text](#text)
        - [Item Description Example](#item-description-example)
    - [Animation](#animation)
    - [Camera](#camera)
    - [Compiling](#compiling)

# Introduction
This little modification builds on top of [SFML](https://www.sfml-dev.org/) to make wonderful library even more accessable to beginners. Which is also useful for people studying Game Engines so they can get to see how little lines can be turned into big projects.

I absolutely do not own anything of SFML and have not written it myself, I am merely an entheusiast who wants to make it more accessable for others without giving up on learning how to make games without an AAA bloated game engine.

SFML's License can be found [__here__](https://www.sfml-dev.org/license.php)

### Credits

***Font:*** [FFF Forward](https://www.1001fonts.com/fff-forward-font.html) by [Fonts For Flash](https://www.1001fonts.com/users/fontsforflash/)

# Tutorial

## Window

### Changing Resolution
Changing the resolution can be possible by simply using:
```win::Resolution(1280, 720);```
and matching those numbers with whatever resolution you see fit.

## Text
To draw a text on the screen you can use:

```d_text::Dialogue("This is a test");```

This will try to center the text in the middle of the screen.

### Item Description Example
If you're working on an RPG, you likely want some item descriptions when you're interacting with objects in the overworld, a little example for this would be:

```d_text::Description("The door won't budge");```

If you need multiple lines to convey a message, you can use the usual `\n` command to start a new line.

## Animation
The setup of the animation system is there is an int called `counterAnimation` which is under the `animation` namespace. When you have your spritesheet/texture ready, you need to count how how many frames you want it to cycle

***NOTE: WHEN YOU'RE CREATING THE SPRITESHEET, PLEASE SET FRAMES OF ONE STATE VERTICALLY FROM TOP TO BOTTOM AS THIS IS WHAT THIS GUIDE USES***

Let's assume you made an `if` statement for moving right. And you have exactly 10 frames for that walking cycle. You'd use:

```animation::c_Animation = 0
animation::Speed(1.8);
animation::Frames(10);
player.setTextureRect(sf::IntRect{0, 32*animation::c_Animation, 16, 32});
```

## Camera
I am definitely not talented enough to write my own 2D camera, so all I did for now is rewrite the syntax slightly but I have done absolutely nothing to contribute to it's functionality.
in `main.cpp`:
```
camera::SetSize(1280.f, 720.f);
window.setView(camera::view);
```
### BUT
SFML by default does **not support 3D** and it was made with 2D in mind. However I plan on doing some research on creating a Psuedo 3D Camera, a technque used in the SNES (mode 7). This way I at least have something to offer that SFML by itself does not, so that other people do not need to do the math or research behind how it works. However I highly suggest you do as the techniques used to develop this look is very interesting and unique.

### Examples of Psuedo 3D Camera
- [Super Mario Kart](https://youtu.be/AlAmXXNz5ac?t=215)
- [F-Zero](https://youtu.be/BIe4AvKLSa4?t=14)
- [Ace wo Nerae](https://youtu.be/nfAUZcS_f_w?t=95)


## Compiling
When you write code you usually (hopefully) want to get the chance to actually see if it works. In order to do that you need to compile your program with the necessary libraries. Since we're using SFML, we need to add those options.

```g++ main.cpp -lsfml-window -lsfml-graphics -lsfml-system -lsfml-audio -lsfml-network```
or use/edit the `Makefile`, to compile:
```make```

for more information, please refer to SFML's Page on ["SFML and Linux"](https://www.sfml-dev.org/tutorials/2.5/start-linux.php)

["Compiling SFML with CMAKE"](https://www.sfml-dev.org/tutorials/2.5/compile-with-cmake.php)

or ["SFML and Code::Blocks (MinGW)"](https://www.sfml-dev.org/tutorials/2.5/start-cb.php)
