//
//  CDMListsViewController.h
//  Cheddar for Mac
//
//  Created by Indragie Karunaratne on 2012-08-13.
//  Copyright (c) 2012 Nothing Magical. All rights reserved.
//

@class CDMTasksViewController;
@class CDMShadowTableView;

@interface CDMListsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate>

@property (nonatomic, weak) IBOutlet NSArrayController *arrayController;
@property (nonatomic, weak) IBOutlet CDMShadowTableView *tableView;
@property (nonatomic, assign) IBOutlet CDMTasksViewController *tasksViewController;
@property (nonatomic, weak) IBOutlet NSView *addListView;
@property (nonatomic, weak) IBOutlet NSTextField *addListField;
@property (nonatomic, strong) IBOutlet NSView *noListsView;
@property (nonatomic, strong) IBOutlet NSView *loadingListsView;
@property (nonatomic, strong, readonly) CDKList *selectedList;

- (IBAction)reload:(id)sender;
- (IBAction)addList:(id)sender;
- (IBAction)closeAddList:(id)sender;
- (IBAction)createList:(id)sender;

- (IBAction)renameList:(id)sender;
- (IBAction)archiveList:(id)sener;
- (IBAction)deleteList:(id)sender;

@end
