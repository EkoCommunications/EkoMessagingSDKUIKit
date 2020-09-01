//
//  EkoGroup.h
//  EkoChat
//
//  Created by Michael Abadi on 03/07/20.
//  Copyright © 2020 eko. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "EkoEnums.h"

@class EkoCommunity;
@class EkoUser;
@class EkoCommunityModeration;

/**
 * Group
 */
__attribute__((objc_subclassing_restricted))
@interface EkoCommunity : NSObject

/**
 * The unique identifier for the community
 */
@property (nonnull, strong, readonly, nonatomic) NSString *communityId;

/**
 * The unique identifier for the channel of the community
 */
@property (nonnull, strong, readonly, nonatomic) NSString *channelId;

/**
 * The unique identifier for the user id of the creator
 */
@property (nonnull, strong, readonly, nonatomic) NSString *userId;

/**
 * The display name of the community
 */
@property (nonnull, strong, readonly, nonatomic) NSString *displayName;

/**
 * The description of the community
 */
@property (nonnull, strong, readonly, nonatomic) NSString *communityDescription;

/**
 * The avatar url of the community
 */
@property (nonnull, strong, readonly, nonatomic) NSString *avatarFileUrl;

/**
   Number of post count on this community
 */
@property (assign, readonly, nonatomic) NSUInteger postsCount;

/**
   Number of member who follow on this community
 */
@property (assign, readonly, nonatomic) NSUInteger membersCount;

/**
 * Community meta data
 */
@property (nullable, strong, readonly, nonatomic) NSDictionary<NSString *, id> *metadata;

/**
 * Community tags
 */
@property (nullable, strong, readonly, nonatomic) NSArray<NSString *> *tags;

/**
   The status of the community if it is an official
 */
@property (assign, readonly, nonatomic) BOOL isOfficial;

/**
   The status of the community if it is a public
 */
@property (assign, readonly, nonatomic) BOOL isPublic;

/**
   The status of the community if user join the community
 */
@property (assign, readonly, nonatomic) BOOL isJoined;

/**
   The status of the community if only admin able to post to the community
 */
@property (assign, readonly, nonatomic) BOOL onlyAdminCanPost;

/**
 * The creation date of the community
 */
@property (nonnull, strong, nonatomic) NSDate *createdAt;


/**
   @abstract The community last edited time
   @discussion The updated time is updated for updated data on the community
 */
@property (nonnull, strong, nonatomic) NSDate *updatedAt;

/**
   A moderation instance
 */
@property (nonnull, readonly, nonatomic) EkoCommunityModeration *moderate;


@end
