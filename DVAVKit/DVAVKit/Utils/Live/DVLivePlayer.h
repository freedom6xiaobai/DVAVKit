//
//  DVLivePlayer.h
//  DVAVKit
//
//  Created by 施达威 on 2019/3/22.
//  Copyright © 2019 DVKit. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DVLivePlayer : NSObject

#pragma mark - <-- Property -->
@property(nonatomic, weak, readonly) UIView *preView;


//MARK: - <-- Initializer -->
- (instancetype)initWithPreViewFrame:(CGRect)previewFrame;


#pragma mark - <-- Method -->
- (void)connectToURL:(NSString *)url;

- (void)startPlay;
- (void)stopPlay;

- (UIImage *)screenshot;
- (void)saveScreenshotToPhotoAlbum;

- (void)startRecordToURL:(NSString *)url;
- (void)startRecordToPhotoAlbum;
- (void)stopRecord;

@end

NS_ASSUME_NONNULL_END
