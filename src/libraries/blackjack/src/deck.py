# Copyright 2019 Stewart Henderson. All rights reserved.

import random


class Deck:
    def __init__(self):
        self.cards = {
            "hearts": [
                "2",
                "3",
                "4",
                "5",
                "6",
                "7",
                "8",
                "9",
                "10",
                "J",
                "Q",
                "K",
                "A",
            ],
            "spades": [
                "2",
                "3",
                "4",
                "5",
                "6",
                "7",
                "8",
                "9",
                "10",
                "J",
                "Q",
                "K",
                "A",
            ],
            "diamonds": [
                "2",
                "3",
                "4",
                "5",
                "6",
                "7",
                "8",
                "9",
                "10",
                "J",
                "Q",
                "K",
                "A",
            ],
            "clubs": ["2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"],
        }

    # This method will take a random card without replacement
    # from a deck of cards and provide it to the caller.
    def take_card(self):
        suite_index = random.randint(0, 3)
        suite = self.cards[suite_index]
        card_index = random.randint(0, len(suite))
        card = self.cards[card_index]
        self.cards.remove(card)
        return card
