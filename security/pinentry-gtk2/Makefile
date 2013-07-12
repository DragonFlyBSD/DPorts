# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: security/pinentry-gtk2/Makefile 322559 2013-07-09 13:37:13Z makc $

PORTNAME=	pinentry
PORTREVISION=	3

COMMENT=	GTK+ 2.0 version of the GnuPG password dialog

CONFLICTS_INSTALL=	pinentry-[0-9]* pinentry-curses-* pinentry-gtk-* \
		pinentry-qt-* pinentry-qt4-*

PINENTRY_SLAVE=	-gtk2
PORT_OPTIONS+=	GTK2

MASTERDIR=	${.CURDIR}/../pinentry

.include "${MASTERDIR}/Makefile"
