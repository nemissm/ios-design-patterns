//
//  LibraryAPI.h
//  BlueLibrary
//
//  Created by Mikhail Naryshkin on 07/04/16.
//  Copyright © 2016 Nerpa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Album.h"

@interface LibraryAPI : NSObject

+ (LibraryAPI *)sharedInstance;

- (NSArray*)getAlbums;
- (void)addAlbum:(Album*)album atIndex:(int)index;
- (void)deleteAlbumAtIndex:(int)index;
- (void)saveAlbums;

@end
