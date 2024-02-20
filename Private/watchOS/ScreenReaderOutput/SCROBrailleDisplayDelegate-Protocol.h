//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef SCROBrailleDisplayDelegate_Protocol_h
#define SCROBrailleDisplayDelegate_Protocol_h
@import Foundation;

@protocol SCROBrailleDisplayDelegate <NSObject>
/* instance methods */
- (void)brailleDisplay:(id)display driverDidLoad:(BOOL)load;
- (void)brailleDriverDisconnected:(id)disconnected;
- (void)brailleDisplay:(id)display isSleeping:(BOOL)sleeping;
- (void)configurationChangedForBrailleDisplay:(id)display;
- (void)brailleDisplay:(id)display pressedKeys:(id)keys;
- (void)brailleDisplayHadUserInteraction:(id)interaction;
- (void)brailleDisplay:(id)display didReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withString:(id)string cursor:(unsigned long long)cursor;
- (void)brailleDisplay:(id)display didMoveSelection:(unsigned long long)selection;
- (void)brailleDidStartEditingWithDisplay:(id)display;
- (void)brailleDisplay:(id)display insertedUntranslatedText:(id)text speakLiterally:(BOOL)literally;
- (void)brailleDisplay:(id)display deletedUntranslatedText:(id)text speakLiterally:(BOOL)literally;
- (void)requestSpeech:(id)speech language:(id)language;
- (void)brailleDisplay:(id)display willMemorizeKey:(id)key;
- (void)brailleDisplay:(id)display memorizedKey:(id)key;
- (void)brailleDisplay:(id)display didDisplay:(id)display;
- (void)brailleDisplay:(id)display didPanLeft:(id)left elementToken:(id)token appToken:(id)token lineOffset:(id)offset;
- (void)brailleDisplay:(id)display didPanRight:(id)right elementToken:(id)token appToken:(id)token lineOffset:(id)offset;
- (id)brailleInputManager;
- (id)newBrailleDisplayCommandDispatcher;
- (void)playBorderHitSoundForBrailleDisplay:(id)display;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)display;
- (void)brailleDisplay:(id)display copyStringToClipboard:(id)clipboard;
@end

#endif /* SCROBrailleDisplayDelegate_Protocol_h */