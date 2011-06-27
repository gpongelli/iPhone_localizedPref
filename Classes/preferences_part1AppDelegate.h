//
//  preferences_part1AppDelegate.h
//  preferences_part1
//
//  Created by Gabriele on 26/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class preferences_part1ViewController;

@interface preferences_part1AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    preferences_part1ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet preferences_part1ViewController *viewController;

@end

