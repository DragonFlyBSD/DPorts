# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: net/p5-Socket/Makefile 324314 2013-08-06 13:01:45Z sunpoet $

PORTNAME=	Socket
PORTVERSION=	2.011
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PEVANS
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Networking constants and support functions

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		Socket.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
BUILD_DEPENDS+=	p5-ExtUtils-Constant>=0.23:${PORTSDIR}/devel/p5-ExtUtils-Constant
.endif

.include <bsd.port.post.mk>
