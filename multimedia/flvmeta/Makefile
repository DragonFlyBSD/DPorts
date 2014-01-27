# Created by: Earl Gay <earl@eeg3.net>
# $FreeBSD: multimedia/flvmeta/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	flvmeta
PORTVERSION=	1.0.11
CATEGORIES=	multimedia
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	earl@eeg3.net
COMMENT=	Manipulation tool for Adobe Flash Video files (FLV)

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/flvmeta bin/flvdump

pre-install:
	${CHMOD} a+x ${WRKSRC}/install-sh

.include <bsd.port.mk>
