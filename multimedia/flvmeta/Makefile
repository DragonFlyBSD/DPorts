# New ports collection makefile for:	flvmeta
# Date created:		31 July 2009
# Whom:			Earl Gay <earl@eeg3.net>
#
# $FreeBSD: ports/multimedia/flvmeta/Makefile,v 1.4 2012/11/17 05:59:48 svnexp Exp $
#

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
