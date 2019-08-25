//
//  LocationViewInterface.h
//  AlTayerMotor
//
//  Created by Niteco Macmini 5wdwyl  on 10/21/15.
//  Copyright © 2015 Niteco. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MLocation;
@protocol LocationViewInterface <NSObject>
- (void)updateLocations:(NSArray *)locations;
- (void)callToLocation:(MLocation *)location;
- (void)routeToLocation:(MLocation *)location;
@end
