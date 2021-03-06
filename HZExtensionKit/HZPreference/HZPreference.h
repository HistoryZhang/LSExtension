//
//  HZPreference.h
//  HZExtensionKit
//
//  Created by History on 14/11/28.
//  Copyright (c) 2014年 History. All rights reserved.
//

@import Foundation;
@import UIKit;
@import CoreLocation;

@interface HZPreference : NSObject
+ (void)saveObject:(id)object forKey:(NSString *)key;
+ (void)saveBool:(BOOL)value forKey:(NSString *)key;
+ (void)saveInteger:(NSInteger)value forKey:(NSString *)key;
+ (void)saveFloat:(CGFloat)value forKey:(NSString *)key;
+ (void)saveURL:(NSURL *)URL forKey:(NSString *)key;
+ (void)saveCoordinate:(CLLocationCoordinate2D)coordinate forKey:(NSString *)key;

+ (void)removeObjectForKey:(NSString *)key;
+ (void)removeCoordinateForKey:(NSString *)key;

+ (id)objectForKey:(NSString *)key;
+ (BOOL)boolForKey:(NSString *)key;
+ (NSInteger)integerForKey:(NSString *)key;
+ (CGFloat)floatForKey:(NSString *)key;
+ (NSURL *)URLForKey:(NSString *)key;
+ (CLLocationCoordinate2D)coordinateForKey:(NSString *)key;
@end
