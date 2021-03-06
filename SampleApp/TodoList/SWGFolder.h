#import <Foundation/Foundation.h>
#import "NIKSwaggerObject.h"

@interface SWGFolder : NIKSwaggerObject

@property(nonatomic) NSString* name;
@property(nonatomic) NSString* path;
@property(nonatomic) NSArray* metadata;
- (id) name: (NSString*) name
     path: (NSString*) path
     metadata: (NSArray*) metadata;

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;


@end

