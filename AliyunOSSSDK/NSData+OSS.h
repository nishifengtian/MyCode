//
//  NSData+OSS.h
//  AliyunOSSSDK
//
//  Created by ws on 2023/12/28.
//  Copyright © 2023 aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (OSS)

- (NSString *)hexString;
- (NSData *)calculateSha256;

@end

NS_ASSUME_NONNULL_END
