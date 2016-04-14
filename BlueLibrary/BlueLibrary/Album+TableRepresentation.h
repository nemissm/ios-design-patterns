//
//  Album+TableRepresentation.h
//  BlueLibrary
//
//  Created by Mikhail Naryshkin on 07/04/16.
//  Copyright © 2016 Nerpa. All rights reserved.
//

#import "Album.h"

@interface Album (TableRepresentation)

- (NSDictionary *)tr_tableRepresentation;

@end
