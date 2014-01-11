# $FreeBSD: www/p5-Plack-Middleware-AMF/Makefile 338778 2014-01-05 14:02:22Z az $

PORTNAME=	Plack-Middleware-AMF
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to use AMF with Plack

RUN_DEPENDS=	\
	p5-Data-AMF>=0.03:${PORTSDIR}/converters/p5-Data-AMF \
	p5-Plack>0:${PORTSDIR}/www/p5-Plack \
	p5-UNIVERSAL-require>0:${PORTSDIR}/devel/p5-UNIVERSAL-require
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
