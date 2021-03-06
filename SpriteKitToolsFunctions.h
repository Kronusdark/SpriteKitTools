//
//  SpriteKitToolsFunctions.h
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import <UIKit/UIKit.h>

    /// Convert Radians to Degrees
#define RADIANS_TO_DEGREES(radians) ((radians) * (180.0 / M_PI))

    /// Convert Degrees to Radians
#define DEGREES_TO_RADIANS(angle) ((angle) / 180.0 * M_PI)

    /// Adds pointA to pointB
static inline CGPoint skt_CGPointAdd(CGPoint pointA, CGPoint pointB) {
    CGPoint newPoint = CGPointMake(pointA.x + pointB.x,
                                   pointA.y + pointB.y);
    return newPoint;
}

    /// Multiplies pointA by pointB
static inline CGPoint skt_CGPointMultiply(CGPoint pointA, CGPoint pointB) {
    CGPoint newPoint = CGPointMake(pointA.x * pointB.x,
                                   pointA.y * pointB.y);
    return newPoint;
}

    /// Subtracts pointA from pointB
static inline CGPoint skt_CGPointSubtract(CGPoint pointA, CGPoint pointB) {
    CGPoint newPoint = CGPointMake(pointA.x - pointB.x,
                                   pointA.y - pointB.y);
    return newPoint;
}

    /// Divides pointA by pointB
static inline CGPoint skt_CGPointDivide(CGPoint pointA, CGPoint pointB) {
    
    if (pointB.x == 0 || pointB.y == 0)
        return CGPointZero;
    
    CGPoint newPoint = CGPointMake(pointA.x / pointB.x,
                                   pointA.y / pointB.y);
    return newPoint;
}

    /// Returns the distance between pointA and pointB
static inline CGFloat skt_CGPointDistance(CGPoint pointA, CGPoint pointB) {
    CGPoint offset = skt_CGPointSubtract(pointA, pointB);

    CGFloat distance = sqrtf(offset.x * offset.x + offset.y * offset.y);
    
    return distance;
}

    /// Returns a normalized vector from point1 to point2 for a specified unit size.
static inline CGPoint skt_NormalizedVector(CGPoint fromPoint, CGPoint toPoint, CGFloat unitSize) {
    CGPoint offset = skt_CGPointSubtract(fromPoint, toPoint);
    
    CGFloat distance = skt_CGPointDistance(fromPoint, toPoint);
    
    CGPoint direction = skt_CGPointDivide(offset, CGPointMake(distance, distance));
    
    CGPoint vector = skt_CGPointMultiply(direction, CGPointMake(unitSize, unitSize));
    
    return vector;
}

    /// Returns the angle of a vector
static inline CGFloat skt_CGPointToAngle(CGPoint point) {
    CGFloat angle = atan2f(point.y, point.x);
    
    return angle;
}

    /// Returns the shortest angle between two angles in radians
static inline CGFloat skt_ShortestAngleBetween(CGFloat angleA, CGFloat angleB) {
    CGFloat difference = angleB - angleA;
    
    CGFloat angle = fmodf(difference, M_PI * 2);
    
    if (angle >= M_PI) {
        angle -= M_PI * 2;
    } else if (angle <= -M_PI) {
        angle += M_PI * 2;
    }
    return angle;
    
}

    /// Returns a value indicating the sign of the value;
static inline CGFloat skt_SignOfValue(CGFloat value) {
    return value >= 0 ? 1 : -1;
}

    /// Converts a CGPoint to a CGVector
static inline CGVector skt_CGPointToVector(CGPoint point) {
    return CGVectorMake(point.x, point.y);
}

    /// Converts a CGVector to a CGPoint
static inline CGPoint skt_CGVectorToPoint(CGVector vector) {
    return CGPointMake(vector.dx, vector.dy);
}