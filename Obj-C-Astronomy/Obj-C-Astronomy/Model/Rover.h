//
//  Rover.h
//  Obj-C-Astronomy
//
//  Created by Patrick Millet on 6/16/20.
//  Copyright © 2020 PatrickMillet79. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Rover : NSObject

@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSString *landingDate;
@property (nonatomic, readonly) NSString *launchDate;
@property (nonatomic, readonly, copy) NSString *status;
@property (nonatomic, readonly) int maxSol;
@property (nonatomic, readonly) NSString *maxDate;
@property (nonatomic, readonly) int totalPhotos;
@property (nonatomic, readonly, nullable) NSArray *sols;

- (instancetype)initWithIdentifier:(int)identifier
                              name:(nonnull NSString *)name
                       landingDate:(nonnull NSString *)landingDate
                        launchDate:(nonnull NSString *)launchDate
                            status:(nonnull NSString *)status
                            maxSol:(int)maxSol
                           maxDate:(nonnull NSString *)maxDate
                       totalPhotos:(int)totalPhotos
                            sols:(nullable NSArray *)sols;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
