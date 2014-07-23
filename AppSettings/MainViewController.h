//
//  MainViewController.h
//  AppSettings
//
//  Created by Cyberjaya 4 iTrain on 7/23/14.
//  Copyright (c) 2014 UTAR. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
