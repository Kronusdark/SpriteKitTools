//
//  SKSpriteNode+SpriteKitTools.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKSpriteNode (SpriteKitTools)

    /// Initalizes a SKSPriteNode with default physics body the same size as the texture
+ (SKSpriteNode *)skt_spriteNodeWithImageNamed:(NSString *)name andDefaultPhysicsBody:(BOOL)physics;

    /// Performs selector after a delay as an SKAction
- (void)skt_performSelector:(SEL)selector onTarget:(id)target afterDelay:(NSTimeInterval)delay;

    /// Returns a CGFloat of half the sprite height
- (CGFloat)skt_halfHeight;

    /// Returns a CGFloat of half the sprite width
- (CGFloat)skt_halfWidth;

@end
