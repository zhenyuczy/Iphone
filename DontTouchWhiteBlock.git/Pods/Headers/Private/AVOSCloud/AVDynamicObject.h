//
//  AVDynamicObject.h
//  AVOS
//
//  Created by Tang Tianyong on 27/04/2018.
//  Copyright © 2018 LeanCloud Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AVDynamicObject : NSObject

- (nullable id)objectForKeyedSubscript:(NSString *)key;

- (void)setObject:(nullable id)object forKeyedSubscript:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
