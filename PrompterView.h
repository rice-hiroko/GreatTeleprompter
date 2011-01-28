//
//  PrompterView.h
//  GreatTeleprompter
//
//  Created by Scott Means on 6/11/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface PrompterView : UIView {
	NSString *theSpeech;
	float speechOffset;
	CGSize baseSize;
	NSTimer *tickTimer;
	bool paused;
	CGPoint lastTouchPos;
	float baseTouchGap;
	CFTimeInterval lastTouchTime;
	float scrollVelocity;
	NSMutableSet *currentTouches;
	bool blackOnWhite;
}

@property (nonatomic, retain) NSString *theSpeech;
@property (nonatomic, assign) bool paused;
@property (nonatomic, retain) NSMutableSet *currentTouches;
@property (nonatomic, readonly) float touchGap;
@property (nonatomic, readonly) UIFont *currentFont;
@property (nonatomic, assign) float speechOffset;

- (void)timerTick:(NSTimer*)theTimer;
- (void)initTouchInfo;
- (void)recalcMetrics;

#define TICK_INTERVAL		.05

#define DEFAULT_FONT_SIZE	36.0
#define MIN_FONT_SIZE		8.0
#define MAX_FONT_SIZE		100.0
#define FONT_SIZE_KEY		@"FontSize"
#define BOW_KEY				@"BlackOnWhite"
@end
