# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: textproc/tkdiff/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tkdiff
PORTVERSION=	4.2
PORTREVISION=	1
CATEGORIES=	textproc tk
MASTER_SITES=	SF

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	A Tk frontend for diff(1)

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

WRKSRC=		${WRKDIR}/${PORTNAME}-unix

USES=		tk:wrapper
NO_BUILD=	yes

PLIST_FILES=	bin/tkdiff

post-patch:
	${FIND} ${WRKSRC} -type f | ${XARGS} \
		${REINPLACE_CMD} -e '/^exec wish/s|wish|${WISH}|g' -e '/^exec tclsh/s|tclsh|${TCLSH}|g'

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/tkdiff ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
