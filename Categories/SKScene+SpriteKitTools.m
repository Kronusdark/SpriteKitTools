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

#pragma mark - Geometry Methods

    /// Returns a CGPoint representing the center of the view
- (CGPoint)skt_center {
	return CGPointMake(self.size.width * 0.5,
					   self.size.height * 0.5);
}

    /// Returns a float representing the right side of the scene
- (CGFloat)skt_right {
    return self.size.width;
}

    /// Returns a float representing the left side of the scene
- (CGFloat)skt_left {
    return 0;
}

    /// Returns a float represnting the top of the scene
- (CGFloat)skt_top {
    return 0;
}

    /// Returns a float represnting the bottom of the scene
- (CGFloat)skt_bottom {
    return self.size.height;
}

@end
