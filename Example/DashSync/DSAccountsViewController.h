//
//  DSAccountsViewController.h
//  DashSync_Example
//
//  Created by Sam Westrich on 6/3/18.
//  Copyright © 2018 Dash Core Group. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DYNSync/DashSync.h>

@interface DSAccountsViewController : UITableViewController

@property (nonatomic, strong) DSWallet * wallet;

@end
