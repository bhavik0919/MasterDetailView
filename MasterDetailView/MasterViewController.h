//
//  MasterViewController.h
//  MasterDetailView
//
//  Created by Bhavik Panchal on 9/22/15.
//  Copyright © 2015 Bhavik Panchal. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

