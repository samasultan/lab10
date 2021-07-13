//
//  Kitchen.h
//  PizzaRestaurant
//
//  Created by user169313 on 2021-07-13.
//

#import <Foundation/Foundation.h>
#import "Pizza.h"
#import "KitchenDelegate.h"
@interface Kitchen : NSObject

@property (nonatomic, weak) id<KitchenDelegate> kitchenDelegate; 

-(Pizza *)makePizzaWithSize:(PizzaSize)size toppings:(NSArray *)toppings;

-(Pizza *)makeLargePepperoni; 

@end
