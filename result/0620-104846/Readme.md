# Daily Evaluation 20/06 - 10:48:46
You can find below how you did for each feature. 
 You should merge the pull request to keep the eval and automatically close and open the issues you have finished!
# Milestone  Tutorial
Score : 14/23 :  60%
## Detail by Feature
| Feature     | Score       | Missed tests                                                                                                                                                                                              | Stdout                            |
| :---------- | :---------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| dimension   | 4/4 :  100% |                                                                                                                                                                                                           |                                   |
| first_pixel | 5/5 :  100% |                                                                                                                                                                                                           |                                   |
| tenth_pixel | 5/5 :  100% |                                                                                                                                                                                                           |                                   |
| second_line | 0/5 :  0%   | Second line First Pixel 64x64 : 255,0,0<br>Second line First Pixel Red : 255,0,0<br>Second line First Pixel Green : 0,255,0<br>Second line First Pixel Blue : 0,0,255<br>Second line First Pixel 21 22 23 | <br><br><br><br>                  |
| print_pixel | 0/4 :  0%   | Print Pixel (0,0) : 0,0,0<br>Print Pixel (2,3) : 20,30,26<br>Print Pixel (3,2) : 30,20,19<br>Print Pixel (7,7) : 0,0,0                                                                                    | (-1806632208, 32515)<br>(-835183… |

# Milestone  statistiques
Score : 17/26 :  65%
## Detail by Feature
| Feature         | Score       | Missed tests                                                                        | Stdout                            |
| :-------------- | :---------- | :---------------------------------------------------------------------------------- | :-------------------------------- |
| max_pixel       | 4/4 :  100% |                                                                                     |                                   |
| min_pixel       | 4/4 :  100% |                                                                                     |                                   |
| min_component R | 0/3 :  0%   | Min Component R of black 8x8<br>Min Component R of white 8x8<br>Min Component 2 0 5 | min_component (0, 0): 0<br>min_c… |
| min_component G | 0/3 :  0%   | Min Component G of black 8x8<br>Min Component G of white 8x8<br>Min Component 2 0 5 | min_component (0, 0): 0<br>min_c… |
| min_component B | 0/3 :  0%   | Min Component B of black 8x8<br>Min Component B of white 8x8<br>Min Component 2 0 5 | min_component (0, 0): 0<br>min_c… |
| max_component R | 3/3 :  100% |                                                                                     |                                   |
| max_component G | 3/3 :  100% |                                                                                     |                                   |
| max_component B | 3/3 :  100% |                                                                                     |                                   |

# Milestone  colors
Score : 18.62/35 :  53%
## Detail by Feature
| Feature              | Score                       | Missed tests                                                                                                                                         | Stdout           |
| :------------------- | :-------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------- |
| color_red            | 5/5 :  100%                 |                                                                                                                                                      |                  |
| color_blue           | 4.34/5 :  86%               |                                                                                                                                                      |                  |
| color_green          | 4.34/5 :  86%               |                                                                                                                                                      |                  |
| color_gray           | 0/5 :  0%                   | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY | <br><br><br><br> |
| color_invert         | 0/5 :  0%                   | Invert red image<br>Invert blue image<br>Invert green Image<br>Invert white Image<br>Invert black Image                                              | <br><br><br><br> |
| color_gray_luminance | 0/5 :  0%                   | Convert red image to GRAY<br>Convert blue image to GRAY<br>Convert green Image to GRAY<br>Convert white Image to GRAY<br>convert black Image to GRAY | <br><br><br><br> |
| color_desaturate     | 4.9399999999999995/5 :  98% |                                                                                                                                                      |                  |

# Milestone  transform
Score : 6/15 :  40%
## Detail by Feature
| Feature           | Score       | Missed tests                                                   | Stdout   |
| :---------------- | :---------- | :------------------------------------------------------------- | :------- |
| rotate_cw         | 3/3 :  100% |                                                                |          |
| rotate_acw        | 3/3 :  100% |                                                                |          |
| mirror_horizontal | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_vertical   | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |
| mirror_total      | 0/3 :  0%   | mirror square image<br>mirror large image<br>mirror high image | <br><br> |

# Milestone  resize
Score : 0/60 :  0%
## Detail by Feature
| Feature        | Score      | Missed tests                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | Stdout                            |
| :------------- | :--------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------- |
| scale_nearest  | 0/20 :  0% | scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3<br>scale_nearest 0.3<br>scale_nearest 0.5<br>scale_nearest 2<br>scale_nearest 1.3                                                                                 | <br><br><br><br><br><br><br><br>… |
| scale_bilinear | 0/20 :  0% | scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12<br>scale_bilinear 0.21<br>scale_bilinear 0.76<br>scale_bilinear 1.41<br>scale_bilinear 2.12                               | <br><br><br><br><br><br><br><br>… |
| scale_crop     | 0/20 :  0% | scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10<br>scale_crop 0 0 10 10<br>scale_crop 100 100 90 90<br>scale_crop 1 1 3 3<br>scale_crop 1 1 10 10 | <br><br><br><br><br><br><br><br>… |

