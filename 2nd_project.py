import cv2
import pytesseract
pytesseract.pytesseract.tesseract_cmd='C:\Program Files\Tesseract-OCR\tesseract.exe'
img=cv2.imread('1.png')
img=cv2.cvtcolor(img,cv2.color_BGR2RBG)
print(pytesseract.image_to_string(img))
cv2.imshow('result',img)
cv2.waitkey(0)