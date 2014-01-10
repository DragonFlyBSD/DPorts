# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-UUID/Makefile 338875 2014-01-06 13:26:14Z az $

PORTNAME=	UUID
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JNH
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Perl extension for using UUID interfaces as defined in e2fsprogs

LIB_DEPENDS=	uuid:${PORTSDIR}/misc/e2fsprogs-libuuid

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
