//
//  PhoneNumberFormatter.h
//  IVR
//
//  Created by qijun on 1/9/13.
//  Copyright (c) 2013 Buckete. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhoneNumberFormatter : NSObject {
    //stores predefiend formats for each locale
    NSDictionary *predefinedFormats;
}

/*
 Loads predefined formats for each locale.
 The formats should be sorted so as more restrictive formats should come first.
 This is necessary as the formatting code processes the formats in order and
 selects the first one that matches the whole input string.
 */
- (id)init;

/*
 Attemps to format the phone number to the specified locale.
 */
- (NSString *)format:(NSString *)phoneNumber withLocale:(NSString *)locale;
/*
 Strips the input string from characters added by the formatter.
 Namely, it removes any character that couldn't have been entered by the user.
 */
- (NSString *)strip:(NSString *)phoneNumber;

/*
 Returns true if the character comes from a phone pad.
 */
- (BOOL)canBeInputByPhonePad:(char)c;


@end
