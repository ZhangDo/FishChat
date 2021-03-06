//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WANewYearConfigItem : NSObject <PBCoding>
{
    unsigned int resSubType;
    unsigned int startTime;
    unsigned int endTime;
    unsigned int reportID;
    NSString *appID;
    NSString *nickName;
    NSString *scanMatchText;
    NSString *errorURL;
}

+ (void)initialize;
@property(retain) NSString *errorURL; // @synthesize errorURL;
@property unsigned int reportID; // @synthesize reportID;
@property unsigned int endTime; // @synthesize endTime;
@property unsigned int startTime; // @synthesize startTime;
@property unsigned int resSubType; // @synthesize resSubType;
@property(retain) NSString *scanMatchText; // @synthesize scanMatchText;
@property(retain) NSString *nickName; // @synthesize nickName;
@property(retain) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

