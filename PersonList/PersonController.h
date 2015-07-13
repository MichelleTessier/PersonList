//
//  PersonController.h
//  PersonList
//
//  Created by Joshua Howland on 1/27/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

//Model controller

#import <Foundation/Foundation.h>
#import "Person.h"

@interface PersonController : NSObject

@property (nonatomic, strong, readonly) NSArray *personList;

//so we only have one instance of person Controller for the app
+ (PersonController *)sharedInstance;

- (void)save;

- (void)addPerson:(Person *)person;
- (void)removePerson:(Person *)person;

@end
