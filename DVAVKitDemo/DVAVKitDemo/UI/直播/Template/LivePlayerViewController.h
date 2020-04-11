//
//  LivePlayerViewController.h
//  DVAVKitDemo
//
//  Created by mlgPro on 2020/4/10.
//  Copyright © 2020 DVUntilKit. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LivePlayerViewController : UIViewController

@property(nonatomic, copy) NSString *url;

@property(nonatomic, strong) UIButton *btnRecord;
- (void)initBtnRecord;
- (void)onClickForRecord:(UIButton *)sender;

@end

NS_ASSUME_NONNULL_END
