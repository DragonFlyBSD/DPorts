# Created by: Qing Feng <qingfeng@douban.com>
# $FreeBSD: databases/beansdb/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	beansdb
PORTVERSION=	0.5.3
CATEGORIES=	databases
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	qingfeng@douban.com
COMMENT=	Yet another distributed key-value storage system from Douban Inc

GNU_CONFIGURE=	yes
USE_CSTD=	gnu89
CFLAGS+=	${PTHREAD_LIBS}

MAN1=		beansdb.1
PLIST_FILES=	bin/beansdb

NO_STAGE=	yes
.include <bsd.port.mk>
