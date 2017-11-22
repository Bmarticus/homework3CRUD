//
//  StudentInfo.h
//  SQLiteDatabaseLectureExample
//
//  Created by Brian Martinez on 11/22/17.
//  Copyright © 2017 Brian Martinez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StudentInfo : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *phone;

-(id)initWithData:(NSString *)n andAddress:(NSString *)a andPhone:(NSString *)p;
@end
