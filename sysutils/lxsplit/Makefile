# Created by: kiesel@schlund.de
# $FreeBSD: sysutils/lxsplit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	lxsplit
PORTVERSION=	0.2.4
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple program to split or join files

LICENSE=	GPLv2

DOCS=		ChangeLog README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lxsplit ${STAGEDIR}${PREFIX}/bin/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${DOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
