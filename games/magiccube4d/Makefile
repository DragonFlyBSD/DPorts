# Created by: Jeremy <karlj000@unbc.ca>
# $FreeBSD: games/magiccube4d/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	magiccube4d
PORTVERSION=	2.2
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	http://www.superliminal.com/cube/
DISTNAME=	mc4d-src-${PORTVERSION:S/./_/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	karlj000@unbc.ca
COMMENT=	MagicCube4D is a four-dimensional analog of Rubik's cube

USE_XORG=	x11 xext xt sm ice xaw
GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-src-${PORTVERSION:S/./_/}
DOCS=		ChangeLog Intro.txt MagicCube4D-unix.txt \
		ideas.txt readme-unix.txt

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/magiccube4d ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${INSTALL} -d -m 0755 ${DOCSDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.pre.mk>

.include <bsd.port.post.mk>
