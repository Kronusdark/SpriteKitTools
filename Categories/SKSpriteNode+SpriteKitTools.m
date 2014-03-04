//
//  SKSpriteNode+SpriteKitTools.m
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import "SKSpriteNode+SpriteKitTools.h"

@implementation SKSpriteNode (SpriteKitTools)

+ (SKSpriteNode *)skt_spriteNodeWithImageNamed:(NSString *)name andDefaultPhysicsBody:(BOOL)physics {
    
    SKSpriteNode *spriteNode = [SKSpriteNode spriteNodeWithImageNamed:name];
    
    if (physics) {
        CGSize spriteSize = spriteNode.texture.size;
        
        SKPhysicsBody *physicsBody = [SKPhysicsBody bodyWithRectangleOfSize:spriteSize];
        
        [spriteNode setPhysicsBody:physicsBody];
    }
    
    return spriteNode;
}

@end
