# Created by: Matt Jibson <dolmant@dolmant.net>
# $FreeBSD: mail/relaydb/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	relaydb
PORTVERSION=	1.8
CATEGORIES=	mail
MASTER_SITES=	http://www.benzedrine.cx/

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Spam relay database

MAN8=		relaydb.8
MANCOMPRESSED=	yes
PLIST_FILES=	bin/relaydb

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/relaydb ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/relaydb.8.gz ${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
