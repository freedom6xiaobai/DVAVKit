//
//  H264LivePlayerViewController.m
//  DVAVKitDemo
//
//  Created by mlgPro on 2020/4/10.
//  Copyright © 2020 DVUntilKit. All rights reserved.
//

#import "H264HEVCLivePlayerViewController.h"

@interface H264HEVCLivePlayerViewController ()

@property(nonatomic, strong) DVLivePlayer *livePlayer;

@end

@implementation H264HEVCLivePlayerViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initLivePlayer];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.livePlayer startPlay];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    
    [self.livePlayer stopPlay];
}


- (void)initLivePlayer {
    self.livePlayer = [[DVLivePlayer alloc] initWithPreViewFrame:DVFrame.frame_full];
    [self.livePlayer connectToURL:self.url];
    
    
    [self.view insertSubview:self.livePlayer.preView atIndex:0];
    [self initBtnRecord];
    [self initBtnScreenShot];
}


#pragma mark - <-- ACTION -->
- (void)onClickForRecord:(UIButton *)sender {
    sender.selected = !sender.selected;
    
    if (sender.selected) {
        NSDate *date = [NSDate date];
        NSString *fileName = [NSString stringWithFormat:@"Live-%@.mp4", date];
        NSString *documemtPath = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
        NSString *path = [documemtPath stringByAppendingPathComponent:fileName];
        [self.livePlayer startRecordToURL:path];
    }
    else {
        [self.livePlayer stopRecord];
    }
}

- (void)onClickForScreenShot:(UIButton *)sender {
    [self.livePlayer saveScreenshotToPhotoAlbum];
}

@end
