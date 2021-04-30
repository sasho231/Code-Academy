# CounterStrike
CounterStrike game

**Intro**
Your task is to write a program that represents parts from the famous computer game – “Counter Strike”.<br>
You will be position right in the middle of a round between the Terrorist and the Counter-Terrorists.<br>
Usually in that game the very first round of the game is called a “Pistol Round” and it very important. In that<br>
round both playing teams have money only to purchase guns. The winner of this round has enough money to buy<br>
automatic weapons in the next round, while the loser team sticks to their pistols.<br>

**Provided input**
You are provided with folder called Skeleton, which contains:
- A header file that contains the most important information for the task.
- A Basic Skeleton to guide you in the initial direction. You don’t need to strictly follow it.
You are also provided with folder called tests, which contains all of the tests that your program should pass.
- There are a total of 13 tests. 13 inputs and 13 outputs. The 3 of the tests are copy of the ones described in this
document. The other 10 are unique.

**Task description**
Your task is to provide to provide an implementation, which with the given standard input will produce the<br>
correct standard output (detailed description below).<br>
The game is played with two players from opposing teams (Player 0 and Player 1).<br>
In game you should find a header prototypes for the 2 different supported Pistol types: <br>
`
enum PistolType {
GLOCK, DESERT_EAGLE
};
`<br>
You must provide concrete implementations for the DesertEagle and Glock pistols.<br>
In the game both players takes turns shooting each other with their provided pistols for the round.<br>
First goes Player 0, then Player 1 … and so on until one of them dies (has no health left).<br>
Each player has 2 vital attributes “health” and “armor” <br>
`
typedef struct {
int health;
int armor;
} PlayerVitalData;
`<br>
The armor is a way for the player to negate some of the incoming damage that he is about to take.<br>
A player will not always have armor.<br>
Each player also acquires a Pistol at the start of the round (determined by the input).<br>
This Pistol is either a DesertEagle or a Glock.<br>
Both Pistols have the same attributes, but they do have different effects.<br>
`
typedef struct {
enum PistolType pistolType;
int damagePerRound;
int clipSize;
int currClipBullets;
int remainingAmmo;
} Pistol;
`<br>
The Pistol attributes explained:<br>
pistolType – which pistol the player is wielding<br>
damagePerRound – indicates how much damage does each bullet deal<br>
clipSize – indicates how much bullet capacity the concrete pistol clip has<br>
currClipBullets – indicates how many bullets are left in the current clip<br>
remainingAmmo – indicates how many spare bullets are left for the player to reload with.<br>
This count does not include in itself the bullets that are loaded in the current pistol clip<br>
The input to the program consists of (in that order):<br>
player 0 health, player 0 armor<br>
player 1 health, player 1 armor<br>
player 0 PistolType, player 0 pistol damage per round, player 0 clipSize, player 0 remainingAmmo<br>
player 1 PistolType, player 1 pistol damage per round, player 1 clipSize, player 1 remainingAmmo<br>

*Game rules:*
- At the start of the game – each player has a full clip of bullets ready and loaded.
- Players take turns shooting at each other (starting always from Player with ID: 0)
- If a player pistol is required to fire and current bullets in the clip reaches 0 – the player must reload its
pistol. The player loses his remaining turn and does not deal any more damage for this turn.
Common DesertEagle and Glock rules:
- If an opponent has a positive armor value and the shot fired against this opponent has a bigger value
than the armor – the armor is set to 0 and the remaining damage is subtracted from the target’s health
indicator.
- Both DesertEagle and Glock ::fire() methods should return a bool variable, which indicates whether or
not the target (enemy player) has been killed by this round bullets that were fired.
An opponent is considered killed when his health indicator drops below 0 (or is equal to 0).

*DesertEagle* Pistol specifics (see concrete examples at the ‘Examples’ section):
- If the opponent has no armor:
o Deals 100% of the pistol original damage to the opponent’s health indicator
- If the opponent has armor:
o Deals 75% of the pistol original damage to the opponent’s health indicator
o Deals 25% of the pistol original damage to the opponent’s armor indicator
- Pistol damage will always be dividable by 4 (Example: 32, 16, 4, 100)
- When reloading – no shots will be made in the same turn.

*Glock* Pistol specifics (see concrete examples at the ‘Examples’ section):
- Fires 3 bullets one after another for a single turn. A print to the console should be made for each shot
fired.
If there are less than 3 bullets remaining for this turn – fire all the remaining bullets and initiate a reload.
No bullets should be fired after the reload in the same turn.
- If the opponent has no armor:
o Deals 100% of the pistol original damage to the opponent’s health indicator
- If the opponent has armor:
o Deals 50% of the pistol original damage to the opponent’s health indicator
o Deals 50% of the pistol original damage to the opponent’s armor indicator
- Pistol damage will always be dividable by 4 (Example: 36, 8, 112, 44)

**Console output**
- After each shout fired you should print to the console the opponent player vital details following this
exact format:
"Enemy left with: N health and M armor” followed by a newline.
Where N indicates the remaining opponents health (after the shot) and
M indicates the remaining opponents armor (after the shot)
- If a player has no bullets left on each of his next turns print “No ammo left” followed by a newline.

**Restrictions**
Code should compile under the C 11 standard.
Code should not use any non-standard extensions.