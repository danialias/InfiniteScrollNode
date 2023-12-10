//
//  InfiniteScrollNode.h
//  InfiniteScrollNodeTest
//
//  Created by Jason Marziani on 3/26/12
//  Copyright (c) 2012 Little Wins LLC. All rights reserved.
//
//  Made compatible with Cocos2d-x 2.x by Stefan Nguyen on 7/30/12 (as CCParallaxScrollNode).
//  Made compatible with Axmol Engine 2.x by Daniel Alias on 23/12/09 (yy/mm/dd)
//

#ifndef InfiniteScrollNodeTest_InfiniteScrollNode_h
#define InfiniteScrollNodeTest_InfiniteScrollNode_h

#include "axmol.h"
#include <android/log.h>
#include "InfiniteScrollOffset.h"

#ifndef PTM_RATIO
#define PTM_RATIO 32
#endif

using namespace axmol;

class InfiniteScrollNode : public ax::Layer
{
public:
	virtual bool init();
	CREATE_FUNC(InfiniteScrollNode);
  
  SpriteBatchNode batch;
  Size _range;
  
  ax::Vector<InfiniteScrollOffset *> _scrollOffsets;
  
  void addChild(Sprite *node, int z, Point r, Point p, Point so);
  void addChild(Sprite *node, int z, Point r, Point p, Point so, Point v);
  
  void removeChild(Sprite *node, bool cleanup);
  void updateWithVelocity(Point vel, float dt);
  void updateWithYPosition(float y, float dt);
  
  void addInfiniteScrollWithZ(int z, Point ratio, Point pos, Point dir, Sprite *firstObject, ...);
  void addInfiniteScrollXWithZ(int z, Point ratio, Point pos, Sprite* firstObject, ...);
  void addInfiniteScrollYWithZ(int z,  Point ratio, Point pos, Sprite* firstObject, ...);
  
  void addInfiniteScrollWithObjects(const ax::Vector<Sprite *>& objects, int z, Point ratio, Point pos, Point dir);
  void addInfiniteScrollWithObjects(const ax::Vector<Sprite *>& objects, int z, Point ratio, Point pos, Point dir, Point relVel);
  void addInfiniteScrollWithObjects(const ax::Vector<Sprite *>& objects, int z, Point ratio, Point pos, Point dir, Point relVel, Point padding);
  
};

#endif
