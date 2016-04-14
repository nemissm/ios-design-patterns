//
//  Album+TableRepresentation.m
//  BlueLibrary
//
//  Created by Mikhail Naryshkin on 07/04/16.
//  Copyright © 2016 Nerpa. All rights reserved.
//

#import "Album+TableRepresentation.h"

@implementation Album (TableRepresentation)

- (NSDictionary *)tr_tableRepresentation {
    
    return @{@"titles":@[@"Artist", @"Album", @"Genre", @"Year"],
             @"values":@[self.artist, self.title, self.genre, self.year]};
}

@end
