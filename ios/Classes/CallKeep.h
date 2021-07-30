//
//  CallKeep.h
//  CallKeep
//
//  Copyright 2016-2019 The CallKeep Authors (see the AUTHORS file)
//  SPDX-License-Identifier: ISC, MIT
//
#import <Flutter/Flutter.h>
#import <Foundation/Foundation.h>

@interface CallKeep : NSObject
@property(nonatomic, strong, nullable) FlutterMethodChannel *eventChannel;

- (BOOL)handleMethodCall:(FlutterMethodCall *_Nonnull)call result:(FlutterResult _Nonnull)result;

+ (BOOL)application:(UIApplication *_Nonnull)application
            openURL:(NSURL *_Nonnull)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> *_Nonnull)options NS_AVAILABLE_IOS(9_0);

+ (BOOL)application:(UIApplication *_Nonnull)application
    continueUserActivity:(NSUserActivity *_Nonnull)userActivity
      restorationHandler:(void (^_Nonnull)(NSArray<id<UIUserActivityRestoring> > *__nullable restorableObjects))restorationHandler;

@end
