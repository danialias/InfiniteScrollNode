//
//  InfiniteScrollOffset.h
//  InfiniteScrollNodeTest
//
//  Created by Jason Marziani on 3/26/12
//  Copyright (c) 2012 Little Wins LLC. All rights reserved.
//
//  Made compatible with Cocos2d-x 2.x by Stefan Nguyen on 7/30/12 (as CCParallaxScrollNode).
//  Made compatible with Axmol Engine 2.x by Daniel Alias on 23/12/09 (yy/mm/dd)
//

#ifndef InfiniteScrollNodeTest_InfiniteScrollOffset_h
#define InfiniteScrollNodeTest_InfiniteScrollOffset_h

#include "axmol.h"
using namespace axmol;

class InfiniteScrollOffset : public ax::Layer
{
public:
	virtual bool init();  
	CREATE_FUNC(InfiniteScrollOffset);
    //
    AX_SYNTHESIZE(Point, scrollOffset, ScrollOffset);
    AX_SYNTHESIZE(Point, origPosition, OrigPosition);
	AX_SYNTHESIZE(Point, relVelocity, RelVelocity);
	AX_SYNTHESIZE(Point, ratio, Ratio);
	AX_SYNTHESIZE(Point, buffer, Buffer);
	AX_SYNTHESIZE(Node*, theChild, TheChild);
    
    static InfiniteScrollOffset* scrollWithNode(Node *node, Point r, Point p, Point s);
    static InfiniteScrollOffset* scrollWithNode(Node *node, Point r, Point p, Point s, Point v);
	InfiniteScrollOffset* initWithNode(Node *node, Point r, Point p, Point s, Point v);
	InfiniteScrollOffset* initWithNode(Node *node, Point r, Point p, Point s);
};

#endif
