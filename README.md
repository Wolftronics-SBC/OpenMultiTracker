# OpenMultiTracker

##### It uses computer vision methods to detect players on the hockey field.

![](https://user-images.githubusercontent.com/11778655/35180706-1d1c1d9c-fdc6-11e7-9b0d-3a6999b99025.png)

```
Requirements:
- C++11 compiler;
- OpenCV3 built with ffmpeg support.
```

```
How to use:
- Video should have "hockey_game.avi" name, you can change it in code;
- At the first start, you have to choose region of interest. It will be saved as "region.png" and only
white area will be applied to the video.
```

```
Commands:
    r - change region of interest
    b - show background subtraction process
    c - show contoured image
    o - show original video
    s - show system information
    p - pause video
    ESC or SPACE - terminate video
```