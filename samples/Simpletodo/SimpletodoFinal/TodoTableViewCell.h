//
//  TodoTableViewCell.h
//  SimpletodoFinal
//
//  Created by Andrew Vasquez on 3/22/17.
//
//

#import <UIKit/UIKit.h>

@interface TodoTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *version;
@property (weak, nonatomic) IBOutlet UILabel *device;
@property (weak, nonatomic) IBOutlet UILabel *item;
@property (weak, nonatomic) IBOutlet UILabel *createdDate;
@property (weak, nonatomic) IBOutlet UILabel *ghostData;
@property (weak, nonatomic) IBOutlet UILabel *v2Item;

@end
