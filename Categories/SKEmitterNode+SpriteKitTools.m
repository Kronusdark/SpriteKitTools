//
//  SKEmitterNode+SpriteKitTools.m
//
//  Created by Weston Hanners on 3/4/14.
//  Copyright (c) 2014 Weston Hanners. All rights reserved.
//

#import "SKEmitterNode+SpriteKitTools.h"

@implementation SKEmitterNode (SpriteKitTools)

+ (SKEmitterNode*)skt_emitterNodeWithName:(NSString *)name {
    NSString *emitterPath = [[NSBundle mainBundle] pathForResource:name ofType:@"sks"];
    SKEmitterNode *emitter = [NSKeyedUnarchiver unarchiveObjectWithFile:emitterPath];
    return emitter;
}

@end