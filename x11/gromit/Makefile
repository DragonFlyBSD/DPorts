# Created by: Sergei Kolobov <sergei@kolobov.com>
# $FreeBSD: x11/gromit/Makefile 338762 2014-01-05 13:05:48Z antoine $

PORTNAME=	gromit
PORTVERSION=	20041213
PORTREVISION=	7
CATEGORIES=	x11
MASTER_SITES=	http://www.home.unix-ag.org/simon/gromit/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GRaphics Over Miscellaneous Objects (Gromit)

USE_GNOME=	gtk20
USES=		pkgconfig
CFLAGS+=	-lm

DOCS=		AUTHORS ChangeLog README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gromit ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/gromitrc ${STAGEDIR}${EXAMPLESDIR}
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>
