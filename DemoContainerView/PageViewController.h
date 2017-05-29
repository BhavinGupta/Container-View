//
//  PageViewController.h
//  DemoContainerView
//
//  Created by Bhavin Gupta on 29/05/17.
//  Copyright © 2017 Easy Pay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageViewController : UIPageViewController<UIPageViewControllerDelegate,UIPageViewControllerDataSource>

@property (strong, nonatomic) NSMutableArray *aryPages;

@end
