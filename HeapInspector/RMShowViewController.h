//
//  RMShowViewController.h
//  HeapInspectorExample
//
//  Created by Christian Menschel on 30.08.14.
//  Copyright (c) 2014 tapwork. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RMShowViewController : UIViewController

@property (nonatomic) BOOL showEditButton; // Default is YES

- (instancetype)initWithObject:(id)object;

@end
