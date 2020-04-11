//
//  DVFFRtmpSocket.h
//  iOS_Test
//
//  Created by DV on 2019/10/18.
//  Copyright © 2019 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DVRtmp.h"

NS_ASSUME_NONNULL_BEGIN

@interface DVFFRtmpSocket : NSObject <DVRtmp>

- (nullable instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (nullable instancetype)new UNAVAILABLE_ATTRIBUTE;

@end

NS_ASSUME_NONNULL_END
