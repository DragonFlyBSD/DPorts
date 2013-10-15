# $FreeBSD: net/pxe-pdhcp/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	pxe-pdhcp
PORTVERSION=	0.0.2007
CATEGORIES=	net
MASTER_SITES=	http://people.allbsd.org/~hrs/FreeBSD/

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Preboot Execution Environment server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/README.md

WRKSRC=		${WRKDIR}/frsyuki-${PORTNAME}-a201b88
SUB_FILES=	Makefile
MAKE_ENV=	PORTDOCS=${PORT_OPTIONS:MDOCS}
PLIST_FILES=	sbin/${PORTNAME}

PORTDOCS=	README.md
MAN8=		${PORTNAME}.8

OPTIONS_DEFINE=	DOCS

post-extract: apply-slist
	@${INSTALL_DATA} ${WRKDIR}/Makefile ${FILESDIR}/${PORTNAME}.8 ${WRKSRC}

NO_STAGE=	yes
.include <bsd.port.mk>
