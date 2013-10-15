# Created by: Ayumi M <ayu@commun.jp>
# $FreeBSD: archivers/packddir/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	packddir
PORTVERSION=	0.0.6
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	${PORTNAME}
DISTNAME=	upackddir_${PORTVERSION}-1

MAINTAINER=	ayu@commun.jp
COMMENT=	These trivial utilities can unpack and create PackdDir archives

WRKSRC=		${WRKDIR}/src

NO_STAGE=	yes
PLIST_FILES=	bin/upackddir
MAN1=		upackddir.1

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's|$$(DESTDIR)/usr|${PREFIX}|' ${WRKSRC}/Makefile

post-install:
	${INSTALL_MAN} ${WRKSRC}/upackddir.1 ${MANPREFIX}/man/man1

.include <bsd.port.post.mk>
