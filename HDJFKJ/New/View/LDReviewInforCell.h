//
//  LDReviewInforCell.h
//  HDJFKJ
//
//  Created by apple on 16/9/1.
//  Copyright © 2016年 LDSmallCat. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LDReviewModel.h"
#import "WHCustomInfoInfoStepAll.h"
@interface LDReviewInforCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIButton *shibieLabel;

@property (nonatomic, strong) LDReviewModel * reviewModel;

@property (nonatomic, strong) WHCustomInfoInfoStepAll * customInfo;
@end
