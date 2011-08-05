/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/MailDelivery.h>

#import "EWSErrorHandler-Protocol.h"

@class MFError;

@interface EWSDelivery : MailDelivery <EWSErrorHandler>
{
    MFError *_error;
}

- (void)dealloc;
- (Class)deliveryClass;
- (id)headersForDelivery;
- (int)deliverSynchronously;
- (void)handleEWSError:(id)arg1;
@property(retain) MFError *error; // @synthesize error=_error;

@end
