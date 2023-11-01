# import PyPDF2
# pdfFiles = ["1.pdf", "2.pdf", "3.pdf"]
# merger = PyPDF2.PdfMerger()
# for fileName in pdfFiles:
#     pdffile = open(fileName, 'rb')
#     pdfReader = PyPDF2.PdfReader(pdffile)
#     merger.append(pdfReader)
# pdffile.close()
# merger.write('merged.pdf')


from PyPDF2 import PdfWriter
merger = PdfWriter()
for pdf in ["1.pdf", "2.pdf", "3.pdf"]:
    merger.append(pdf)
merger.write("merged-pdf.pdf")
merger.close()
