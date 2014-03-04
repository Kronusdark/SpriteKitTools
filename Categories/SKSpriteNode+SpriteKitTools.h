//
//  SKSpriteNode+SpriteKitTools.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKSpriteNode (SpriteKitTools)

+ (SKSpriteNode *)spriteNodeWithImageNamed:(NSString *)name andDefaultPhysicsBody:(BOOL)physics;

@end
