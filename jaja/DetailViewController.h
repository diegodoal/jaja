//
//  DetailViewController.h
//  jaja
//
//  Created by Diego Domínguez on 02/01/13.
//  Copyright (c) 2013 Diego Domínguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
