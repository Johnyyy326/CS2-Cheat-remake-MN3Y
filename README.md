# MN3Y — CS2 Cheat

A community remake project by Dev.1Johnny1, built around the MN3Y interface and its visual style. This is not for multiplayer 

## Disclaimer & Intended Use

MN3Y is intended strictly for private use, testing, and educational purposes. It is not designed or intended for use in public multiplayer matches or on official servers.

Although some features may technically work in online environments, this project is not intended to be used there. Please use it only in private environments, such as local testing sessions or private servers where all participants have agreed to its use.

Counter-Strike 2 is a trademark of Valve Corporation. This project is an independent community remake and is not affiliated with, endorsed by, or sponsored by Valve Corporation.

Use at your own risk. The developers are not responsible for account penalties, bans, or other consequences resulting from the use of this project.

## About

**MN3Y** is a remake project by Dev.1Johnny1, inspired by an existing CS2 cheat concept. The goal was to recreate and develop the project with our own approach, focusing on the interface, customization, and overall experience.

*Features may vary depending on the current build.*

## Project Status

🚧 **Development / Remake Project**

This project is a collaborative remake and may receive changes, improvements, or additional features over time.

## Features

| Category | Details |
|----------|---------|
| **Aimbot** | Per-weapon profiles, FOV / smoothing / RCS, multipoint hitboxes, visibility check, hitchance, target-switch delays, reaction & first-shot humanization, sticky hitbox |
| **Triggerbot** | Per-weapon config, seed-based hitchance, silent aim, autowall |
| **Autofire** | Auto-fires on valid target with hitchance or nospread seed |
| **ESP** | Box, health, name, skeleton, flags — world-to-screen via copied view matrix |
| **Chams** | Flat, illuminated, glow, ghost, latex; XQZ, arm & viewmodel support |
| **Glow** | Per-player + world item glow via DrawGlow property manipulation |
| **Visuals** | FOV changer, viewmodel offset, thirdperson, antiflash, scope / smoke / decal / particle removal |
| **World** | Night mode, skybox swap, light & map tint, weather (rain / snow / ash) |
| **Skinchanger** | Knife, gloves, weapon skins (70 indexed slots), agent models, killfeed spoofing, custom knife model |
| **Movement** | BHop, autostrafe (mouse + silent), jumpbug |
| **NadePred** | Grenade throw preview with in-air path and landing radius |
| **Config** | JSON-based config with per-weapon profile system |
| **Menu** | ImGui DX11, tabbed layout |


## Credits

Created and remade by **Dev.1Johnny1** — [GitHub](https://github.com/Johnyyy326).

Original inspiration and third-party components, if applicable, should be credited to their respective authors.

## Inject

Use any manual-map injector. The DLL detects manual-map injection and sets up SEH, static init and the security cookie itself.

Known to work with:
- Process Hacker Native Injector
- Extreme Injector (manual map mode)

- 
<img width="1314" height="694" alt="image" src="https://github.com/user-attachments/assets/084c1bdc-81c1-488e-9191-fdf4d0a27de1" />
