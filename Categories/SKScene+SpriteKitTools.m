//
//  SKScene+SpriteKitTools.m
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import "SKScene+SpriteKitTools.h"

@implementation SKScene (SpriteKitTools)

    /// Creates a simple physics frame for the scene. The frame is the same size as the scene.
- (void)skt_initDefaultFramePhysics {
    
    SKPhysicsBody *framePhysics = [SKPhysicsBody bodyWithEdgeLoopFromRect:self.frame];
    
    [self setPhysicsBody:framePhysics];
    
}

    /// Returns a CGPoint representing the center of the view
- (CGPoint)skt_center {
	return CGPointMake(self.size.width * 0.5,
					   self.size.height * 0.5);
}
@end
