# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/libdomainkeys/Makefile 316230 2013-04-22 13:27:47Z bapt $

PORTNAME=	libdomainkeys
PORTVERSION=	0.69
CATEGORIES=	mail
MASTER_SITES=	SF/domainkeys/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DomainKeys library

USE_LDCONFIG=	YES
SHLIB_MAJOR=	3
PLIST_SUB=	SHLIB_MAJOR="${SHLIB_MAJOR}"

USE_OPENSSL=	YES

post-patch:
	${MV} ${WRKSRC}/Makefile ${WRKSRC}/Makefile.prev
	@${SED} -e "s=%%SHLIB_MAJOR%%=${SHLIB_MAJOR}=g" \
		${FILESDIR}/Makefile > ${WRKSRC}/Makefile

post-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/dknewkey ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/test ${DATADIR}/dktest

.include <bsd.port.mk>
