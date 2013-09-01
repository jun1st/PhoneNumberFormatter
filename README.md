PhoneNumberFormatter
====================

PhoneNumberFormatter for iOS

To format phone number 1234567890 to (123)-456-7890, based on configuration.

    PhoneNumberFormatter *formatter = [PhoneNumberFormatter alloc] init]
    NSString *formatedPhoneNumberString = [formatter format:@"1234567890" withLocale:@"us"];
  

the code is originated copied from: [Ahmed Abdelkader's PhoneNumberFormatter class](http://the-lost-beauty.blogspot.com/2010/01/locale-sensitive-phone-number.html)
