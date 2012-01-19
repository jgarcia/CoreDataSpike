//
//  CDSTasksController.h
//  CoreDataSpike
//
//  Created by Joel Garcia Martinez on 8/5/11.
//  Copyright 2011 Binary Day. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDSTasksController : NSObject{
    NSWindow *createTaskWindow;
    NSTextField *taskTitle;
    NSTextField *taskDescription;
    NSArrayController *taController;
}

@property (assign) IBOutlet NSWindow *createTaskWindow; 
@property (assign) IBOutlet NSTextField *taskTitle;
@property (assign) IBOutlet NSTextField *taskDescription;
@property (assign) IBOutlet NSArrayController *taController;


-(IBAction)createTask:(id)sender;
-(IBAction)saveTask:(id)sender;
-(IBAction)cancel:(id)sender;

@end
