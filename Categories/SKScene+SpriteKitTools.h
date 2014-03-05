//
//  SKScene+SpriteKitTools.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKScene (SpriteKitTools)

    /// Creates a simple physics frame for the scene. The frame is the same size as the scene.
- (void)skt_initDefaultFramePhysics;

    // Geometry Methods CGFloat

    /// Returns a CGPoint representing the center of the view
- (CGPoint)skt_center;

    /// Returns a float representing the right side of the scene
- (CGFloat)skt_right;

    /// Returns a float representing the left side of the scene
- (CGFloat)skt_left;

    /// Returns a float representing the top of the scene
- (CGFloat)skt_top;

    /// Returns a float representing the bottom of the scene
- (CGFloat)skt_bottom;

@end
