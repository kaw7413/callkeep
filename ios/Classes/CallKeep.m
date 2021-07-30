//
//  CallKeep.m
//  CallKeep
//
//  Copyright 2016-2019 The CallKeep Authors (see the AUTHORS file)
//  SPDX-License-Identifier: ISC, MIT
//
#import <objc/runtime.h>
#import <AVFoundation/AVFoundation.h>

#import "CallKeep.h"

@implementation CallKeep {}

- (FlutterMethodChannel *)eventChannel
{
    return objc_getAssociatedObject(self, _cmd);
}

- (void)setEventChannel:(FlutterMethodChannel *)eventChannel
{
    objc_setAssociatedObject(self, @selector(eventChannel), eventChannel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (instancetype)init
{
#ifdef DEBUG
    NSLog(@"[CallKeep][init]");
#endif
    return self;
}

- (BOOL)handleMethodCall:(FlutterMethodCall*)call result:(FlutterResult)result {
    result(nil);
    return YES;
}

@end