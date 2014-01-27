# Created by: Takayuki Nakao <t@nakao.org>
# $FreeBSD: japanese/icanna/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	icanna
PORTVERSION=	0.9.0
CATEGORIES=	japanese
MASTER_SITES=	http://www.ceres.dti.ne.jp/~knak/
DISTNAME=	yc-${YC_VERSION}

MAINTAINER=	t@nakao.org
COMMENT=	Canna connector for yc.el via unix domain socket

YC_VERSION=	4.0.13

PLIST_FILES+=	bin/icanna

NO_STAGE=	yes
do-build:
	cd ${WRKSRC} && \
		${CC} ${CFLAGS} -o icanna icanna.c

do-install:
	cd ${WRKSRC} && \
		${INSTALL_PROGRAM} icanna ${PREFIX}/bin/icanna

.include <bsd.port.mk>
