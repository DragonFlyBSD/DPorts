# Created by: Anton Voronin <anton@urc.ac.ru>
# $FreeBSD: net-mgmt/cisco_conf/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	cisco_conf
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.chelcom.ru/~anton/projects/files/
DISTNAME=	ciscoconf-${PORTVERSION}
DIST_SUBDIR=	cisco_conf

MAINTAINER=	anton@chelcom.ru
COMMENT=	Simple configuration editor for Cisco devices

RUN_DEPENDS=	${LOCALBASE}/bin/joe:${PORTSDIR}/editors/joe

WRKSRC=		${WRKDIR}/ciscoconf

DOCSDIR=	${PREFIX}/share/doc/ciscoconf

NO_BUILD=	YES

NO_STAGE=	yes
.include <bsd.port.mk>
