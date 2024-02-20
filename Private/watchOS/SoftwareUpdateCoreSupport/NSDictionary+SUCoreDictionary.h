//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1856.60.8.0.0
//
#ifndef NSDictionary_SUCoreDictionary_h
#define NSDictionary_SUCoreDictionary_h
@import Foundation;

@interface NSDictionary (SUCoreDictionary)
/* class methods */
+ (id)_safeKeyName:(id)name paddedToLength:(unsigned long long)length;
+ (id)_safeValueName:(id)name ofMaxFieldLength:(unsigned long long)length providingSubstitutionMap:(id)map;
+ (id)safeSummaryForDictionary:(id)dictionary;

/* instance methods */
- (BOOL)safeBooleanForKey:(id)key;
- (BOOL)safeBooleanForKey:(id)key defaultValue:(BOOL)value;
- (long long)safeLLForKey:(id)key;
- (long long)safeLLForKey:(id)key defaultValue:(long long)value;
- (unsigned long long)safeULLForKey:(id)key;
- (unsigned long long)safeULLForKey:(id)key defaultValue:(unsigned long long)value;
- (long long)safeIntegerForKey:(id)key;
- (long long)safeIntegerForKey:(id)key defaultValue:(long long)value;
- (long long)safeTriStateForKey:(id)key;
- (long long)safeTriStateForKey:(id)key defaultValue:(long long)value;
- (id)safeStringForKey:(id)key;
- (id)safeDictionaryForKey:(id)key;
- (id)safeDictionaryForKey:(id)key fromBase:(id)base withKeyDescription:(id)description;
- (id)safeDataForKey:(id)key;
- (id)safeDateForKey:(id)key;
- (id)safeObjectForKey:(id)key ofClass:(Class)class;
- (id)safeDescriptionWithName:(id)name;
- (id)safeDescriptionWithName:(id)name maxNestedLevel:(unsigned long long)level withMaxValueLength:(unsigned long long)length providingSubstitutionMap:(id)map;
- (id)_safeDescriptionWithName:(id)name atNestedLevel:(unsigned long long)level maxNestedLevel:(unsigned long long)level showingSubLevelName:(BOOL)name withMaxValueLength:(unsigned long long)length providingSubstitutionMap:(id)map;
- (id)safeSubDescriptionAtNestedLevel:(unsigned long long)level instanceAtLevel:(unsigned long long)level withMaxValueLength:(unsigned long long)length providingSubstitutionMap:(id)map;
- (id)safeSummary;
- (void)_logReturningDefault:(id)default forKey:(id)key valueType:(id)type defaultValueName:(id)name;
- (void)_logReturningNil:(id)nil forKey:(id)key valueType:(id)type;
- (void)_logReturningNil:(id)nil forKey:(id)key valueType:(id)type fromBase:(id)base withKeyDescription:(id)description;
@end

#endif /* NSDictionary_SUCoreDictionary_h */