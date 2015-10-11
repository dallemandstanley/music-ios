//
//  ModelController.h
//  MelissaB-App
//
//  Created by Aces Nation LLc on 10/11/15.
//  Copyright © 2015 Aces Nation LLc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

