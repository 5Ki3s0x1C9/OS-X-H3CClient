//
//  H3CClientAppDelegate.h
//  OS-X-H3CClient
//
//  Created by Arthas on 6/6/14.
//  Copyright (c) 2014 Shandong University. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "H3CClientBackend.h"
#import "StatusMenuViewController.h"

@interface H3CClientAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic) H3CClientBackend *backend;
@property (nonatomic) StatusMenuViewController *menuViewController;
@property (nonatomic) BOOL willReconnect;

@property (weak) IBOutlet NSTextField *usernameView;
@property (weak) IBOutlet NSSecureTextField *passwordView;
@property (weak) IBOutlet NSPopUpButton *interfaceView;
@property (weak) IBOutlet NSButton *applyView;
@property (weak) IBOutlet NSProgressIndicator *progressView;
@property (weak) IBOutlet NSButton *autoconnectView;

@end
