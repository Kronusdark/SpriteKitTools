//
//  SKSpriteNode+SpriteKitTools.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKSpriteNode (SpriteKitTools)

+ (SKSpriteNode *)skt_spriteNodeWithImageNamed:(NSString *)name andDefaultPhysicsBody:(BOOL)physics;

    /// Performs selector after a delay as an SKAction
- (void)skt_performSelector:(SEL)selector onTarget:(id)target afterDelay:(NSTimeInterval)delay;

@end
