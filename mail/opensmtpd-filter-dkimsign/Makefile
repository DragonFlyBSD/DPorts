# Created by: Michael Neumann <mneumann@ntecs.de>
# $FreeBSD$

PORTNAME=	opensmtpd-filter-dkimsign
PORTVERSION=	0.5
CATEGORIES=	mail
DISTNAME=	filter-dkimsign-${PORTVERSION}

MAINTAINER=	mneumann@ntecs.de
COMMENT=	dkim signer integration to the OpenSMTPD daemon

LICENSE=	ISCL

MASTER_SITES=	https://distfiles.sigtrap.nl/

RUN_DEPENDS=	opensmtpd>=6.6.0:mail/opensmtpd

LIB_DEPENDS=	libopensmtpd.so:mail/libopensmtpd

USES=	gmake

post-patch:
	${RM} ${BUILD_WRKSRC}/Makefile
	${MV} ${BUILD_WRKSRC}/Makefile.gnu ${BUILD_WRKSRC}/Makefile

post-build:
	${MV} ${WRKSRC}/filter-dkimsign ${WRKSRC}/opensmtpd-filter-dkimsign
	${MV} ${WRKSRC}/filter-dkimsign.8 ${WRKSRC}/opensmtpd-filter-dkimsign.8

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/opensmtpd/
	${INSTALL_PROGRAM} ${WRKSRC}/opensmtpd-filter-dkimsign ${STAGEDIR}${PREFIX}/libexec/opensmtpd/
	${INSTALL_MAN} ${WRKSRC}/opensmtpd-filter-dkimsign.8 ${STAGEDIR}${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
