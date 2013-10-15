# Created by: Earl Gay <earl@eeg3.net>
# $FreeBSD: multimedia/flvmeta/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

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
