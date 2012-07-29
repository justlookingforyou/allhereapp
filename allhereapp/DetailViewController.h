//
//  DetailViewController.h
//  allhereapp
//
//  Created by jimmy mora on 28/07/12.
//  Copyright (c) 2012 jimmy mora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
