//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemServiceServerDelegate.h"

@class SBSystemServiceServer;

@protocol SBSystemServiceServerBiometricsDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSystemServiceClient>)arg2 fetchUnlockCredentialSet:(void (^)(NSData *))arg3;
@end

