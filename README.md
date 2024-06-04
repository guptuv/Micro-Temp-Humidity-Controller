# Micro-Temp-Humidity-Controller
<h4>A device that measures the temperature and humidity in the air around it. It then displays the results on a small screen called an OLED display of 0.96 inch(128X64 pixels) for 2 seconds. It is programmed in an Arduino and needs only a power supply after the program is stored in the flash memory I have also made a programmable LED green and red bulb that turns on simultaneously after all calculations from sensors (DHT-11) are made and stays on for 2s and turns off after displaying

The device uses 17626 bytes (54%) of program storage space of 32256 bytes. The OLED display takes up 5 volts, the temperature sensor uses 3.3 volts, and the LED bulb controlled by program uses 5 volts. However, the voltage to the LED bulb is dropped by a 220+5% resistor. This is done to protect the LED bulb from too much voltage. Time for re-evaluating with the help of sensor is of 3.12 seconds but it was provided intentionally for display to be read by us.
The device is easy to use. Just place it in a location where you want to monitor the temperature and humidity. It will automatically measure the temperature and humidity and
display the results on the Oled-screen

The device is also very energy efficient. It only uses a small amount of power to operate. This means that we can leave it running all the time without having to worry about it using up too much electricity.
</h4>
<br>
<br>
<br>
<hr style="border: 1px dashed black;">
<hr style="border: 1px dashed black;">

<h2>Setup</h2>  
![Setup](https://github.com/guptuv/Micro-Temp-Humidity-Controller/assets/116263507/7b1e9860-e388-47c7-a0f5-b203c0cd8788)
<hr style="border: 1px dashed black;">

<h2>The readings are displayed for a duration of 2 seconds to ensure readability by humans.</h2>
![delay 3 12 seconds](https://github.com/guptuv/Micro-Temp-Humidity-Controller/assets/116263507/b0323e61-1169-48e9-9e04-8b92846b86df)
<hr style="border: 1px dashed black;">

<h2>Under normal Room Temperature</h2>
![normally](https://github.com/guptuv/Micro-Temp-Humidity-Controller/assets/116263507/c9d144bc-9802-4f60-8843-f5c7af268355)
<hr style="border: 1px dashed black;">

<h2>The humidity has increased when a water soaked paper has been placed near to DHT11 sensor</h2>
![near water soaked paper](https://github.com/guptuv/Micro-Temp-Humidity-Controller/assets/116263507/0116af92-c9e6-4511-9bea-9a56e29d6f1f)

<div class="centered-box">
  This is some text with XXX in the middle.
  <span class="xxx">XXX</span>
</div>

<style>
  .centered-box {
    text-align: center;
    border: 1px solid #ccc;
    padding: 5px;
    margin: 10px auto;
  }
  .xxx {
    display: inline-block;
    background-color: #eee; /* Optional background color */
    padding: 2px;
  }
</style>


