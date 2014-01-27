# Created by: David O'Brien (obrien@cs.ucdavis.edu)
# $FreeBSD: vietnamese/vn7to8/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vn7to8
PORTVERSION=	1.1.1
CATEGORIES=	vietnamese
MASTER_SITES=	ftp://ftp.monash.edu.au/pub/vietnam/unix/
DISTNAME=	vn7to8
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	obrien@FreeBSD.org
COMMENT=	Converts between 7-bit Vietnamese VIQR and 8-bit VISCII formats

BUILD_DEPENDS=	${LOCALBASE}/lib/libviqr.a:${PORTSDIR}/vietnamese/libviet

CFLAGS+=	-I${PREFIX}/include/viet
MAN1=		vn7to8.1 vn8to7.1 vn80to81.1

NO_STAGE=	yes
post-extract:
	@ ${MV} ${WRKDIR}/lib ${WRKDIR}/DONT.lib
	@ ${MV} ${WRKDIR}/include ${WRKDIR}/DONT.include

post-install:
	@${INSTALL_MAN} ${FILESDIR}/vn7to8.1 ${PREFIX}/man/man1
	@${INSTALL_MAN} ${FILESDIR}/vn80to81.1 ${PREFIX}/man/man1
	@${INSTALL_MAN} ${FILESDIR}/vn8to7.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
