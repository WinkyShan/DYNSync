//
//  DSGovernanceObjectListViewController.h
//  DashSync_Example
//
//  Created by Sam Westrich on 6/15/18.
//  Copyright © 2018 Dash Core Group. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DYNSync/DashSync.h>

@interface DSGovernanceObjectListViewController : UITableViewController<NSFetchedResultsControllerDelegate,UISearchBarDelegate>

@property (nonatomic,strong) DSChainManager * chainManager;

@end
