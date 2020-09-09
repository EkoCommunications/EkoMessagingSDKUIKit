//
//  EkoFileData.h
//  EkoChat
//
//  Created by Nishan Niraula on 7/9/20.
//  Copyright © 2020 eko. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Note:
//
// Class containing information about uploaded images to FileService. This class will contain more information later on like
// captions or size etc.
@interface EkoFileData : NSObject

@property (strong, nonatomic) NSString *fileId;

- (instancetype)initWithResponse:(NSDictionary<NSString *, id> *)response;

@end

NS_ASSUME_NONNULL_END
