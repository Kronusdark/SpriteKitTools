//
//  SKScene+SpriteKitTools.m
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import "SKScene+SpriteKitTools.h"

@implementation SKScene (SpriteKitTools)

- (void)skt_initDefaultFramePhysics {
    
    SKPhysicsBody *framePhysics = [SKPhysicsBody bodyWithEdgeLoopFromRect:self.frame];
    
    [self setPhysicsBody:framePhysics];
    
}

#pragma mark - Geometry Methods

- (CGPoint)skt_center {
	return CGPointMake(self.size.width * 0.5,
					   self.size.height * 0.5);
}

- (CGFloat)skt_right {
    return self.size.width;
}

- (CGFloat)skt_left {
    return 0;
}

- (CGFloat)skt_top {
    return self.size.height;
}

- (CGFloat)skt_bottom {
    return 0;
}

- (CGPoint)skt_topRight {
    return CGPointMake(self.skt_right, self.skt_top);
}

- (CGPoint)skt_topLeft {
    return CGPointMake(self.skt_left, self.skt_top);
}

- (CGPoint)skt_bottomRight {
    return CGPointMake(self.skt_right, self.skt_bottom);
}

- (CGPoint)skt_bottomLeft {
    return CGPointMake(self.skt_left, self.skt_bottom);
}

@end
