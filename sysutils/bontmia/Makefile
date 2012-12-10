# New ports collection makefile for:   bontmia
# Date created:		11 december 2009
# Whom:			Henrik Andersen
#
# $FreeBSD: ports/sysutils/bontmia/Makefile,v 1.3 2012/11/17 06:01:25 svnexp Exp $
#

PORTNAME=	bontmia
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://kosmos.ttyv0.se/attachments/download/37/

MAINTAINER=	ports@henrikandersen.se
COMMENT=	A small tool for incremental backups over network

RUN_DEPENDS=	rsync:${PORTSDIR}/net/rsync

USE_PERL5_RUN=	yes

NO_BUILD=	yes

PLIST_FILES=	bin/bontmia

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bontmia ${PREFIX}/bin

.include <bsd.port.mk>
