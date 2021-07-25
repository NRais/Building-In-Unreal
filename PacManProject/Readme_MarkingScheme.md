# Marking Scheme

*Find below a list of features matching each criteria.*

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/blueprints.jpg" width="800" height="250" />

----

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/pacman.jpg" width="50" height="50" /> <img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/pacman.jpg" width="50" height="50" /> <img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/pacman.jpg" width="50" height="50" /> **Control a character on screen**
  - Simple 3rd person player movement
  - Arrow key functionality and jumping
  
<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/control_system.jpg" width="150" height="50" /> **Control system**
  - Player choices (direction, powerups)
  - Level design (maze)
  - Level progression (4 intro levels, 4 advanced)

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/c%2B%2B_class.jpg" width="150" height="50" /> **Create at least one blueprint node in C++** 
  - Floating Box actor class
  - Animated box that blocks doorways and moves occassionally

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/cherries.jpg" width="150" height="50" /> **Have a character interact with objects in the world** 
  - Pickups (dots, power, speed, cherries)
  - Enemies (4 types of enemies which respond to player actions)
  - Environment (teleporter/boxes)

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/animations.jpg" width="150" height="50" /> **Animations**
  - Menu fade in animations
  - Monster animations

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/score.jpg" width="150" height="50" /> **Change score on screen** 
  - Score tracker (top left)
  - Life tracker (top right)

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/assets.jpg" width="150" height="50" /> **Manage assets and how they are created and removed** 
  - Asset construction (monsters/pickups)
  - Asset destruction (removing meshes on collision, clearing objects that are picked up)
  - Enum design (pickups and terrain is built around enums for easy construction)

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/npc.jpg" width="150" height="50" /> **Move NPCs around**
  - AI design
    - Chase player
    - Run from player
    - Respawn pause
  - AI customization (speed, chase delay, etc.)

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/restart.jpg" width="150" height="50" /> **Restart a level**  
  - Upon defeat you may restart as long as you have lives
  - Otherwise the game begins again at the start
  - 3 widgets used to handle end-game conditions

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/sound.jpg" width="150" height="50" /> **Play sounds**
  - Pickup/Monster/Action sound effects
  - Random background music
  - Sound mixers used to control effects/music volume

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/settings.jpg" width="150" height="50" /> **Create a settings menu with** 
  - Two sliders for volume
  - A toggle interaction for changing screen resolution

<img src="https://github.com/NRais/Building-In-Unreal/blob/main/PacManProject/Readme/victory.jpg" width="150" height="50" /> **Show a final screen**
  - Defeat screen and Victory screen
  - Life and Score stats transfered via GameInstance
