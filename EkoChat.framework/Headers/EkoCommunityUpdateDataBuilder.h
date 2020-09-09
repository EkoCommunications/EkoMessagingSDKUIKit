//
//  EkoCommunityUpdateDataBuilder.h
//  EkoChat
//
//  Created by Michael Abadi on 23/07/20.
//  Copyright © 2020 eko. All rights reserved.
//

#import "EkoBuilder.h"

NS_ASSUME_NONNULL_BEGIN

@interface EkoCommunityUpdateDataBuilder : NSObject <EkoCommunityBuilder>

/**
 Sets the current display name
 */
- (void)setDisplayName:(NSString *)displayName;

/**
 Sets the current description
 */
- (void)setCommunityDescription:(NSString *)communityDescription;

/**
Sets the current status public or not
*/
- (void)setIsPublic:(BOOL)isPublic;

/**
 Sets the current tags
 */
- (void)setTags:(NSArray<NSString *> *)tags;

/**
 Sets the current metadata
 */
- (void)setMetadata:(NSDictionary<NSString *, id> *)metadata;

@end

NS_ASSUME_NONNULL_END

