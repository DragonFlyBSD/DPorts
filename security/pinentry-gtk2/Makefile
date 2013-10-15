# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: security/pinentry-gtk2/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pinentry
PORTREVISION=	0

COMMENT=	GTK+ 2.0 version of the GnuPG password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk2
PORT_OPTIONS+=	GTK2

MASTERDIR=	${.CURDIR}/../pinentry

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
