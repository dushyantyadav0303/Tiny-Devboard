# Getting Started #3

**Author:** dushyant.yadav0303
**Date:** Jun 7, 2026, 6:27 PM
**Time Logged:** dushyant.yadav0303

---

Today I am Working on the **ESP-12S Setup**

- First I Read the Docs of espressif AT Firmware in Depth.

- Then I Start testing it with my Esp32 dev board Right now I don't have Esp12-s But it is almost similar For both. (It is Really necessary to test the thing Before Shipping cause Every time The things are not going to works mentions in Docs)

![image](https://cdn.hackclub.com/019ea45a-5570-78ea-bc5e-84588db9b303/WhatsApp%20Image%202026-06-08%20at%204.40.03%20AM.jpeg)

- I start working on Making the guide.

- Again I record Video Clips and Attached with the guide which Makes it's very easy to understand.

## Here is Getting Started:

![image](https://cdn.hackclub.com/019ea465-f6c1-7889-8152-4cb0dc4eedf2/20260607-2322-28.9270938.gif)

![image](https://cdn.hackclub.com/019ea354-98f8-7473-a643-2e3853fe0916/image.png)


---

# Getting Started #2

**Author:** dushyant.yadav0303
**Date:** Jun 6, 2026, 6:02 PM
**Time Logged:** dushyant.yadav0303

---

Today I am Working on the **ATSAMD21 Setup Guide**

- First I Done a research about Flashing the UF2 bootloader

- then I start gathering All the source link For downloading and required software. Which overall help the User Especially Beginner To download all the files

- I write up all the Guide

- Then I record the Clips and And attach with Steps. Which is Really help For Beginner.

# Here is Getting Started:

![image](https://cdn.hackclub.com/019e9e10-d66b-7fee-acac-edf22d687cd8/20260606-1752-09.7994209.gif)


---

# Getting Started  #1

**Author:** dushyant.yadav0303
**Date:** Jun 5, 2026, 6:11 PM
**Time Logged:** dushyant.yadav0303

---

I want to Make as much has possible **beginner friendly**. That's why I start preparing Startup Guide or Say Getting started.
And for make it very easy to understand I Making Render Animation Clips.

## Render

Even it is simple but the Laptop 3d model I use have Too much detailing. which **Crash my PC** multiple time After changing Settings I finally get the output.

![image](https://cdn.hackclub.com/019e9987-fbcc-79c0-a7ea-b667539e08bf/20260605-2044-18.5247168.gif)

# Here is Getting Started:

![image](https://cdn.hackclub.com/019e997b-da92-7d10-b1bb-bc201acc4425/image.png)

![image](https://cdn.hackclub.com/019e997b-609b-72c5-9e7c-98310625b1b2/20260605-2026-46.8845707.gif)


---

# Adding Programming Pin

**Author:** dushyant.yadav0303
**Date:** Jun 4, 2026, 5:50 PM
**Time Logged:** dushyant.yadav0303

---

While Making Set up guide. I found out **Atsamd21e18A-AU** Not support **UART Serial communication ** To flash the Firmware via Default Bootloader , But we To flash UL2 Bootloader So I added SWD Pin For For flashing the  Firmware via **Serial Wire Debug Protocol**.

## Here is the updated systematic

(Also the Red marks determined that things updated)

![image](https://cdn.hackclub.com/019e93b5-3619-7dc7-ab26-f4dd4f0930c0/image.png)

## Where is the updated PCB

Proof of Time **POT**: It take little bit longer than usual cause this project I already Uploaded on the oshwlab as Told in previous log So to fix it there too takes a bit & I also learn The difference between them .

![image](https://cdn.hackclub.com/019e987c-0e53-7b17-8d93-308a49111f11/image.png)


---

# Firmware

**Author:** dushyant.yadav0303
**Date:** Jun 3, 2026, 5:48 PM
**Time Logged:** dushyant.yadav0303

---

In this DevBoard we have 2 MCU

- Esp-12s: As a Wifi Module

- Atsamd21e18A-AU: Main processing unit

## For Esp-12s

By default There is a **AT firmware** install in esp-12s Which help Use it as Wifi module via Serial communication protocol.

But in Rare cases It Get erase For that I am Prepare a guide to burn the Firmware into Esp-12s

## For Atsamd21e18A-AU

We have to flash UF2 bootloader help to Directly Connect to Pc and Upload the Code.

And for access Wifi we have to use AT command

Example to connect with Wifi

AT+CWMODE=1
AT+CWJAP="WiFiName","Password"

Source - espressif

![image](https://cdn.hackclub.com/019e8e99-5a98-7fb8-8d72-9201ceb58047/image.png)


---

# Completed Render animation (banner)

**Author:** dushyant.yadav0303
**Date:** Jun 2, 2026, 6:30 PM
**Time Logged:** dushyant.yadav0303

---

Finally after spending two days To learn & Make this Render but the result are too crazy I don't believe I can made a Company like Render at my home, It is it is too awesome. Just check it out!!

# Here I am presentingtiny DevBoard

![image](https://cdn.hackclub.com/019e89c5-f587-7897-a7e8-93cca7fa4de1/450016-0116.gif)

## Setup

![image](https://cdn.hackclub.com/019e8a4d-9dd7-7503-a17c-cd9a8d0fe0d9/Recording%202026-06-03%20031441.gif)


---

# Making Render animation

**Author:** dushyant.yadav0303
**Date:** Jun 1, 2026, 6:13 PM
**Time Logged:** dushyant.yadav0303

---

Right now it is under Building And I don't want to disclose it right now It really very crazy And I hope you like it When it Public

![image](https://cdn.hackclub.com/019e8463-fa12-718e-ba1d-78219d453c35/image.png)


---

# CAD

**Author:** dushyant.yadav0303
**Date:** May 31, 2026, 12:08 PM
**Time Logged:** dushyant.yadav0303

---

Today I am Start Designing the case for the Devboard But this time I want it Have a snapfit feature, Instead of Screwing it.

### Here is the main thing which take a lot Or We say a ton of time

![image](https://cdn.hackclub.com/019e7dd7-1ee3-746d-85e8-7c7091e79e9d/Screenshot%202026-05-31%20170549.png)

### I add 6 Snap fit Lock

![image](https://cdn.hackclub.com/019e7dee-42fd-7ddc-8f39-49c3b2671185/image.png)

### Here is Complete look

![image](https://cdn.hackclub.com/019e7def-02b8-7313-aa43-8f4b4fd60d4f/image.png)

### Then i add color

![image](https://cdn.hackclub.com/019e7def-6e63-71cf-bcc6-726b6b58a629/image.png)


---

# Posted On oshwlab

**Author:** dushyant.yadav0303
**Date:** May 30, 2026, 3:22 PM
**Time Logged:** dushyant.yadav0303

---

After asking On #macondo-help For "Does i use oshwlab for Demo link" and they Allow me then I post all the file and detail over there

# LINK

![image](https://cdn.hackclub.com/019e7ebb-3691-72b0-aed8-93b04c96d5b3/image.png)


---

# Render

**Author:** dushyant.yadav0303
**Date:** May 29, 2026, 4:52 PM
**Time Logged:** dushyant.yadav0303

---

After all this completed I prepared the Render Of the Tiny Dev-board PCB In blender. I also add the Green Crafting Mat At Bottom To give DIY Vibe,
Also added Light in all the led You look more professional.

![image](https://cdn.hackclub.com/019e9d94-b583-7b67-a21d-aa6813a41b2f/0000-0055.gif)

## Here is the setup

![image](https://cdn.hackclub.com/019e74a3-5dc0-71b1-943a-28de3f41c2cc/image%20(5).png)

## Render

![image](https://cdn.hackclub.com/019e74a4-7976-7219-beb2-d1764eacb648/Untitled6.png)

![image](https://cdn.hackclub.com/019e74a4-8e90-74a6-a737-95bf43032ee7/Untitled5.png)


---

# Recover your Project

**Author:** dushyant.yadav0303
**Date:** May 28, 2026, 6:24 AM
**Time Logged:** dushyant.yadav0303

---

In between of My Work By mistake I suddenly closed the Tab And this is the EasyEDA online version Running on browser.
And really scare me cause I not Save my Project, Then I start exploring EasyEDA Then I find this option:

# Files --> Cache Recovery --> Select Project --> Select TimeStamp --> Click on recovery

<3

![image](https://cdn.hackclub.com/019e6d3c-5408-7a44-a1cd-d144166a3f6c/image.png)

![image](https://cdn.hackclub.com/019e6d3c-62a2-7e81-b52d-e003cca1c697/image.png)

![image](https://cdn.hackclub.com/019e6d3c-6c8a-79d4-a7ac-e2fa0406b253/image.png)


---

# Silkscreen

**Author:** dushyant.yadav0303
**Date:** May 28, 2026, 6:09 AM
**Time Logged:** dushyant.yadav0303

---

I properly arrange the value and reff* So it is Easy to identify then And Look Clean.


Then I add the image of dogesh. Dogesh is nothing, just Dog it is going viral on internet With the name Dogesh.

To make it Multi color I split it into 3 Part And this is my first time to doing Multi Layer Image ( And it is really too confusing to choose which Part of which layer )

![image](https://cdn.hackclub.com/019e6d2f-da0c-74e8-bad5-7f119de063e2/image_2026-05-28_113511863.png)

![image](https://cdn.hackclub.com/019e6d30-02cf-7bca-934e-42b7b8240ab8/image.png)

![image](https://cdn.hackclub.com/019e6d2d-c4c5-75c6-bbde-085c928be0a3/Untitled%20-%20May%2027,%202026%20at%2000.25.49.png)

![image](https://cdn.hackclub.com/019e6d31-963e-70ad-96c6-1fd2ed46fd17/image.png)

## Then here is the final result

![image](https://cdn.hackclub.com/019e6d32-0465-7172-b2b0-6c96a3f4f000/image.png)


---

# Optimizing space & Changing Footprint

**Author:** dushyant.yadav0303
**Date:** May 26, 2026, 7:16 PM
**Time Logged:** dushyant.yadav0303

---

After routing the PCB found out there is a lot of space Remain in the PCB Which can be used to optimize a Space in PCB. After rearranging some components and routing the PCB again. I make it more smaller.

### Here you see

![image](https://cdn.hackclub.com/019e65b6-6768-7aeb-9bf4-77ccb63cc009/Screenshot%202026-05-24%20170503.png)

**Also**
Previously I just put Add Raw pads Which I short with a help of tweezer while flashing the Firmware to put it Boot mode then I plan to Real Tactile switch cause it Not taking Huge space Add easy to use, After rearrange Some more component I finally somehow fit it in PCB Without changing there Size.

### Here you See

![image](https://cdn.hackclub.com/019e65cb-a613-7679-8227-b5a318b0eede/Screenshot%202026-05-27%20010737.png)

![image](https://cdn.hackclub.com/019e65cb-4cc1-722d-8179-4b0006da51ce/image.png)


---

# Routing the PCB

**Author:** dushyant.yadav0303
**Date:** May 26, 2026, 10:07 AM
**Time Logged:** dushyant.yadav0303

---

Now finally Let's route this PCB Which is the My Favourite part of PCB Designing,
For Copper pour the Net for top is Gnd and For Bottom Net is 3v.

### Here is the result of routing the PCB

![image](https://cdn.hackclub.com/019e63bb-5d74-739b-a0e2-c4703289e609/Routing%201.png)

![image](https://cdn.hackclub.com/019e63bb-c1c0-70b7-aae0-892c77bd6e26/Routing.png)


---

# Layout the PCB

**Author:** dushyant.yadav0303
**Date:** May 25, 2026, 4:46 PM
**Time Logged:** dushyant.yadav0303

---

# Today I start designing the PCB

## Let's first layout The PCB. While doing it I Keep this in mind -

- It is important to arrange the capacitors Efficiently.

- Make a Compact as possible

- The component not interfere to Other

### Here is the final result of Layout

![image](https://cdn.hackclub.com/019e6007-8d2c-79bf-969c-f30fd9957bd8/Screenshot%202026-05-24%20160003.png)


---

# Streamline Systematic

**Author:** dushyant.yadav0303
**Date:** May 24, 2026, 8:45 AM
**Time Logged:** dushyant.yadav0303

---

Yesterday, i complete the Rough systematic, Today i am Adding Comment and Symbol So it is easy to understand.

### Here is final Systematic

![image](https://cdn.hackclub.com/019e8a01-a8d6-7eba-91c3-c094bfcd27cc/SCH_Schematic1_1-P1_2026-06-03.png)


---

# Prepare systematic

**Author:** dushyant.yadav0303
**Date:** May 23, 2026, 6:05 PM
**Time Logged:** dushyant.yadav0303

---

Finally conducting all this research & reading the data sheets I finally Made the systematic Of the Compact-Devboard Or you say **rough systematic**. Right now it is difficult to understand for a beginner. Overall Moral of the story- **Don't stuck with Esp32 Explore other boards too** It is Little bit different to Put Esp12E in Boot-MODE

### Overall Here is Rougf systematic

![image](https://cdn.hackclub.com/019e89f5-70d6-7d63-bd0d-fed119b81a42/image.png)

## Source

ESP-12S-datasheets

Atsamd21e18A-AU datasheet


---

# Research

**Author:** dushyant.yadav0303
**Date:** May 22, 2026, 1:20 PM
**Time Logged:** dushyant.yadav0303

---

After Conducting a Research,

My requirement Is the compact Size Which we can carry and move around Anywhere.

I Plan to use ATSAMD21E18 which help In high speed communication. As the Have pros It also have corns It don't come with Wi-fi module To fulfill that gap, I plan to Integrate Wifi with the help of Esp 12S. Overall Both together make a good combo.

### here is Flow chart

USB --> ATSAMD21E18 --> Esp 12s --> Wifi

Both processor with the Serial communication protocol,

Sorry, I created a little bit of image But it is not important believe me.

![image](https://cdn.hackclub.com/019e4fd7-a23f-7a13-a779-bf9ffe1afdcf/image.png)
