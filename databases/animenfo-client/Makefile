# $FreeBSD: databases/animenfo-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	animenfo
PORTVERSION=	20020819
CATEGORIES=	databases
MASTER_SITES=	http://www.animenfo.com/extension/files/
PKGNAMESUFFIX=	-client${PKGNAMESUFFIX2}
DISTNAME=	${PORTNAME}-client
EXTRACT_SUFX=	.tgz

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	AnimeNfo client

LICENSE=	GPLv2

USES=		gmake
PLIST_FILES=	bin/animenfo-client

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/animenfo-client ${STAGEDIR}/${PREFIX}/bin/

.include <bsd.port.mk>
