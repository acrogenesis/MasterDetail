//
//  storyDetailViewController.h
//  masterdetail
//
//  Created by Adrian Rangel on 2/17/14.
//  Copyright (c) 2014 Adrian Rangel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface storyDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *nombresLabel;
@property (weak, nonatomic) IBOutlet UILabel *emailLabel;
@end
