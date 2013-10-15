# Created by: Edson Brandi <ebrandi.home@uol.com.br> 
# $FreeBSD: sysutils/livecd/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	livecd
PORTVERSION=	1.2.4b
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.primeirospassos.org/

MAINTAINER=	ebrandi.home@uol.com.br
COMMENT=	Tool Set to create custom FreeBSD LiveCD

RUN_DEPENDS=	cdrecord:${PORTSDIR}/sysutils/cdrtools

NO_BUILD=	yes
MAKE_ENV=	INSTALL_DATA="${INSTALL_DATA}" \
		INSTALL_SCRIPT="${INSTALL_SCRIPT}"

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -E -e 's|/usr/local/|${PREFIX}|' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
