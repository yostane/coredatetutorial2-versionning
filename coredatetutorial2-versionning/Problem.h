//
//  Problem.h
//  CoreDataTutorial
//
//  Created by Yassine Benabbas on 27/02/13.
//  Copyright (c) 2013 yostane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Problem : NSManagedObject

@property (nonatomic, retain) NSString * comment;
@property (nonatomic, retain) NSNumber * level;
@property (nonatomic, retain) NSString * question;
@property (nonatomic, retain) NSString * solution;
@property (nonatomic, retain) NSString * title;

@end
