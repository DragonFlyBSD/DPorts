# New ports collection makefile for:	beansdb
# Date created:		2010-03-27
# Whom:			Qing Feng <qingfeng@douban.com>
#
# $FreeBSD: ports/databases/beansdb/Makefile,v 1.9 2012/11/17 05:55:05 svnexp Exp $
#

PORTNAME=	beansdb
PORTVERSION=	0.5.3
CATEGORIES=	databases
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	qingfeng@douban.com
COMMENT=	Yet another distributed key-value storage system from Douban Inc

GNU_CONFIGURE=	yes
CFLAGS+=	${PTHREAD_LIBS}

MAN1=		beansdb.1
PLIST_FILES=	bin/beansdb

.include <bsd.port.mk>
