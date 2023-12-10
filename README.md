# InfiniteScrollNode
Infinite scroll for Axmol Engine 2.x. It can be used to create a parallax effect. 

This will continuously scroll the same images across the screen, suitable for games like shoot'em ups or endless runners, for example.

InfiniteScrollNode is an adaptation for the Axmol Engine of the Cocos2d-x CCParallaxScrollNode. The name has been changed from ParallaxScroll to InfiniteScroll to prevent confusion with the Axmol Engine's Parallax node.

CCParallaxScrollNode was originally created for Cocos2d in Objective-C by Aram Kocharyan, and later adapted to Cocos2d-x by Jason Marziani. Stefan Nguyen and seenu19 made some adaptations for other Cocos2d-x versions.

* [Original CCParallaxScrollNode for Cocos2d, Created by Aram Kocharyan](https://github.com/aramk/cocos2d)
* [First port for Cocos2d-x, created by Jason Marziani](https://github.com/jasonmarziani/CCParallaxScrollNode)
* [Second port for Cocos2d-x v3.x, created by Stefan Nguyen](https://github.com/stnguyen/CCParallaxScrollNode)
* [Thrid port for Cocos2d-x v.2.2.2, created by seenu19](https://github.com/seenu19/CCParallaxScrollNode)

## How to use

Include the following files in your project:
```
InfiniteScrollNode.h
InfiniteScrollNode.cpp
InfiniteScrollOffset.h
InfiniteScrollOffset.cpp
```

Use it in your class file (example for a horizontal scroll):
```
#include "InfiniteScrollNode.h"

static InfiniteScrollNode *scroll;  // Set as a global variable

// First, create three sprites that will make the infinite scroll effect.

Sprite *bg1 = Sprite::create("background.png");
Sprite *bg2 = Sprite::create("background.png");
Sprite *bg3 = Sprite::create("background.png");

// Second, create the InfiniteScrollNode.

scroll = InfiniteScrollNode::create();
scroll->addInfiniteScrollXWithZ(0, Point(0.5, 0.5), Point(0, 0), bg1, bg2, bg3, NULL);
this->addChild(scroll);

// Finally, make it move inside update()

float scrollSpeedX = -5;
float scrollSpeedY = 0;
scroll->updateWithVelocity(Point(scrollSpeedX, scrollSpeedY), delta);
```

Call `addInfiniteScrollXWithZ` for horizontal scroll, and `addInfiniteScrollYWithZ` for vertical. The values are `z`, `ratio` and `position`. 

`scrollSpeedX` inside `update()` will fix the speed and direction (for negative or positive values). For vertical scrolls, put `scrollSpeedX` to `0` and add a value to `scrollSpeedY`.

For best results, the sprites should be of the same width (or height) than the screen. 

You can add more infinite scrolls with different speeds and zOrder to create a parallax effect.



https://github.com/danialias/InfiniteScrollNode/assets/25404038/d776d98c-7835-4b19-855c-712cfdcf24a1

