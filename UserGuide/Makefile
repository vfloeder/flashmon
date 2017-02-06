all: *.tex
	pdflatex --draftmode FlashmonUserGuide.tex
	pdflatex FlashmonUserGuide.tex
	make clean
	evince FlashmonUserGuide.pdf &
	
clean:
	rm -rf *.aux *.log *.out
