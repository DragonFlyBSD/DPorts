# Created by: bms
# $FreeBSD: devel/chrpath/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=	chrpath
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	devel sysutils
MASTER_SITES=	http://ftp.tux.org/pub/X-Windows/ftp.hungry.com/chrpath/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to modify DT_RPATH in existing ELF binaries

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

MAN1=		chrpath.1

USES=		fmake

PLIST_FILES=	bin/chrpath

PORTDOCS=	AUTHORS ChangeLog NEWS README

OPTIONS_DEFINE=	DOCS

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
.	for i in ${PORTDOCS}
		${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.	endfor
.endif

.include <bsd.port.mk>
