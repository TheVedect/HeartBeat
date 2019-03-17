In this small program I tried to form a Heart and make a plot using GNUplot.
As you can see from the code, it is not optimized, as I didn't need it.
In the program, in order to create the Heart, I have initialized the x and y coordinates, through a parameterization of a parameter
to complete a complete turn angle. I can explain the double for loop knowing that each data set corresponds to a single
frame of the sequence, so I had to start from the beginning for each frame, until completing the whole Heart.
In the file I saved in the program, since GNUplot treats as separated data those separated by two empty lines,
I did just that.
To make the Heart beat, I introduced an additional parameter c that would allow me to reduce or increase the size of the Heart
at each frame.
It wasn't too difficult.
