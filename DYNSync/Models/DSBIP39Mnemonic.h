//
//  DSBIP39Mnemonic.h
//  DashSync
//
//  Created by Aaron Voisine for BreadWallet on 3/21/14.
//  Copyright (c) 2014 Aaron Voisine <voisine@gmail.com>
//  Updated by Quantum Explorer on 05/11/18.
//  Copyright (c) 2018 Quantum Explorer <quantum@dash.org>
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "DSMnemonic.h"

NS_ASSUME_NONNULL_BEGIN

// BIP39 is method for generating a deterministic wallet seed from a mnemonic phrase
// https://github.com/bitcoin/bips/blob/master/bip-0039.mediawiki

#define BIP39_CREATION_TIME 1427587200.0
#define BIP39_WALLET_UNKNOWN_CREATION_TIME 0

typedef NS_ENUM(NSUInteger, DSBIP39Language) {
    DSBIP39Language_Default,
    DSBIP39Language_English,
    DSBIP39Language_French,
    DSBIP39Language_Spanish,
    DSBIP39Language_Italian,
    DSBIP39Language_Japanese,
    DSBIP39Language_Korean,
    DSBIP39Language_ChineseSimplified,
};

@interface DSBIP39Mnemonic : NSObject<DSMnemonic>

@property (nonnull, nonatomic, readonly) NSArray *words;
@property (nonatomic, assign) DSBIP39Language defaultLanguage;

+ (instancetype _Nullable)sharedInstance;

+ (NSArray*)availableLanguages;
+ (NSString*)identifierForLanguage:(DSBIP39Language)language;

@end

NS_ASSUME_NONNULL_END
