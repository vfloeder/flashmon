all: *.tex
	pdflatex --draftmode FlashmonTutorial.tex
	pdflatex FlashmonTutorial.tex
	make clean
	evince FlashmonTutorial.pdf &
	
clean:
	rm -rf *.aux *.log *.out
