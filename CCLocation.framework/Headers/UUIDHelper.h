//
//  UUIDHelper.h
//  CCLocation
//
//  Created by Ralf Kernchen on 14/08/2013.
//
//  Helper Class for UUID creation and conversions
//

#import <Foundation/Foundation.h>

@interface UUIDHelper : NSObject

+ (NSString *)deviceApplicationIdentifier;

+ (NSUUID *)deviceApplicationIdentifierUUID;

+ (NSString *)deviceApplicationIdentifierBase64String;

+ (NSData *)deviceApplicationIdentifierBytes;

+ (NSUUID *)UUIDFromBase64String:base64String;


@end
