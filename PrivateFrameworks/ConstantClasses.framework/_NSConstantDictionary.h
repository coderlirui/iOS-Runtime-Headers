/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
 */

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration> {
}

+ (id)alloc;
+ (void)load;

- (id)allKeys;
- (id)allValues;
- (unsigned int)capacity;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
