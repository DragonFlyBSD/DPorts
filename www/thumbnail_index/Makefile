# Created by: Yoshiro MIHIRA <sanpei@FreeBSD.org>
# $FreeBSD: www/thumbnail_index/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	thumbnail_index
PORTVERSION=	1998.08.10
PORTREVISION=	4
CATEGORIES=	www
MASTER_SITES=	http://www.acme.com/software/thumbnail_index/
DISTNAME=	${PORTNAME}_10aug1998

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Make an HTML index file for a bunch of images

RUN_DEPENDS=	djpeg:${PORTSDIR}/graphics/jpeg \
		pnmscale:${PORTSDIR}/graphics/netpbm

NO_STAGE=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
MAN1=		thumbnail_index.1

.include <bsd.port.mk>
