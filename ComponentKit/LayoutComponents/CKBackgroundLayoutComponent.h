/*
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import <ComponentKit/CKLayoutComponent.h>
#import <ComponentKit/CKMacros.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @uidocs https://fburl.com/CKBackgroundLayoutComponent:bf91

 Lays out a single child component, then lays out a background component behind it stretched to its size.
 */
NS_SWIFT_NAME(BackgroundLayoutComponent)
@interface CKBackgroundLayoutComponent : CKLayoutComponent

CK_INIT_UNAVAILABLE;

CK_LAYOUT_COMPONENT_INIT_UNAVAILABLE;

/**
 @param component A child that is laid out to determine the size of this component.
 @param background A child that is laid out behind it. May be nil, in which case the background is omitted.
 */
- (instancetype)initWithComponent:(CKComponent *)component
                       background:(CKComponent *_Nullable)component NS_DESIGNATED_INITIALIZER;

/**
 DEPRECATED - Do not use. Use CK::BackgroundLayoutComponentBuilder instead.
 @param component A child that is laid out to determine the size of this component. If this is nil, then this method returns nil.
 @param background A child that is laid out behind it. May be nil, in which case the background is omitted.
*/
+ (nullable instancetype)newWithComponent:(CKComponent *_Nullable)component
                               background:(CKComponent *_Nullable)background;

@end

NS_ASSUME_NONNULL_END

#import <ComponentKit/BackgroundLayoutComponentBuilder.h>
