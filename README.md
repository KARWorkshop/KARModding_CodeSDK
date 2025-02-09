# KARModding_CodeSDK
The code toolchain and SDK for making special codes for KAR

## What is this?

This is a SDK for making gecko codes for Kirby Air Ride. It includes a few common macros, a toolchain for compiling, and symbol maps of every region. The maps will be updated with real names as they're added to the decomps.

## SDK

SDK includes a mix of ASM and C functions/macros we can use in our codes.

Toolchain contains the tools for writing, compiling, and packaging codes.

Symbol Maps are includes that define every function found in the JP, NA, and PAL decomps of KAR.

[KAR DTK Decomp]() this is the one Jas manages and sources the symbols from.
[KAR Decomp]() this is the OG NA one ran by Wow Jinxy, they are amazing and have some of it already in C.

## Why make codes? && Example Projects

Why make codes? Sometimes you need to do something that involves changing how the game operates. In that case we create Gecko Codes, which patch into the RAM. If you just want a custom machine or skin, no gecko codes are required. You can learn how to do that [here]().

To see a few examples of how to set up a Gecko Code project. You can see the [Example Projects](). These are very basic codes that walk you through each part. Including comments on what each bit does. And the final ASM has a breakdown.

## Resources

- [Playlist of Gecko Codes in general, it's short](https://www.youtube.com/watch?v=IOyQhK2OCs0&list=PL6GfYYW69Pa2L8ZuT5lGrJoC8wOWvbIQv&index=1)
- [Slippi's Fizzi goes over codes](https://www.youtube.com/watch?v=NOq49h0tkBI)
- [Slippi ASM Repo](https://github.com/project-slippi/slippi-ssbm-asm/tree/master)
- [KAR's ASM Repo](https://github.com/KARWorkshop/KAR-Gecko-ASM/tree/Rebirth)

- [Slippi Stack Manipulation Doc](https://docs.google.com/document/d/1QJOQzy933fxpfzIJlq6xopcviZ5tALKQvi_OOqpjehE/edit?tab=t.0)

- [Gecko Code Code Types](https://wiigeckocodes.github.io/codetypedocumentation.html)
- [Gecko Codes for Noobs](https://smashboards.com/threads/guide-to-ar-and-gecko-code-writing-for-complete-noobs.336650/)