//
//  ExampleTableAppDelegate.h
//  ExampleTable
//
//  Created by Samuel Ryan Goodwin on 10/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ExampleTableViewController;

@interface ExampleTableAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ExampleTableViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ExampleTableViewController *viewController;

@end

