# New ports collection makefile for:	Plack::Middleware::Header
# Date created:		02 Apr 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: www/p5-Plack-Middleware-Header/Makefile 325960 2013-09-02 09:44:14Z az $
#

PORTNAME=	Plack-Middleware-Header
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to modify HTTP response headers

RUN_DEPENDS=	\
	p5-Plack>0:${PORTSDIR}/www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Plack::Middleware::Header.3

.include <bsd.port.mk>
