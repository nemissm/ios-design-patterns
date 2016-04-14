//
//  Album.h
//  BlueLibrary
//
//  Created by Mikhail Naryshkin on 07/04/16.
//  Copyright © 2016 Nerpa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Album : NSObject <NSCoding>

@property (nonatomic, copy, readonly) NSString *title, *artist, *genre, *coverUrl, *year;

- (id)initWithTitle:(NSString *)title artist:(NSString *)artist coverUrl:(NSString *)coverUrl year:(NSString *)year;

@end
