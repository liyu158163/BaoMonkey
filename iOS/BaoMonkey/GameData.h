//
//  GameData.h
//  BaoMonkey
//
//  Created by Jeremy Peltier on 07/05/2014.
//  Copyright (c) 2014 BaoMonkey. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <Foundation/Foundation.h>
#import "Define.h"

@interface GameData : NSObject {
    NSInteger score;
    CGFloat trunkLife;
    BOOL pause;
}

+(id)singleton;

+(void)initGameData;

+(NSInteger)getScore;
+(void)addPointToScore:(NSInteger)point;
+(void)substractPointToScore:(NSInteger)point;
+(void)multiplyPointToScore:(NSInteger)point;
+(void)dividePointToScore:(NSInteger)point;

+(CGFloat)getTrunkLife;
+(void)addLifeToTrunkLife:(CGFloat)life;
+(void)substractLifeToTrunkLife:(CGFloat)life;
+(void)multiplyLifeToTrunkLife:(CGFloat)life;
+(void)divideLifeToTrunkLife:(CGFloat)life;
+(void)regenerateTrunkLife;

+(void)initPause;
+(BOOL)isPause;
+(void)updatePause;

@end