# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/rsstail/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rsstail
PORTVERSION=	1.8
CATEGORIES=	www
MASTER_SITES=	http://www.vanheusden.com/rsstail/ CENKES
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Simple RSS monitor

LIB_DEPENDS=	mrss.19:${PORTSDIR}/textproc/libmrss

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
PLIST_FILES=	bin/${PORTNAME}
MAN1=		${PORTNAME}.1

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|=-O2 -Wall|+=|;/^LDFLAGS/s|=|+=|' ${WRKSRC}/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	@${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1/

.include <bsd.port.mk>
