ClickButtonMCP
===========
based on the ClickButton Code for Particle Photon https://github.com/pkourany/clickButton
adjusted for the use of an MCP23017

A library that decodes multiple clicks on one button. Also copes with
long clicks and click-and-hold.

Usage:
-------

```
ClickButton buttonObject(pin, [LOW/HIGH]);

Adafruit_MCP23017 mcp;

setup(){
    mcp.begin();
    buttonObject.attach(mcp);
}

```

where LOW/HIGH denotes active LOW or HIGH button (default is LOW)
CLICKBTN_PULLUP is only possible with active low buttons.

Returned click counts:
----------------------

   A positive number denotes the number of (short) clicks after a released button
   A negative number denotes the number of "long" clicks
