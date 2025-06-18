# Daily Evaluation 18/06 - 13:15:37
You can find below how you did for each feature. 
 You should merge the pull request to keep the eval and automatically close and open the issues you have finished!
# Milestone  Tutorial
Score : 9/23 :  39%
## Detail by Feature
| Feature     | Score       | Missed tests                                                                                                                                                                                              | Stdout                            |
| :---------- | :---------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| dimension   | 4/4 :  100% |                                                                                                                                                                                                           |                                   |
| first_pixel | 0/5 :  0%   | First Pixel 64x64 : 255,0,0<br>First Pixel Red : 255,0,0<br>First Pixel Green : 0,255,0<br>First Pixel Blue : 0,0,255<br>First Pixel 1 2 3 : 1,2,3                                                        | first pixel: 255, 0, 0<br>first … |
| tenth_pixel | 5/5 :  100% |                                                                                                                                                                                                           |                                   |
| second_line | 0/5 :  0%   | Second line First Pixel 64x64 : 255,0,0<br>Second line First Pixel Red : 255,0,0<br>Second line First Pixel Green : 0,255,0<br>Second line First Pixel Blue : 0,0,255<br>Second line First Pixel 21 22 23 | <br><br><br><br>                  |
| print_pixel | 0/4 :  0%   | Print Pixel (0,0) : 0,0,0<br>Print Pixel (2,3) : 20,30,26<br>Print Pixel (3,2) : 30,20,19<br>Print Pixel (7,7) : 0,0,0                                                                                    | (2124184304, 32528)<br>(-2931970… |

# Milestone  statistiques
Score : 8/26 :  30%
## Detail by Feature
| Feature         | Score       | Missed tests                                                                          | Stdout                            |
| :-------------- | :---------- | :------------------------------------------------------------------------------------ | :-------------------------------- |
| max_pixel       | 4/4 :  100% |                                                                                       |                                   |
| min_pixel       | 4/4 :  100% |                                                                                       |                                   |
| min_component R | 0/3 :  0%   | Min Component R of black 8x8<br>Min Component R of white 8x8<br>Min Component 2 0 5   | min_component (0, 0): 0<br>min_c… |
| min_component G | 0/3 :  0%   | Min Component G of black 8x8<br>Min Component G of white 8x8<br>Min Component 2 0 5   | min_component (0, 0): 0<br>min_c… |
| min_component B | 0/3 :  0%   | Min Component B of black 8x8<br>Min Component B of white 8x8<br>Min Component 2 0 5   | min_component (0, 0): 0<br>min_c… |
| max_component R | 0/3 :  0%   | Max Component R of black 8x8<br>Max Component R of white 8x8<br>Max Component 2 0 255 | <br><br>                          |
| max_component G | 0/3 :  0%   | Max Component G of black 8x8<br>Max Component G of white 8x8<br>Max Component 2 0 255 | <br><br>                          |
| max_component B | 0/3 :  0%   | Max Component B of black 8x8<br>Max Component B of white 8x8<br>Max Component 2 0 255 | <br><br>                          |

# Milestone  colors
Score : 13.68/35 :  39%
## Detail by Feature
| Feature              | Score         | Missed tests                                                                                                                                         | Stdout           |
| :------------------- | :------------ | :--------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------- |
| color_red            | 5/5 :  100%   |                                                                                                                                                      |                  |
| color_blue           | 4.34/5 :  86% |                                                                                                                                                      |                  |
| color_green          | 4.34/5 :  86% |                                                                                                                                                      |                  |
| color_gray           | 0/5 :  0%     | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY | <br><br><br><br> |
| color_invert         | 0/5 :  0%     | Invert red image<br>Invert blue image<br>Invert green Image<br>Invert white Image<br>Invert black Image                                              | <br><br><br><br> |
| color_gray_luminance | 0/5 :  0%     | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY | <br><br><br><br> |
| color_desaturate     | 0/5 :  0%     | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY | <br><br><br><br> |

# Milestone  transform
Score : 0/15 :  0%
## Detail by Feature
| Feature           | Score     | Missed tests                                                   | Stdout   |
| :---------------- | :-------- | :------------------------------------------------------------- | :------- |
| rotate_cw         | 0/3 :  0% | rotate square image<br>rotate large image<br>rotate high image | <br><br> |
| rotate_acw        | 0/3 :  0% | rotate square image<br>rotate large image<br>rotate high image | <br><br> |
| mirror_horizontal | 0/3 :  0% | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_vertical   | 0/3 :  0% | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_total      | 0/3 :  0% | mirror square image<br>mirror large image<br>mirror high image | <br><br> |

# Milestone  resize
Score : 0/60 :  0%
## Detail by Feature
| Feature        | Score      | Missed tests                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Stdout                            |
| :------------- | :--------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| scale_nearest  | 0/20 :  0% | scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3                                                                                 | <br><br><br><br><br><br><br><br>… |
| scale_bilinear | 0/20 :  0% | scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12                               | <br><br><br><br><br><br><br><br>… |
| scale_crop     | 0/20 :  0% | scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10 | <br><br><br><br><br><br><br><br>… |

