//
//  AppDelegate.h
//  zad2_DP
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 SystemyMobilne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

