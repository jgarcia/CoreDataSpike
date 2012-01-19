//
//  CoreDataSpikeAppDelegate.h
//  CoreDataSpike
//
//  Created by Joel Garcia Martinez on 8/5/11.
//  Copyright 2011 Binary Day. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CoreDataSpikeAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectModel *__managedObjectModel;
    NSManagedObjectContext *__managedObjectContext;
}

@property (assign) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
