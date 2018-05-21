#ifndef SERVEUR_H
#define SERVEUR_H

#ifndef QT_VERSION
#include <qglobal.h>
#endif

#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtGui>
#else
#include <QtWidgets>
#endif
#include <QtNetwork>

class Serveur : public QTcpSocket
{
	Q_OBJECT

	public:
        Serveur();
		QTextEdit *affichage;
        QListView *userList;
		QString pseudo,serveur,msgQuit;
		int port;
        QTabWidget *tab;
		QMap<QString,QTextEdit *> conversations;
		QSystemTrayIcon *tray;

		bool updateUsers;

		QString parseCommande(QString comm,bool serveur=false);

		QWidget *parent;

	signals:
		void pseudoChanged(QString newPseudo);
		void joinTab();
        void tabJoined();

	public slots:
		void readServeur();
		void errorSocket(QAbstractSocket::SocketError);
        void connected();
        void joins();
		void sendData(QString txt);
		void join(QString chan);
        void leave(QString chan);
        void ecrire(QString txt,QString destChan="",QString msgTray="");
        void updateUsersList(QString chan="",QString message="");

		//void tabChanged(int index);
};

#endif // SERVEUR_H
