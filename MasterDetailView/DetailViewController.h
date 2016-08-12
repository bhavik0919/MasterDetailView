//
//  DetailViewController.h
//  MasterDetailView
//
//  Created by Bhavik Panchal on 9/22/15.
//  Copyright © 2015 Bhavik Panchal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;



@end

