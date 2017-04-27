 #include "Adafruit_MCP23017.h"
 #include "clickButtonMCP.h"

Adafruit_MCP23017 mcp;

ClickButton button = ClickButton(0, LOW);

void setup() {
  Serial.begin(9600);

  mcp.begin(); // use default address 0
  // Attach MCP to ClickButton
  button.attach(mcp);
  // Setup button timers (all in milliseconds / ms)
  // (These are default if not set, but changeable for convenience)
  button.debounceTime   = 50;   // Debounce timer in ms
  button.multiclickTime = 250;  // Time limit for multi clicks
  button.longClickTime  = 1000; // Time until long clicks register

}

void loop() {

    button.Update();

    if (button.clicks != 0) Serial.println(button.clicks);
}
