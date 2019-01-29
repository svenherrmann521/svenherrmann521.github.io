function ImageGalleryOpenImage(src, title, width, heigth) {
	var windowContent = "<html>"
	  + "<head>"
	  + "<title>" + title + "</title>"
	  + "<style>body{margin:0px}</style>"
	  + "</head>"
	  + "<body>"
	  + "<img src=\"" + src + "\" alt=\"" + title + "\">"
	  + "</body>"
	  + "</html>";

	var previewWindow = self.open('', 'modWin', 'width=' + width + ', height=' + heigth + ', top=100, left=100, scrollbars=yes');
	previewWindow.document.write(windowContent);
	previewWindow.document.close();
	previewWindow.focus();
}