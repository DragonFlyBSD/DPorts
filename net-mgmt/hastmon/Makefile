# Created by: Mikolaj Golub <to.my.trociny@gmail.com>
# $FreeBSD: net-mgmt/hastmon/Makefile 329998 2013-10-10 13:41:55Z trociny $

PORTNAME=	hastmon
PORTVERSION=	0.3.1
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	trociny@FreeBSD.org
COMMENT=	Cluster monitoring daemon

LICENSE=	BSD

BUILD_DEPENDS=	mk-configure>=0.20:${PORTSDIR}/devel/mk-configure

MKCMAKE?=	${LOCALBASE}/bin/mkcmake
INSTALL_TARGET=	installdirs install

PORTDOCS=	ChangeLog COPYRIGHT README

do-build:
	${SETENV} ${MKCMAKE_ENV} ${MKCMAKE} -C ${WRKSRC}

do-install:
	${SETENV} ${MKCMAKE_ENV} DESTDIR=${STAGEDIR} \
		${MKCMAKE} -C ${WRKSRC} ${INSTALL_TARGET}

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for doc in ${PORTDOCS}
	${INSTALL_DATA} ${WRKDIR}/${DISTNAME}/${doc} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
