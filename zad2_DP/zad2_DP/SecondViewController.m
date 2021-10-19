//
//  SecondViewController.m
//  zad2_DP
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 SystemyMobilne. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

-(IBAction)Passback{
    NSString *itemToPassBack = self.modifiedSurnameTextField.text;
    [self.delegate addItemViewController:self didFinishEnteringItem:itemToPassBack];
    [self dismissViewControllerAnimated: YES completion:nil];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.modifiedSurnameTextField.text = self.surname;
    // Do any additional setup after loading the view.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
