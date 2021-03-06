//
//  MinCharTextField.h
//  AirBitz
//
//  Created by Carson Whitsett on 3/25/14.
//  Copyright (c) 2014 AirBitz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StylizedTextField.h"

@interface MinCharTextField : StylizedTextField

@property (nonatomic, assign) int minimumCharacters;
@property (nonatomic, readonly) BOOL satisfiesMinimumCharacters;
@end
