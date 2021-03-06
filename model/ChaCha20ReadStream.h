//
//  ChaCha20ReadStream.h
//  Strongbox
//
//  Created by Strongbox on 12/06/2020.
//  Copyright © 2020 Mark McGuill. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChaCha20ReadStream : NSInputStream

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStream:(NSInputStream*)inputStream key:(NSData*)key iv:(NSData*)iv;

@end

NS_ASSUME_NONNULL_END
