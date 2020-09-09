//
//  EkoCommunityCreationDataBuilder.h
//  EkoChat
//
//  Created by Michael Abadi on 07/07/20.
//  Copyright © 2020 eko. All rights reserved.
//

#import "EkoBuilder.h"

NS_ASSUME_NONNULL_BEGIN

@interface EkoCommunityCreationDataBuilder : NSObject <EkoCommunityBuilder>

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
 Sets the current user ids
 */
- (void)setUserIds:(NSArray<NSString *> *)userIds;

/**
 Sets the current metadata
 */
- (void)setMetadata:(NSDictionary<NSString *, id> *)metadata;

@end

NS_ASSUME_NONNULL_END

