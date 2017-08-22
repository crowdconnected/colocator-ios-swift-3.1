//
//  CCRequest.h
//  CCLocation
//
//  Created by Ralf Kernchen on 12/04/2014.
//  Copyright (c) 2014 CrowdConnected. All rights reserved.
//

#pragma mark - CCRequestDelegate

#import <Foundation/Foundation.h>
//#import <CCLocation/CCLocation-Swift.h>

@protocol CCRequestDelegate;
@class CCRequestMessaging;
@class CCLocationManager;

@interface CCRequest : NSObject

@property (assign, nonatomic) id <CCRequestDelegate> delegate;

@property (nonatomic, strong) NSDictionary* aliases;
@property (readonly) NSString* deviceId;
@property NSDate* startTime;


+ (id) sharedManager;

- (void) startWithURLString:(NSString *)serverURL apiKey:(NSString*) apiKey ccRequestMessaging:(CCRequestMessaging*) ccRequestMessaging ccLocationManager:(CCLocationManager*) ccLocationManager;
- (void) sendMarker:(NSString *)data;
//- (void) sendClientMessage: (NSData* ) clientMessageData queuable:(BOOL)queuable;
- (void) stop;

- (void) sendWebSocketMessageSwiftBridge:(NSData*) data;
- (void) setDeviceIdSwiftBridge:(NSString *)deviceId;
- (void) messageQueuePushSwiftBridge:(NSData*) message;
- (long) messageQueueCountSwiftBridge;
//- (long) getCachePackageSizeSwiftBridge;
//- (void) setCachePackageSizeSwiftBridge:(NSInteger)cachePackageSize;
//- (long) getTimeBetweenSendsSwiftBrigde;
//- (void) setTimeBetweenSendsSwiftBridge:(NSInteger)cachePackageSize;
- (NSData*) messageQueuePopSwiftBridge;
- (void) updateBTSettingsSwiftBridge:(NSNumber*)btleAltBeaconScanTime btleBeaconScanTime:(NSNumber*)btleBeaconScanTime btleAdvertiseTime:(NSNumber*)btleAdvertiseTime idleTime:(NSNumber*)idleTime offTime:(NSNumber*)offTime altBeaconScan:(BOOL)altBeaconScan batchWindow:(NSNumber*)batchWindow state:(NSString*)state;
- (void) updateGEOSettingsSwiftBridge:(BOOL) network gps:(BOOL)gps cycleOn:(NSInteger)cycleOn cycleOff:(NSInteger)cycleOff interval:(NSInteger)interval minDistance:(NSInteger)minDistance accuracy:(float)accuracy regions:(NSArray*)regions;
- (void) setiBeaconProximityUUIDsSwiftBridge:(NSArray *)proximitUUIDs;
//- (void) setPingTimerDelaySwiftBridge:(NSInteger)pingTimerDelay;
//- (void) resetPingTimerSwiftBridge;
- (NSDate*)getStartTimeSwiftBridge;
- (NSTimeInterval) timeIntervalSinceBoot;
- (void) fetchTrueTime;
@end

#pragma mark - CCRequestDelegate
@protocol CCRequestDelegate <NSObject>;

@required
- (void) receivedTextMessage:(NSDictionary*) message;
- (void) ccRequestDidConnect;
- (void) ccRequestDidFailWithError: (NSError*) error;

@end

