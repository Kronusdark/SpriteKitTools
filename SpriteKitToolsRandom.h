//
//  SpriteKitToolsRandom.h
//
//  Created by Weston Hanners on 3/5/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <UIKit/UIKit.h>

static inline NSInteger skt_RandomInteger(int max, int min) {

    int realMax, realMin;
    
        // Flip the max and min
    if (max < min) {
        printf("Minimum is greater than Maximum. Flipping for now, but swap parameters to silence.");
        realMax = min;
        realMin = max;
    } else {
        realMax = max;
        realMin = min;
    }

    return fmod(arc4random(), realMax) + realMin;
}

    /// Returns a random angle between specified angles in radians
static inline CGFloat skt_RandomAngleInRadians(int maxInRadians, int minInRadians) {

    int max, min;
    
    if (maxInRadians == minInRadians) {
        max = 360;
        min = -360;
    } else {
        max = maxInRadians;
        min = minInRadians;
    }
    NSInteger randomDegrees = skt_RandomInteger(max, min);
    
    return DEGREES_TO_RADIANS(randomDegrees);
}

    /// Returns a random angle between the specified angles in degrees
static inline CGFloat skt_RandomAngleInDegrees(int maxInDegrees, int minInDegrees) {
    
    int max = DEGREES_TO_RADIANS(maxInDegrees);
    int min = DEGREES_TO_RADIANS(minInDegrees);
    
    return RADIANS_TO_DEGREES(skt_RandomAngleInRadians(max, min));
}