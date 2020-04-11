//
//  DVVideoUtils.h
//  DVAVKit
//
//  Created by DV on 2019/4/1.
//  Copyright © 2019 DVKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@interface DVVideoUtils : NSObject

- (UIImage *)convertToImageFromSampleBuffer:(CMSampleBufferRef)sampleBuffer;

@end

NS_ASSUME_NONNULL_END
