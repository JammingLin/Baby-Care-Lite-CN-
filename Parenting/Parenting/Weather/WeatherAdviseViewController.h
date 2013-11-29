//
//  WeatherAdviseViewController.h
//  Amoy Baby Care
//
//  Created by @Arvi@ on 13-11-28.
//  Copyright (c) 2013年 爱摩科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeatherAdviseViewController : UIViewController

@property (strong, nonatomic)  AdviseData  *ad;
@property (strong, nonatomic)  AdviseLevel *al;
@property (strong, nonatomic) IBOutlet UIButton *detailBtn;
@property (strong, nonatomic) IBOutlet UIButton *back;

@property (strong, nonatomic) IBOutlet UILabel *detail;
- (IBAction)showdetail:(UIButton *)sender;
- (id)initWithAdviseData:(AdviseData*)adata andAdviseLevel:(AdviseLevel *)alevel;
- (IBAction)goback:(id)sender;

@end
