//
//  DetailViewController.h
//  EDP_863soft
//
//  Created by 863hy on 15/11/26.
//  Copyright (c) 2015年 com.863soft.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

