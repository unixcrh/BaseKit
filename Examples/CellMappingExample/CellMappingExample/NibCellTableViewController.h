//
//  NibCellTableViewController.h
//  CellMappingExample
//
//  Created by Bruno Wernimont on 7/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BKTableModelDataSource.h"

@class BKTableModel;

@interface NibCellTableViewController : UITableViewController<BKTableModelDataSource>

@property (nonatomic, retain) BKTableModel *tableModel;
@property (nonatomic, retain) NSArray *items;

@end
