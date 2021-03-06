//
//  SKSPokemon.h
//  Pokedex-Hybrid
//
//  Created by Lambda_School_Loaner_204 on 1/30/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface SKSPokemon : NSObject

@property (nonatomic, copy, nonnull) NSString *name;
@property (nonatomic, copy, nonnull) NSURL *detailsURL;
@property (nonatomic, nonnull) NSMutableArray *abilities;
@property (nonatomic) int pokemonId;
@property (nonatomic, nonnull) UIImage *pokemonSprite;

- (instancetype _Nonnull)initWithDictionary:(nonnull NSDictionary *)dictionary;

- (void)pokemonDetailsWithDictionary:(nonnull NSDictionary *)dictionary;

@end

