//
//  HPTCardNumberFormatter_Private.h
//  Pods
//
//  Created by Jonathan TIRET on 05/11/2015.
//
//

#import "HPTCardNumberFormatter.h"

@interface HPTCardNumberFormatter ()

- (NSIndexSet *)cardNumberLengthForPaymentProductCode:(NSString *)paymentProductCode;
- (BOOL)luhnCheck:(NSString *)stringToTest;
- (BOOL)plainTextNumber:(NSString *)plainTextNumber hasValidLengthForPaymentProductCode:(NSString *)paymentProductCode;

@end
