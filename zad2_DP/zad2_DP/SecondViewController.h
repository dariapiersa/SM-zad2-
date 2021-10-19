//
//  SecondViewController.h
//  zad2_DP
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 SystemyMobilne. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;
@protocol SecondViewControllerDelegate <NSObject>

-(void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString*) item;
@end

@interface SecondViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;
@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
-(IBAction)Passback;
@end

NS_ASSUME_NONNULL_END
