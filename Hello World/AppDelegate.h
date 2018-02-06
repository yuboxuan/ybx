//
//  AppDelegate.h
//  Hello World
//
//  Created by Harry on 2018/2/6.
//  Copyright © 2018年 Yulan Technology (Harry Yu). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

