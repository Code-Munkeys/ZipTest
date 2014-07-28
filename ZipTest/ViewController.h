//
//  ViewController.h
//  ZipTest
//
//  Created by Brandon Trebitowski on 8/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property(nonatomic, weak) IBOutlet UIImageView *imageView;
@property(nonatomic, weak) IBOutlet UILabel *label;
- (IBAction)zipFilesButtonPressed:(id)sender;
@end
