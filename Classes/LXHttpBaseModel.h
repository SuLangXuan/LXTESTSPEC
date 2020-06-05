//
//  LXHttpBaseModel.h
//  test
//
//  Created by 苏朗轩 on 2020/6/5.
//  Copyright © 2020 苏朗轩. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LXHttpBaseModel : NSObject
@property (nonatomic,copy) NSString *msg;
@property (nonatomic,assign) int code;
@property (nonatomic,strong) id data;

@end

NS_ASSUME_NONNULL_END
