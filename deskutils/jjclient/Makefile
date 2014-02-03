# Created by: Lucas Holt <luke@justjournal.com>
# $FreeBSD: deskutils/jjclient/Makefile 342310 2014-02-02 14:57:32Z miwi $

PORTNAME=	jjclient
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	SF/justjournal/JustJournal%20UNIX%20Client/${PORTVERSION} \
		http://www.justjournal.com/software/unix/


MAINTAINER=	luke@justjournal.com
COMMENT=	A command line client for posting JustJournal entries

LIB_DEPENDS+=	libxmlrpc.so:${PORTSDIR}/net/xmlrpc-c

PLIST_FILES=	bin/jjclient

.include <bsd.port.mk>
