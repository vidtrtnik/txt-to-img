# txt-to-img
Convert a text file to image

<b>TxtToImg</b> is an open-source program, which converts a text file to a series of images. It is written in C++ and uses the Qt Framework. The UI was designed using the Qt Creator.  
The GUI allows you to set some conversion settings. You can specify the input file and output folder and set the parameters for the generated images, like the font, colors and quality. The window also shows a preview of a sample image.
The input text is then parsed and drawn onto the automatically generated images. Currently, only the jpeg format is supported.

![Alt text](/screenshots/txttoimg_screenshot1.jpg?raw=true "TxtToImg 1.0 screenshot")

# Instructions
- Choose an input file for conversion. The input file must be in a .txt format. 
- Choose the output folder, where the output images will be generated.
- Click on the Font button to set the font name and size.
- You can also set the background and font color to your liking.
- Use the slider to specify the quality of the generated jpeg images.
- Set the desired resolution (width x height) of the output images. Minimum value is 100 x 100.
- Unheck the 'Parse new lines' if you want to strip all <code class="language-plaintext highlighter-rouge">\n</code> characters from text.
- Click the Start button to convert or click the Reset button to reset the parameters to the default values.

# Build instructions (Ubuntu)
Install qt5-default and build-essentials: <code class="language-plaintext highlighter-rouge">sudo apt install qt5-default build-essential</code>.   
Clone the TxtToImg repository: <code class="language-plaintext highlighter-rouge">git clone https://github.com/vidtrtnik/txt-to-img.git</code>.   
Go into the txt-to-img directory: <code class="language-plaintext highlighter-rouge">cd txt-to-img</code>.   
Run <code class="language-plaintext highlighter-rouge">qmake</code> and build the project with the command <code class="language-plaintext highlighter-rouge">make -j</code>.  
The executable <code class="language-plaintext highlighter-rouge">./txttoimg</code> will be generated in the same folder.  

# TODO
- Add support for png and gif (output)
- Add support for rtf and odf (input)


<i>Version: 1.0</i>  
<b>Author: Vid Trtnik</b>
