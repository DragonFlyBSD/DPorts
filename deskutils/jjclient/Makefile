# Created by: Lucas Holt <luke@justjournal.com>
# $FreeBSD: deskutils/jjclient/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include <bsd.port.mk>
