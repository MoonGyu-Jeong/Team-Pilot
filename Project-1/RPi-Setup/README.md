# Raspberry PI Setup

## Contents  
- [Step 1: Flash Operating System](#step-1-flash-operating-system) 
- [Step 2: Setup for the first boot](#step-2-setup-for-the-first-boot)  
- [Step 3: Connecting to the Pi](#step-3-connecting-to-the-pi)  
- [Step 4: Update and Upgrade](#step-4-update-and-upgrade) 
- [Step 5: Raspi-config](#step-5-raspi-config)  
- [Step 6: Install Dependencies](#step-6-install-dependencies)  
- [Step 7: Install OpenCV Dependencies](#step-7-install-opencv-dependencies)  
- [Step 8: Setup Virtual Env](#step-8-setup-virtual-env)  
- [Step 9: Install Donkeycar Python Code](#step-9-install-donkeycar-python-code)  
- [Step 10: Install OpenCV](#step-10-install-opencv)
- [APPENDIX: Add GUI to Raspberry Pi OS Lite](#appendix-add-gui-to-raspberry-pi-os-lite)

---

<br/>

## Reference
- [Donkey Car Wiki](https://docs.donkeycar.com/guide/robot_sbc/setup_raspberry_pi/)
- [Add GUI to Raspberry Pi OS Lite](https://www.paulligocki.com/add-gui-to-raspberry-pi-os-lite/)

---

<br/>


## Step 1: Flash Operating System

<img src="https://user-images.githubusercontent.com/111988634/189864911-a9a0dc23-2457-4d28-a555-85941f48fcb4.png"  width="300" height="200"/> 

<img src="https://user-images.githubusercontent.com/111988634/189864923-650e5f07-4be6-4020-8fbb-0c8de57a7bcb.png"  width="300" height="340"/> 

1. Download [Raspian Legacy](https://downloads.raspberrypi.org/raspios_oldstable_lite_armhf/images/raspios_oldstable_lite_armhf-2021-12-02/2021-12-02-raspios-buster-armhf-lite.zip) ( Buster ) 

> Raspbian Latest ( bullseye ) is not compatible with PiRacer Pro wiki
> 
2. Download [Raspberry Pi Imager](https://www.raspberrypi.com/software/)
3. Connect you SD card in your computer ( labtop )
4. Change Operating System to `Buster` above and Storage
5. Change advanced options to connect WIFI
6. Click Write to Download OS

<br/>

## Step 2: Setup for the first boot

1. Start a text editor ( VS code )
    
    ```bash
    cd /media/seame-three/boot # SD card boot
    touch ssh # create ssh file to enable SSH on boot
    code wpa_supplicant.conf # create wpa_supplicant.conf file
    ```

<br/>

2. Paste and edit to match your wifi
    
    ```bash
    ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
    update_config=1
    country=GE
    network={
        ssid="your-network-name"
        psk="your-password"
        scan_ssid=1
    }
    ```

<br/>
    
3. Eject your SD card and put it in the Pi and power on

<br/>

## Step 3: Connecting to the Pi

1. Find my car's IP

    <img src="https://user-images.githubusercontent.com/111988634/189864977-2a45180d-bc06-468b-bed4-a2a6049c607c.png"  width="300" height="200"/> 
    
    ```bash
    pint <your hostname>.local
    ```
    
<br/>

2. Connet to Pi
    
    ```bash
    ssh <username>@<IP-address>
    ```
    
    - Username: `moon`
    - Password: `seame2022`
    - Hostname: `your pi IP address`

<br/>

## Step 4: Update and Upgrade

```bash
sudo apt-get update --allow-releaseinfo-change
sudo apt-get upgrade
```
<br/>

## Step 5: Raspi-config
<img src="https://user-images.githubusercontent.com/111988634/189865327-d4f30587-637b-4862-ad78-e1b1353759af.png"  width="300" height="200"/> 

```bash
sudo raspi-config
```

- change default password for pi
- change hostname
- enable `Interfacing Options` - `I2C`
- enable `Interfacing Options` - `Camera`
- select `Advanced Options` - `Expand Filesystem` so you can use your whole sd-card storage
- Choose `<Finish>` and Reboot

<br/>

## Step 6: Install Dependencies

```bash
sudo apt-get install build-essential python3 python3-dev python3-pip python3-virtualenv python3-numpy python3-picamera python3-pandas python3-rpi.gpio i2c-tools avahi-utils joystick libopenjp2-7-dev libtiff5-dev gfortran libatlas-base-dev libopenblas-dev libhdf5-serial-dev libgeos-dev git ntp
```
<br/>

## Step 7: Install OpenCV Dependencies

```bash
sudo apt-get install libilmbase-dev libopenexr-dev libgstreamer1.0-dev libjasper-dev libwebp-dev libatlas-base-dev libavcodec-dev libavformat-dev libswscale-dev libqtgui4 libqt4-test
```

<br/>

## Step 8: Setup Virtual Env

```bash
python3 -m virtualenv -p python3 env --system-site-packages
echo "source ~/env/bin/activate" >> ~/.bashrc
source ~/.bashrc
```
<br/>

## Step 9: Install Donkeycar Python Code

1. Create Directory
    
    ```bash
    cd ~
    mkdir projects
    cd projects
    ```
    
<br/>

2. Get the latest donkeycar from Github
    
    ```bash
    git clone https://github.com/autorope/donkeycar
    cd donkeycar
    git checkout main
    pip install -e .[pi]
    pip install https://github.com/lhelontra/tensorflow-on-arm/releases/download/v2.2.0/tensorflow-2.2.0-cp37-none-linux_armv7l.whl
    ```
    
<br/>

3. Validate tensorflow install
    
    ```bash
    python -c "import tensorflow; print(tensorflow.__version__)"
    ```
    
<br/>

## Step 10: Install OpenCV

1. Install OpenCV
    
    ```bash
    sudo apt install python3-opencv
    # if failed
    # pip install opencv-python
    ```

<br/>

2. Test to see if import succeeds
    
    ```bash
    python -c "import cv2"
    # if no errors, you have OpenCV installed
    ```

<br/>

## APPENDIX: Add GUI to Raspberry Pi OS Lite
If you download Raspberry Pi OS Lite, you can’t display RPi on LCD. If you want to show qt application or something graphics in RPi, you should add GUI.

```bash
sudo apt install xserver-xorg -y
sudo apt install raspberrypi-ui-mods -y
sudo apt install mate-desktop-environment-core
sudo apt install kde-plasma-desktop -y
sudo apt install lxde-core lxappearance -y
sudo apt install xfce4 xfce4-terminal -y
sudo apt install lightdm -y
sudo reboot
```