# Created by: Lukasz Komsta
# $FreeBSD: security/ssss/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ssss
PORTVERSION=	0.5
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	http://point-at-infinity.org/ssss/

MAINTAINER=	luke@novum.am.lublin.pl
COMMENT=	Shamir's Secret Sharing Scheme

LIB_DEPENDS=	gmp.10:${PORTSDIR}/math/gmp

PLIST_FILES=	bin/ssss-combine bin/ssss-split

MAN1=		ssss.1

NO_STAGE=	yes
.include <bsd.port.mk>
