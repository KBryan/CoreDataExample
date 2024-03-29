//
//  CoreDataViewController.h
//  CoreData
//
//  Created by Kwame Bryan on 3/6/2014.
//  Copyright (c) 2014 Kwame Bryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "CoreDataAppDelegate.h"

@interface CoreDataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;
@property (strong, nonatomic) IBOutlet UILabel *status;
- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;

@end
