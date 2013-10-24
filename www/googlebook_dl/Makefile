# $FreeBSD: www/googlebook_dl/Makefile 331124 2013-10-21 11:23:56Z ak $

PORTNAME=	googlebook_dl
PORTVERSION=	20120817
CATEGORIES=	www
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ak@FreeBSD.org
COMMENT=	Command-line utility for downloading books from Google Books

LICENSE=	BSD

RUN_DEPENDS=	wget:${PORTSDIR}/ftp/wget

NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME}.sh \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
