# Created by: sumikawa@FreeBSD.org
# $FreeBSD: misc/lv/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	lv
PORTVERSION=	4.51
PORTREVISION=	3
CATEGORIES=	misc
MASTER_SITES=	http://www.ff.iij4u.or.jp/~nrt/freeware/
DISTNAME=	lv451

MAINTAINER=	sumikawa@FreeBSD.org
COMMENT=	Powerful Multilingual File Viewer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/../GPL.txt

WRKSRC=		${WRKDIR}/${DISTNAME}/src
GNU_CONFIGURE=	yes

MAN1=		lv.1

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFAULT=	DOCS

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	(cd ${WRKDIR}/${DISTNAME}; \
	${INSTALL_DATA} *.html hello.sample* ${DOCSDIR})
.endif

.include <bsd.port.mk>
