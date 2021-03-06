/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEONamedFeature : PBCodable {
    NSString *_name;
    double _value;
}

@property(retain) NSString * name;
@property double value;

- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)writeTo:(id)arg1;

@end
