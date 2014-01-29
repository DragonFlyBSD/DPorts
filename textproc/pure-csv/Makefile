# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: textproc/pure-csv/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pure-csv
PORTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	https://cdn.bitbucket.org/purelang/pure-lang/downloads/
DIST_SUBDIR=	pure

MAINTAINER=	lichray@gmail.com
COMMENT=	CSV reading and writing module for the Pure language

LICENSE=	BSD

USES=		pure

PLIST_FILES=	lib/pure/csv.pure \
		lib/pure/csv.so

NO_STAGE=	yes

PORTDOCS=	README

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
