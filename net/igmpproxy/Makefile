# Created by: asami
# $FreeBSD: net/igmpproxy/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	igmpproxy
PORTVERSION=	0.1
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE}
MASTER_SITE_SUBDIR=	${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	melifaro@ipfw.ru
COMMENT=	Multicast forwarding IGMP proxy

HOMEPAGE=	http://igmpproxy.sourceforge.net/

USE_RC_SUBR=	igmpproxy
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

MAN5=		igmpproxy.conf.5
MAN8=		igmpproxy.8

NO_STAGE=	yes
.include <bsd.port.mk>
