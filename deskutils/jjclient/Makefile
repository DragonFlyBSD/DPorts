# Created by: Lucas Holt <luke@justjournal.com>
# $FreeBSD: deskutils/jjclient/Makefile 336190 2013-12-11 18:28:10Z bapt $

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
