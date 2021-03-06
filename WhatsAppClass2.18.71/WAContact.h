//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, UIImage, WAContactMultiValueProperty, WAContactProperty;

__attribute__((visibility("hidden")))
@interface WAContact : NSObject
{
    NSString *_fullName;
    NSMutableDictionary *_userInfo;
    UIImage *_addressBookThumbnail;
    _Bool _contactDetailsFetchFailed;
    _Bool _keepExistingAddressBookData;
    int _defaultPersonID;
    _Bool _disabled;
    _Bool _selected;
    _Bool _verifiedNameChecked;
    _Bool _fullContactDetailsLoaded;
    _Bool _aboutTextFetched;
    _Bool _addressBookThumbnailLoaded;
    int _abRecordID;
    unsigned int _nameFormat;
    NSString *_localizedLabel;
    NSString *_jid;
    NSString *_contactIdentifier;
    NSString *_aboutText;
    NSDate *_aboutTimestamp;
    NSString *_label;
    NSString *_value;
    NSString *_namePrefix;
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_previousFamilyName;
    NSString *_nameSuffix;
    NSString *_nickname;
    NSString *_jobTitle;
    NSString *_departmentName;
    NSString *_organizationName;
    NSString *_phoneticGivenName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticFamilyName;
    NSString *_phoneticOrganizationName;
    NSString *_highlightedName;
    NSString *_pushName;
    WAContactMultiValueProperty *_phones;
    WAContactMultiValueProperty *_emails;
    WAContactMultiValueProperty *_webURLs;
    WAContactMultiValueProperty *_addresses;
    WAContactProperty *_birthday;
    WAContactMultiValueProperty *_dates;
    WAContactMultiValueProperty *_imAccounts;
    WAContactMultiValueProperty *_socialProfiles;
    WAContactProperty *_note;
    NSArray *_searchTokens;
    NSString *_sectionTitle;
    long long _sort;
    long long _contactType;
    long long _blockedStatus;
}

+ (id)localizedStringForKey:(id)arg1;
+ (id)cnPropertyKeyForContactKey:(id)arg1;
+ (int)abPropertyIDForContactKey:(id)arg1;
+ (id)allCNContactKeys;
+ (id)selfContact;
+ (id)allWAContactKeys;
+ (void)initialize;
+ (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
+ (id)sectionTitleForIndexName:(id)arg1;
+ (unsigned long long)sectionForIndexName:(id)arg1;
+ (id)sectionIndexTitles;
+ (id)sectionTitles;
+ (void)captureNameFormat;
+ (void)prepareSectionData;
+ (id)nonAlphanumericCharacterSet;
+ (id)collation;
+ (_Bool)reverseNameSearch;
@property(nonatomic) long long blockedStatus; // @synthesize blockedStatus=_blockedStatus;
@property(nonatomic) _Bool addressBookThumbnailLoaded; // @synthesize addressBookThumbnailLoaded=_addressBookThumbnailLoaded;
@property(nonatomic) _Bool aboutTextFetched; // @synthesize aboutTextFetched=_aboutTextFetched;
@property(nonatomic) _Bool fullContactDetailsLoaded; // @synthesize fullContactDetailsLoaded=_fullContactDetailsLoaded;
@property(nonatomic) _Bool verifiedNameChecked; // @synthesize verifiedNameChecked=_verifiedNameChecked;
@property(nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(copy, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(retain, nonatomic) WAContactProperty *note; // @synthesize note=_note;
@property(retain, nonatomic) WAContactMultiValueProperty *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(retain, nonatomic) WAContactMultiValueProperty *imAccounts; // @synthesize imAccounts=_imAccounts;
@property(retain, nonatomic) WAContactMultiValueProperty *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) WAContactProperty *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) WAContactMultiValueProperty *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) WAContactMultiValueProperty *webURLs; // @synthesize webURLs=_webURLs;
@property(retain, nonatomic) WAContactMultiValueProperty *emails; // @synthesize emails=_emails;
@property(retain, nonatomic) WAContactMultiValueProperty *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSString *pushName; // @synthesize pushName=_pushName;
@property(copy, nonatomic) NSString *highlightedName; // @synthesize highlightedName=_highlightedName;
@property(copy, nonatomic) NSString *phoneticOrganizationName; // @synthesize phoneticOrganizationName=_phoneticOrganizationName;
@property(copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(copy, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(copy, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
@property(copy, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy, nonatomic) NSString *previousFamilyName; // @synthesize previousFamilyName=_previousFamilyName;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSDate *aboutTimestamp; // @synthesize aboutTimestamp=_aboutTimestamp;
@property(copy, nonatomic) NSString *aboutText; // @synthesize aboutText=_aboutText;
@property(nonatomic) unsigned int nameFormat; // @synthesize nameFormat=_nameFormat;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(nonatomic) int abRecordID; // @synthesize abRecordID=_abRecordID;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (_Bool)deleteContactFromAddressBook:(void *)arg1;
- (_Bool)saveChangesToAddressBook:(void *)arg1 returningABRecord:(out const void **)arg2;
- (void)populateAddressBookPersonRecord:(void *)arg1;
- (void)saveDataFromMultiValueProperty:(id)arg1 toAddressBook:(void *)arg2 contactForNewProperties:(void *)arg3;
- (id)propertyMapFromContactMultiValueProperty:(id)arg1;
- (void)updatePersonRecord:(void *)arg1 withDataFromMultiValueProperty:(id)arg2;
- (void)updatePersonRecord:(void *)arg1 withStringValue:(id)arg2 forProperty:(int)arg3;
- (_Bool)deleteContactFromContactStore:(id)arg1;
- (_Bool)saveChangesToContactStore:(id)arg1 returningCNContact:(out id *)arg2;
- (void)populateCNContact:(id)arg1;
- (void)addDataFromMultiValueProperty:(id)arg1 toCNContact:(id)arg2;
- (void)addPostalAddress:(id)arg1;
- (void)addEmailAddress:(id)arg1;
- (void)addNewJID:(id)arg1 overOldJID:(id)arg2;
- (void)addPhoneNumberFromJID:(id)arg1;
- (void)addPhoneNumber:(id)arg1;
- (void)addPhoneNumber:(id)arg1 jid:(id)arg2;
- (void)mergeDataFromContact:(id)arg1;
- (void)prepareForEditing;
@property(readonly, nonatomic) _Bool canBeEdited;
- (void)postProcessPhones;
- (void)mergeInSingleValueFieldsFromRecord:(void *)arg1;
- (void)loadContactDetailsFromABRecord:(void *)arg1 addressBook:(void *)arg2;
- (void)loadContactDetailsFromCNContact:(id)arg1;
- (void)loadFullContactDetailsFromAddressBookIfNecessary;
- (void)loadVerifiedAddressAndPhone;
@property(readonly, nonatomic) UIImage *addressBookThumbnail;
- (void)configureAsVCardContact;
@property(readonly, nonatomic, getter=isVCardContact) _Bool vCardContact;
@property(readonly, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(readonly, copy, nonatomic) NSString *additionalInfo;
@property(readonly, copy, nonatomic) NSString *compositeName;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *shortName;
@property(readonly, copy, nonatomic) NSString *groupName;
- (void)checkVerifiedNameIfNecessary;
- (void)fetchAboutTextIfNeeded;
@property(readonly, nonatomic) NSString *fullNameForWebClient;
@property(nonatomic, getter=isBlocked) _Bool blocked;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic, getter=isOrganizationContact) _Bool organizationContact;
@property(readonly, nonatomic, getter=isUPIContact) _Bool upiContact;
@property(readonly, nonatomic, getter=isGroupContact) _Bool groupContact;
@property(readonly, nonatomic, getter=isPSAContact) _Bool PSAContact;
@property(readonly, nonatomic, getter=isVerified) _Bool verified;
@property(readonly, nonatomic, getter=isOutOfNetworkContact) _Bool outOfNetworkContact;
@property(readonly, nonatomic, getter=isUnknownContact) _Bool unknownContact;
- (void)loadMetadata;
- (void)loadNames;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)dataMatchesContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithUPIHandle:(id)arg1;
- (id)initWithABRecord:(void *)arg1 addressBook:(void *)arg2;
- (id)initWithCNContact:(id)arg1;
- (id)initWithGroupMember:(id)arg1;
- (id)initWithChatSession:(id)arg1;
- (id)initWithUnknownJID:(id)arg1;
- (id)initWithABContact:(id)arg1;

@end

