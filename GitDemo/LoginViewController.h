//
//  LoginViewController.h
//  GitDemo
//
//  Created by Niel Principe on 2/18/13.
//  Copyright (c) 2013 Nextsprout Solutions Co. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameTextField;
- (IBAction)loginViewToggle:(UIButton *)sender;

@end
