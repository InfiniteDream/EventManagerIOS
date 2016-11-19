//
//  DetailViewController.h
//  EventManagerIOS
//
//  Created by Akyol, Oguzhan on 19.11.16.
//  Copyright © 2016 Akyol, Oguzhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

