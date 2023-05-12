import sys

#import console as console
#cleaimport document as document
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtWebEngineWidgets import *


class MainWindow(QMainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.browser = QWebEngineView()
        self.browser.setUrl(QUrl('http://google.com'))
        self.setCentralWidget(self.browser)
        self.showMaximized()

        # navbar
        navbar = QToolBar()
        self.addToolBar(navbar)

        back_btn = QAction('👈', self)
        back_btn.triggered.connect(self.browser.back)
        navbar.addAction(back_btn)

        forward_btn = QAction('👉', self)
        forward_btn.triggered.connect(self.browser.forward)
        navbar.addAction(forward_btn)

        reload_btn = QAction('🔃', self)
        reload_btn.triggered.connect(self.browser.reload)
        navbar.addAction(reload_btn)

        home_btn = QAction('🏠', self)
        home_btn.triggered.connect(self.navigate_home)
        navbar.addAction(home_btn)

        mail_btn = QAction('📪', self)
        mail_btn.triggered.connect(self.navigate_mail)
        navbar.addAction(mail_btn)

        drive_btn = QAction('📁', self)
        drive_btn.triggered.connect(self.navigate_drive)
        navbar.addAction(drive_btn)




        self.url_bar = QLineEdit()
        self.url_bar.returnPressed.connect(self.navigate_to_url)
        navbar.addWidget(self.url_bar)

        self.browser.urlChanged.connect(self.update_url)

    def navigate_home(self):
        self.browser.setUrl(QUrl('https://google.com'))

    def navigate_mail(self):
        self.browser.setUrl(QUrl('https://mail.google.com/mail/u/0/?tab=rm&ogbl#inbox'))

    def navigate_drive(self):
        self.browser.setUrl(QUrl('https://drive.google.com/drive/u/0/my-drive'))

    def navigate_to_url(self):
        url = self.url_bar.text()
        self.browser.setUrl(QUrl(url))

    def update_url(self, q):
        self.url_bar.setText(q.toString())



app = QApplication(sys.argv)
QApplication.setApplicationName('PyQtBrowser')
window = MainWindow()
app.exec_()

document.getElementById("result").innerHTML = 'Compiled Python script in Chrome'
console.log('hello from python')

