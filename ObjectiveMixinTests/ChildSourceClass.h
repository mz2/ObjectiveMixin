//
//  ChildSourceClass.h
//  ObjectiveMixin
//
//  Created by Vladimir Mitrovic on 11/04/2011.
//  Copyright 2011 Vladimir Mitrovic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SourceClass.h"

@interface ChildSourceClass : SourceClass {
    
}

- (void) childMethodCallingParentMethod;

@end
