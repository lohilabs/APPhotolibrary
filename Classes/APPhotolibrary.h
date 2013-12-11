//
//  APPhotolibrary.h
//  APPhotolibrary
//
//  Created by Alexey Belkevich on 12/10/13.
//  Copyright (c) 2013 alterplay. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ALAssetsLibrary;

@interface APPhotolibrary : NSObject
{
    ALAssetsLibrary *library;
}

@property (nonatomic, assign) BOOL sortAscending;
@property (nonatomic, copy) NSComparator sortComparator;

+ (BOOL)isAuthorized;
- (void)loadPhotosAsynchronously:(void (^)(NSArray *assets, NSError *error))callbackBlock;

@end
