# Slot_bob

This is exam is submitted by Romeo Fernandez.  This exam has a 24 hour duration:
a.  2-3 hours setting up UI elements, assigning scripts, and creating prefabs
b.  4 hours on architecture planning and coding.  Setting up configurations, interfaces, and proper namespaces that follows mvc pattern.
c.  4 hours on clean up, testing, building apk.

Note:  No server, this is a standalone slot game.  Slot results are "NOT" predetermined, this version is follows a realtime
result principle.

Missing feature: Slot line display after each spin result.


- Unity version 2021.3.13f1
- Plugins installed
  - LeanTween
  - Zenject
- Please see payline worksheet, all of them are 20
- I was not able to draw the payout lines after each spin due to lack of time, but
  the compute results is already basing its logic on the 20 paylines.
- Installed and tested the apk, its already working ok.
- Payout results are done but I ran out of time outputting it on the right format,
  you can check it in SlotMachineController.cs=>ComputeResults()
