//
//  TimeLineViewController.h
//  fansky
//
//  Created by Zzy on 6/17/15.
//  Copyright (c) 2015 Zzy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ARSegmentPager/ARSegmentControllerDelegate.h>

@interface SATimeLineViewController : UITableViewController <ARSegmentControllerDelegate>

@property (copy, nonatomic) NSString *userID;

@end