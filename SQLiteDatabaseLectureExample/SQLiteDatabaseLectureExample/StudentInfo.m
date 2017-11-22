//
//  StudentInfo.m
//  SQLiteDatabaseLectureExample
//
//  Created by Brian Martinez on 11/22/17.
//  Copyright © 2017 Brian Martinez. All rights reserved.
//

#import "StudentInfo.h"

@implementation StudentInfo
-(id)initWithData:(NSString *)n andAddress:(NSString *)a andPhone:(NSString *)p{
    if (self == [super init]){
        [self setName:n];
        [self setAddress:a];
        [self setPhone:p];
    }
    
    return self;
}
@end
