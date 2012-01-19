//
//  CDSTasksController.m
//  CoreDataSpike
//
//  Created by Joel Garcia Martinez on 8/5/11.
//  Copyright 2011 Binary Day. All rights reserved.
//

#import "CDSTasksController.h"

@implementation CDSTasksController

@synthesize createTaskWindow;
@synthesize taskTitle;
@synthesize taskDescription;
@synthesize taController;

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

-(void)createTask:(id)sender
{
    [createTaskWindow setIsVisible:YES];
}

-(void)saveTask:(id)sender
{
    id task = [[taController newObject] autorelease];
    [task setValue:[taskTitle stringValue] forKey:@"title"];
    [task setValue:[taskDescription stringValue] forKey:@"taskDescription"];
    [taskTitle setStringValue:@""];
    [taskDescription setStringValue:@""];
    [createTaskWindow setIsVisible:NO];
}

- (void)cancel:(id)sender
{
    [createTaskWindow setIsVisible:NO];
}


@end
