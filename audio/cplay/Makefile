# Created by: Jochem Kossen <j.kossen@home.nl>
# $FreeBSD: audio/cplay/Makefile 334771 2013-11-24 19:18:07Z bapt $

PORTNAME=	cplay
PORTVERSION=	1.49
PORTREVISION=	5
CATEGORIES=	audio
MASTER_SITES=	ftp://ftp.SpringDaemons.com/soft/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Curses-based front-end for various audio players

LICENSE=	GPLv2

USES=		gettext gmake
USE_PYTHON=	yes

MAKE_ARGS=	PREFIX="${STAGEDIR}${PREFIX}"

PORTDOCS=	README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
